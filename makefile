
.PHONY =all clean
AR=ar
CC=gcc
FLAGS= -Wall -g



all:  mains recursives loops loopd recursived 

recursives: advancedClassificationRecursion.o basicClassification.o
				$(AR) -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o
recursived: advancedClassificationRecursion.o basicClassification.o
				gcc -shared -o libclassrec.so advancedClassificationRecursion.o basicClassification.o
loops: advancedClassificationLoop.o basicClassification.o
				$(AR) -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o	
loopd: advancedClassificationLoop.o basicClassification.o
				gcc -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o

mains: main.o recursives
		$(CC) $(FLAGS) -o mains main.o  libclassrec.a

maindloop:main.o libclassloops.so
		$(CC) $(FLAGS) -o maindloop main.o libclassloops.so
maindrec: main.o libclassrec.so
		$(CC) $(FLAGS) -o maindrec main.o libclassrec.so
main.o:main.c NumClass.h
		$(CC) $(FLAGS) -c main.c

clean:
	rm -f *.o *.a *.so *.out *.gch maindloop maindrec mains
