/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 first_name last_name
 */

#include "std_lib_facilities.h"

int main() {
	double a, b, c, x;
	double root1, root2;

	cout << "Enter a, b, c: ";
	cin >> a >> b >> c;

	x = b * b - 4 * a * c;

	if (x > 0) {
		root1 = -b + (sqrt(x)) / (2 * a);
		root2 = -b - (sqrt(x)) / (2 * a);
		printf("The roots are real and different, the roots are: %f and %f", root1, root2);
	}

	else if (x == 0) {
		root1 = -b + (sqrt(x)) / (2 * a);
		printf("The roots are real and the same, the roots are: %f and %f", root1);
	}

	else {
		root1 = -b / (2 * a);
		root2 = sqrt(-x) / (2 * a);
		printf("There are no real roots, the imaginary roots are: %f and %fi", root1, root2);
	}
}
