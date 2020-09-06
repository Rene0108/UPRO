#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

#define SIZE 10

/* Write the function largestElement1D which returns the largest as a result
   value in a given one-dimensional integer field.
   Write a main program that will load 10 members from the keyboard
   of an integer field, use the function to determine the largest term, and
   print it on the screen.                                                       */

using namespace std;

int largestElement1D(int *p, int n) {
    int max;
    max = *p;
    for (int i = 0; i < n; i++) {
    	if (*(p+i) > max) {
    		max = *(p+i);
		}
	}
	return max;
    
}

int main(int argc,char** argv) {

    int field[SIZE], i;
    printf ("Load %d elements od the field: ", SIZE);
    for (i = 0; i < SIZE; i++) {
    	scanf ("%d", &field[i]);
	}
	
	printf ("The largest element of the field is > %d", largestElement1D(field, SIZE));
    return 0;
}

