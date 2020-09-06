#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

#define MAX 20

/* Write a function that will print the message "Enter string > " and then from
   keyboard load a string of characters (up to 20 characters including the character \ n).
   The function should return the number of uppercase and lowercase letters in the loaded string.
   Write a main program that will enable the function and print the results.                       */

using namespace std;

void Count(int *uppercase, int *lowercase) {
	
    char string[MAX + 1];
	
	printf ("Enter string > ");
    fgets (string, MAX + 1, stdin);
     
    int i = 0;
    while (string[i] != '\0') {
    	if (string[i] >= 'A' && string[i] <= 'Z') {
    		++*uppercase;
		} else if (string[i] >= 'a' && string[i] <= 'z') {
			++*lowercase;
		}
		i++;
	}
	return;   
}



int main(int argc,char** argv) {

   int uppercase, lowercase;
   Count(&uppercase, &lowercase);
   printf ("Number of uppercase letters: %d\n", uppercase);
   printf("Number of lowercase letters: %d", lowercase);
   return 0;
}

