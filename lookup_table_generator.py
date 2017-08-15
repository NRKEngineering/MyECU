#! /usr/bin/python


filename = "WaterTemp_Lookup.h"

file = open(filename, "w+")

arraySize = 1024

# Write the leading stuff here
file.write("const float waterData[1024] =\n{ ")

cnt = 0

for index in range(0,arraySize):
	file.write("\t%f,\n" % ((5.0/1024)*(index)))


file.write("}")

file.close()
