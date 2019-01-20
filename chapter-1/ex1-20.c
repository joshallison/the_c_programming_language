#include <stdio.h>

#define		SPACES_IN_TAB		8

int main()	{
	int c, i;

	while((c = getchar()) != EOF) {
		if (c == '\t') {
			for(i = 0; i < SPACES_IN_TAB; ++i) {
				printf("#");
			};
		} else {
			putchar(c);
		};
	};

	return 0;
};
