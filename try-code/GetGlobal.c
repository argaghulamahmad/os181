/*
* 2017 Rahmat M. Samik-Ibrahim
* http://rahmatm.samik-ibrahim.vlsm.org/
* This is free software.
* REV00 Mon Oct 16 21:15:03 WIB 2017
* START Mon Oct 16 21:15:03 WIB 2017
*/

#include <stdio.h>

char globalChar='a';

char* getGlobal(void) {
	char* charPTR=&globalChar;
	printf("getGlobal1 %c\n", globalChar);
	*charPTR='b';
	printf("getGlobal2 %c\n", *charPTR);
	return charPTR;
}
void main (void) {
	char localChar='c';
	printf("==== main1 %c\n", localChar);
	localChar=*getGlobal();
	printf("==== main2 %c\n", localChar);
}
