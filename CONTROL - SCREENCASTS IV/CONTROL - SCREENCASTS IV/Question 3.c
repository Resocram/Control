/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int temperature;
	int pressure;

	printf("Please enter the air temperature(Celsius) and pressure (PSI): \n");
	scanf("%d  %d", &temperature, &pressure);

	if (pressure < 0) {
		printf("Pressure can not be negative.\n");
	}
	else {
		if (temperature >= 300 || temperature <= 5 || pressure >= 150) {
			printf("Machine is not operating under normal conditions.\n");
		}
		else if (temperature >= 250 && pressure >= 100) {
			printf("Machine is not operating under normal conditions.\n");
		}
		else {
			printf("Machine is operating under normal conditions.\n");
		}
	}
	system("PAUSE");
	return 0;
}
*/