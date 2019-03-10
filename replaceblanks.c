#include <stdio.h>

/* replace one or more blanks by single blank */
main () {
	int c, blanks = 0;
	while((c = getchar()) != EOF) {
		if(c == ' ') {
			++blanks;
		} else {
			if(blanks > 0) {
				putchar(' ');
			}
			blanks = 0;
			putchar(c);
		}
	}
}
