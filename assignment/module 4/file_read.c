#include<stdio.h>
int main()
{
	FILE *fptr;
	char str[100];
	fptr=fopen("C:/C,C++/C/hamir.txt","r");
	fscanf(fptr,"%s",&str);
	printf(str);
	
}
