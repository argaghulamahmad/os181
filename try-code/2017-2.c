/*
* (c) 2017 Rahmat M. Samik-Ibrahim
* http://rahmatm.samik-ibrahim.vlsm.org/
* This is free software.
* REV00 Mon Oct 16 21:15:03 WIB 2017
* START Mon Oct 16 21:15:03 WIB 2017
*/

#include <stdio.h>

char* stringChar="HALLO";
char* stringPTR;
void main (void) {
	stringPTR=stringChar;
	printf ("ADDR1: %p VAL: %p STR: %s\n", &stringChar,
		stringChar, stringChar);
	printf ("ADDR2: %p VAL: %p STR: %s\n", &stringPTR,
		stringPTR, stringPTR);
	while (*(++stringPTR) != 0 ) {
		printf ("ADDR3: %p VAL: %p STR: %s\n", &stringPTR,
			stringPTR, stringPTR);
		}
	printf ("End of String = %p\n", stringPTR);
}

