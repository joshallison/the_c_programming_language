#include <stdio.h>

#define		MAX_CHAR_IN_LINE		1000

int endofline(int c);
int blankline(char line[], int len);
int removetrailingblanks(char line[], int len);
void printline(char line[], int len);

int main() {
	int c, len;
	char line[MAX_CHAR_IN_LINE];

	while((c = getchar()) != EOF) {
		if (endofline(c)) {
			if (!blankline(line, len)) {	
				len = removetrailingblanks(line, len);
				printline(line, len);
			}
		len = 0;
		} else {
			line[len] = c;
			++len;
		};
	};
};



int endofline(int c) {
	return c == '\n'; 
};

int blankline(char line[], int len) {
	int i;

	for(i = 0; i < len; i++) {
		if (line[i] != ' ') {
			return 0;
		}
	};

	return 1;
};

int removetrailingblanks(char line[], int len) {
	while (line[len - 1] == ' ' || line[len - 1] == '\t') {
		len = len - 1;
	};

	return len;
};

void printline(char line[], int len) {
	int i;

	printf("PRINTLING LINE: ");

	for(i = 0; i < len; i++) {
		putchar(line[i]);
	};

	printf("\nLENGTH: %d", len);

	printf("\n");
};
