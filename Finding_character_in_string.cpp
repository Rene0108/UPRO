#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

#define MAX 50

/* Write a function FindFirstCharacter that as parameters takes string of characters 'string' and sign z. 
   If the 'z' character exists in 'string', the function returns the pointer to the first
   found 'z' character in 'string', otherwise, the function should return the appropriate result to
   on the basis of which it will be possible to recognize that this sign is not present in the sequence.
   In the main program, read a string of characters no longer than 50 from the keyboard
   characters, read the z character, and then use the function to determine where that character is
   finds and prints the string from the found character to the end of the string.                         */

using namespace std;

char *FindFirstCharacter(char *p, char z) {
	while (*p != '\0') {
		if (*p == z) {
			return p;
		}
		p = p + 1;
	}
	return NULL;
}

int main(int argc,char** argv) {

    char string[MAX + 1], z;
    printf ("Enter a string of characters no longer than 50 sighns: ");
    fgets (string, MAX + 1, stdin);
    
    printf ("Load one character: ");
    scanf ("%c", &z);
    
    char *p = string;
    p = FindFirstCharacter(p, z);
    
    if (*p == NULL) {
    	printf ("Character %c is not in your string.", z);
	} else {
		while (*p != '\0') {
			printf ("%c", *p);
			p = p + 1;
		}
	}
	
    return 0;
}

