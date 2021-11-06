.PHONY =all clean
AR=ar
CC=gcc
FLAGS= -Wall -g
loops:libclassloops.a
libclassloops.a: advancedClassificationLoop.o basicClassification.o
	$(AR) -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o	
recursives:libclassrec.a
libclassrec.a: advancedClassificationRecursion.o basicClassification.o
	$(AR) -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o
recursived:libclassrec.so
libclassrec.so: advancedClassificationRecursion.o basicClassification.o
	gcc -shared -o libclassrec.so advancedClassificationRecursion.o basicClassification.o
loopd:libclassloops.so
libclassloops.so: advancedClassificationLoop.o basicClassification.o
	gcc -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o
mains: main.o recursives
	$(CC) $(FLAGS) -o mains main.o libclassrec.a
maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so
maindloop:main.o libclassloops.so
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so
all: loops recursives recursived loopd mains maindloop maindrec
clean:
	rm -f *.o *.a *.so *.out *.gch maindloop maindrec mains
main.o:main.c NumClass.h
	$(CC) $(FLAGS) -c main.c
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAG) -c advancedClassificationLoop.c 
basicClassification.o: basicClassification.c NumClass.h
	
