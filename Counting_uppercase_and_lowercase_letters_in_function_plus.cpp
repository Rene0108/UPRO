#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

#define MAX 20

/* Write a function that will print the message "Enter string > " and then from
   keyboard load a string of characters (up to 20 characters including the character \ n).
   The pointer function should return the number of uppercase and lowercase letters
   in the loaded string, and over the name the logical value is true if it is in the string
   loaded at least one character except \n, otherwise the logical value is false. 
   Write the main program that will call the function and print the results.                      */

using namespace std;

bool Count(int *uppercase, int *lowercase) {
	
	bool sth = false;
    char string[MAX + 1];
	
	printf ("Enter string > ");
    fgets (string, MAX + 1, stdin);
     
    int i = 0;
    while (string[i] != '\0') {
    	if (string[i] >= 'A' && string[i] <= 'Z') {
    		++*uppercase;
		} else if (string[i] >= 'a' && string[i] <= 'z') {
			++*lowercase;
		} else if (string[i] != '\n') {
			sth = true;
		}
		i++;
	}
	return sth;   
}

int main(int argc,char** argv)
{
    int uppercase = 0, lowercase = 0;
    
    if (Count(&uppercase, &lowercase)) {
    	printf ("Number of uppercase letters: %d\n", uppercase);
        printf("Number of lowercase letters: %d", lowercase);
	} else {
		printf ("Only '\\n' loaded!");
	}
    return 0;
}

