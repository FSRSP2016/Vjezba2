#include <stdio.h> 
#define MAXRED 8
#define MAXSTUP 10

int zbroj(int *polje, int red, int stup)
{
	return -1;
}

void main()
{
	int red, stup;
	int polje[MAXRED][MAXSTUP];

	FILE *f;
	f = fopen("UlazZaDvodimenzionalnoPolje.txt", "r");
	if (f == NULL){
		printf("Greška! Datoteka se ne moze otvoriti!");
		return;
	}

}

