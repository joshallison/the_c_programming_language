#include <stdio.h>

int main() {
	int c;
		
	while((c = getchar()) != EOF) {
		if (c == '\t' || c == ' ' || c == '\n') {
			printf("\n");
		} else {
			putchar(c);
		}
	};
};
