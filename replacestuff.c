#include <stdio.h>

main() {
	int c; 
	while((c = getchar()) != EOF) {
		if(c == '\t' || c == '\b' || c == '\\') {
			putchar('\\');
			c = (c=='\t') ? 't' : c;
			c = (c=='\b') ? 'b' : c;
			c = (c=='\\') ? '\\' : c;
		}
		putchar(c);
	}
}
