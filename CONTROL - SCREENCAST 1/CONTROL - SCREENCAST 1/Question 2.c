/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	double a;
	double b;
	double c;
	double root1;
	double root2;
	printf("Enter the coefficients of the quadratic(a,b,c): \n");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (pow(b, 2) - 4 * a*c < 0) {
		printf("No real roots exist\n");
	}
	else {
		root1 = (-b + sqrt((pow(b, 2) - 4 * a*c))) / (2 * a);
		root2 = (-b - sqrt((pow(b, 2) - 4 * a*c))) / (2 * a);

		if (root1 == root2) {
			printf("The root is %f\n", root1);
		}
		else {
			printf("The roots are %f and %f \n", root1, root2);
		}
	}
	system("PAUSE");
	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	double count = 0;
	int sum = 0;
	int value;
	double average;
	printf("Please enter your values (-1 to stop):\n");
	scanf("%d", &value);
	while(value!=-1){
		sum += value;
		count++;
		scanf("%d", &value);
	}

	if (count == 0) {
		printf("Error: No data entered\n");
	}
	else {
		average = sum / count;
		printf("The average of the number(s): %f\n", average);
	}
	system("PAUSE");
	return 0;
}
*/