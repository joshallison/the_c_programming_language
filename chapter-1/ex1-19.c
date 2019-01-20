#include <stdio.h>

#define		MAX_CHAR_LINE		1000

void reverse(char line[], int len, char reverse[]);
void printline(char line[], int len);
int endofline(int c);

int main() {
	int c, len;
	char line[MAX_CHAR_LINE], rline[MAX_CHAR_LINE];

	len = 0;

	while((c = getchar()) != EOF) {
		if (endofline(c)) {
			reverse(line, len, rline);
			printline(rline, len);
			len = 0;		
		} else {
			line[len] = c;
			++len;
		};	
	};
};

void reverse(char line[], int len, char reverse[]) {
	int i;

	for(i = 0; i < len; ++i) {
		reverse[i] = line[len - 1 - i];
	};
};

int endofline(int c) {
	return c == '\n';
};

void printline(char line[], int len) {
	int i;

	printf("PRINTING LINE: ");

	for(i = 0; i < len; i++) {
		putchar(line[i]);
	};

	printf("\nLENGTH: %d", len);
	printf("\n");
};

