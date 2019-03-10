#include <stdio.h>

main() {
	double celsius, fahr;
	int step, upper, lower;

	step = 20;
	upper = 300;
	lower = 0;

	while(celsius < upper) {
		fahr = (celsius / (5.0/9.0)) + 32;
		printf("%6.1f %5.0f\n", celsius, fahr); 
		celsius+=step;
	}
}
