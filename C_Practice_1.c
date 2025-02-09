#include <stdio.h>


// When compiling files for C, have to use gcc -o to make the executable file.
// Then execute the file in powershell 

// Practice Problem 1: 
// Print Fahrenheit-Celsius Table
// for fahr = 0,20,....., 300 
void main()
{
	float fahr, celsius;
	int lower,upper,step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Fahernheit - Celsius Table\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step; 
	}

}