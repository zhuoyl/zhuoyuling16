all: paixu
paixu: sort.c textsort.c
	gcc sort.c textsort.c -o paixu

clean: 
	rm paixu
