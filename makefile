
# made using http://www.rioki.org/2012/10/28/ultimate-cpp-library-makefile.html

# Change these for each project
PACKAGE  = NRK1000
VERSION	 = 1.0.0

# You shouldn't have to change anything below

# Set up build enviroment
CC  	 ?= gcc
CXX 	 ?= g++
LD	 = g++
CFLAGS	 = -I
CXXFLAGS += -Wall -Wextra -std=c++11 -Iinclude -DVERSION=\"$(VERSION)\"
LDFLAGS  += -lfltk

# Set up files
HDRS	 = $(wildcard include/*.h)
SRCHD	 = $(wildcard src/*.h)
SRCS 	 = $(wildcard src/*.cpp)
LIBS	 = - lalib
TESTHD	 = $(wildcard test/*.h)
TESTSRC	 = $(wildcard test/*.cpp)
TESTLIBS = $((lib_libs) -lUnitTest++

# This is for distribution package
extra_dist = makefile README.md
dist_files = $(HDRS) $(SRCHDRS) $(SRCS) $(TESTHD) $(TESTSRC) $(extra_dist)


# Ensures portability between POSIX and Windows
ifeq ($(MSYSTEM), MIGGW32)
	EXEEXT = .exe
	LIBEXT = .dll
else
	EXEEXT = 
	LIBEXT = .so
endif

.PHONY: all check clean install uninstall dist

# make the project
all: $(PACKAGE)$(LIBEXT)

$(PACKAGE)$(LIBEXT): $(patsubst %.cpp, %.o, $(SRCS))
	$(CXX) -shared -fPIC $(CXXFLAGS) $(LDFLAGS) $^ $(LIBS) -Wl, --out-implib=$(patsudst %$(LIBEXT), lib%.a, $@) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -MD -c $< -o $(patsubst %.cpp, %.o, $<)

ifneq "$(MAKECMDGOALS)" "clean"
DEPS  = $(patsudst %.cpp, %.d, $(SRCS))
DEPS += $(patsudst %.cpp, %.d, $(TESTSRC))
-include $(DEPS)
endif

# Clean the project
clean:
	rm -f src/*.o src/*.d test/*.o test/*.d $(PACKAGE)$(LIBEXT) test-$$(PACKAGE)$(EXEEXT)

# install
install: $(PACKAGE)$(LIBEXT)
	mkdir -p $(prefix)/include/$(PACKAGE)
	cp $(HDRS) $(prefix)/include/$(PACKAGE)
	mkdir -p $(prefix)/lib
	cp lib$(PACKAGE).a $(prefix)/lib
	mkdir -p $(prefix)/bin
	cp $(prefix)/bin/$(PACKAGE)$(LIBEXT)

uninstall:
	rm -r $(prefix)/include/$(PACKAGE)
	rm $(prefix)/lib/lib$(PACKAGE).a
	rm $(prefix)/bin/$(PACKAGE)$(LIBEXT)

$prefix=/opt make install

check: test-$(PACKAGE)$(EXEEXT)
	./test-$(PACKAGE)$(EXEEXT)

test-$(PACKAGE)$(EXEEXT): $(PACKAGE)$(LIBEXT) $(patsudst %.cpp, %.o, $(test_src))
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ $(TESTLIBS) -o $@

# Make a distribution package of the project
dist: 
	mkdir $(PACKAGE)-$(VERSION)
	cp --parents $(dist_files) $(PACKAGE)-$(VERSION)
	tar -czvf $(PACKAGE)-$(VERSION).tar.gz $(PACKAGE)_$(VERSION)
	rm -rf $(PACKAGE)_$(VERSION)
