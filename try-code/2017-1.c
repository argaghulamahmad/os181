/*
* (c) 2017 Rahmat M. Samik-Ibrahim
* This is free software
* REV00 Thu Mar 30 18:27:30 WIB 2017
* START Thu Mar 30 18:27:30 WIB 2017
* INT is 32 bit little endian
* 41H='A'; 42H='B'; 43H='C"; 44H='D'
*/


#include <stdio.h>
char chrary[]="ZZZZ ZZZZ ";
void main(void) {
	char chrvar = 'M';
	int intvar = 0x41424344;
	int* intptr = (int*) chrary;
	printf("YY. chrary=%p\n", chrary);
	printf("ZZ. intprt=%p\n", intptr);
	printf("01. chrvar=%c\n", chrvar);
	printf("02. *chrary=%c\n", *chrary);
	printf("03. str chrary=%s\n", chrary);
	*intptr = intvar;
	printf("04. str chrary=%s\n", chrary);
}
