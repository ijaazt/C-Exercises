#include <stdio.h>

/* print input one word per line */
main() {
	int c, state = OUT, in = 0;
	while((c = getchar()) != EOF) {
		if(c == ' ' ) {
			while((c = getchar()) == ' ')
				;
			putchar('\n');
		}
		putchar(c);
	}
}
