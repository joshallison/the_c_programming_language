#include <stdio.h>

int main() {
	int c, res;

	res = 0;

	while((c = getchar()) != EOF) {
		printf("%d", c);
		if (c == ' ' || c == '\n' || c == '\t') {
			res++;
			printf("Count: %d\n", res);
		};
	};
};
