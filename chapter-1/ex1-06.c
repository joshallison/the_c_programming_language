#include <stdio.h>

#define			END_OF_LINE		"END_OF_LINE"

int main() {
	int c;

	c = getchar();
		
	printf("\nGOT CHAR: %d\n", putchar(c));

	if (c == EOF) {
		printf("%s\t%s\n", END_OF_LINE, "TRUE");
	} else {
		printf("%s\t%s\n", END_OF_LINE, "FALSE");
	}
};
