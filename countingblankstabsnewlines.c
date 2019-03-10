#include <stdio.h>

main () {
	int c,
	tabs = 0,
	blanks = 0,
	newlines = 0;

	while((c = getchar()) != EOF) 
	{
		newlines += (c == '\n') ? 1: 0;
		tabs += (c == '\t') ? 1: 0;
		blanks += (c == ' ') ? 1: 0;
	}

	printf("Tabs: %d\n", tabs);
	printf("Blanks: %d\n", blanks);
	printf("Newlines: %d\n", newlines);
}
