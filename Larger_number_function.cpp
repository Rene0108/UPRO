#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

/* Write a function that takes pointers to two float object as parameters. 
   The function returns the pointer to an object that contains a larger number. 
   If the numbers are equal, the function returns a NULL pointer. 
   Write the main program that will call the function and print the results.                       */

using namespace std;

float *returnLarger(float *first, float *second) {
	float *pointer = NULL;
	if (*first < *second) {
		return second;
	} else if (*first > *second) {
		return first;
	}
	return NULL;
}

int main(int argc,char** argv) {

    float x, y;
    printf ("Enter two float numbers > ");
    scanf ("%f %f", &x, &y);
    float *larger = returnLarger(&x, &y);
    if (*larger == NULL) {
	       printf ("You entered numbers of the same value.");
    } else {
	       printf ("Larger number is %f.", *larger);
	}
    return 0;
}

