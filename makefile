 .PHONY = all clean all
 AR=ar
 CC=gcc
 FLAGS= -Wall -g

all:mains libclassloops.a libclassloops.so libclassrec.so libclassrec.a

libclassrec.a: advancedClassificationRecursion.o basicClassification.o
				$(AR) -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o
libclassrec.so: advancedClassificationRecursion.o basicClassification.o
				gcc -shared -o libclassrec.so advancedClassificationRecursion.o basicClassification.o
libclassloops.a: advancedClassificationLoop.o basicClassification.o
				$(AR) -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o	
libclassloops.so: advancedClassificationLoop.o basicClassification.o
				gcc -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o

mains: main.o libclassrec.a libclassloops.a
		$(CC) $(FLAGS) -o mains main.o  libclassrec.a libclassloops.a
mainloop:main.o libclassloops.so
		$(CC) $(FLAGS) -o mainloop main.o libclassloops.so
maindrec: main.o libclassrec.so
		$(CC) $(FLAGS) -o maindrec main.o libclassrec.so
main.o:main.c NumClass.h
		$(CC) $(FLAGS) -c main.c

clean:
	rm -f *.o *.a *.so *.out *.gch maindloop maindrec mains
