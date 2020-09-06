#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

#define ROWS 3
#define COLUMNS 4
 
/* Write a function of the sum of Rows that in a given one-dimensional field
   (members of type int) enters the sum of the rows of the given two-dimensional
   fields of m rows and n columns (members of type int).
   In the main program, define a matrix of dimensions 3 x 4, from the keyboard
   load members, call the function and print the result on the screen*/

using namespace std;

void SumOfRows(int *p1, int *p2, int m, int n) {
	int sum;
	for (int i = 0; i < m; i++) {
		sum = 0;
		for (int j = 0; j < n; j++) {
			sum = sum + *(p1 + n * i + j);
		}
		*p2 = sum;
		p2 = p2 + 1;
	}
	return;
}

int main(int argc,char** argv) {
    
    printf ("Load elements of two-dimensional %d*%d field: \n", ROWS, COLUMNS);
    int field1[ROWS][COLUMNS], field2[ROWS];
    
    for (int i = 0; i < ROWS; i++) {
    	for (int j = 0; j < COLUMNS; j++) {
    		scanf ("%d", &field1[i][j]);
		}
	}
	
	int *first = field1[0], *second = field2;
	
	SumOfRows(first, second, ROWS, COLUMNS);
	
	printf ("Field with sum of the each rows: ");
	for (int i = 0; i < ROWS; i++) {
		printf ("%d ", field2[i]);
	}
	
    return 0;
}

