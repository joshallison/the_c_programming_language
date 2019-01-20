#include <stdio.h>

#define MAXLINE 1000

int endofword(int c);
int getline(char arr[], int len);

int main() {
	int len, i;
	char line[MAXLINE];

	len = 0;

	while(getline(line, len) > 80) {
		for	(i = 0; i <= len; i++) {
			putchar(line[i]);
		};
	};
};


int getline(char arr[], int len) {
	int c;

	while((c = getchar()) != EOF && !endofword(c))  {
		arr[len] = c;
		++len;
	};

	return len;
};

int endofword(int c) {
	return c == ' ' || c == '\\' || c == '\n';
};

