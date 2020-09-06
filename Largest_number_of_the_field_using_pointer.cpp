#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

#define SIZE 10

/* Load 10 members of an integer field from the keyboard. 
   Print on the screen the value of the largest term. 
   Access field members exclusively via pointer.           */

using namespace std;

int main(int argc,char** argv) {
    
    int field[SIZE], i, max;
    int *p = field;
    
    printf ("Enter 10 numbers of field > ");
    for (i = 0; i < SIZE; i++) {
    	scanf ("%d", p + i);
    	if (i == 0 || *(p + i) > max) {
    		max = *(p + i);
		}
	}

	printf ("Value of the largest number is > %d", max);
	
    return 0;
}

