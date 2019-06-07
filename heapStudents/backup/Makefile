heapstudents: main.o address.o student.o date.o
	g++ main.o address.o student.o date.o -o heapstudents
main.o: main.cpp address.h student.h date.h
	g++ -c main.cpp
student.o: student.cpp student.h address.h date.h
	g++ -c student.cpp
address.o: address.cpp address.h
	g++ -c address.cpp
date.o: date.cpp date.h
	g++ -c date.cpp
clear:
	rm *.o
	rm heapstudents
run:
	./ heapstudents
 
