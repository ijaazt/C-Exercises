#include <stdio.h>

main() {
	int c;
	c = getchar() != EOF;
	printf("The value of EOF: %d\n", EOF);
	printf("The value of getchar() != EOF: %d", c);
}
