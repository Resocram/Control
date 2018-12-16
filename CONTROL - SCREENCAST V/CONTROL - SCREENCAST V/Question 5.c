/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int value;
	int large;

	printf("Please enter a value(-1 to stop): \n");
	scanf("%d", &value);
	large = value;
	while (value != -1) {
		if (value > large) {
			large = value;
		}
		scanf("%d", &value);
	}
	if (large == -1) {
		printf("Error no data: \n");
	}
	else {
		printf("Largest value: %d\n", large);
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

#define WIDTH 100
#define LENGTH 60
#define PI acos(-1)
int main(void) {
	int deltax;
	int deltay;
	int count1 = 0;
	double value;
	int x;
	int y;
	printf("Please enter the grid spacing in the x-direction and the y-direction: \n");
	scanf("%d %d", &deltax, &deltay);

	while (LENGTH - deltax*count1 >= 0) {
		printf("y = %2d:", LENGTH - deltax*count1);
		int count2 = 0;
		while (WIDTH - deltay*count2 >= 0) {
			x = deltax * (count2);
			y = deltay * (count1);
			value = 10*sin(2 * PI*x / WIDTH)*cos(2 * PI*y / LENGTH);
			printf("%6.2f", value);
			count2++;
		}
		printf("\n");
		count1++;
	}
	system("PAUSE");
	return 0;
}
*/