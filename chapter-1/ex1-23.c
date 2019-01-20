// Program removes comments from a C program
#include <stdio.h>

#define		MAX_CHARS		    1000
#define		IN_COMMENT			   1
#define 	OUT_OF_COMMENT	   0

int beginningofcomment(int c, int lastc, int len);
int endofcomment(int c, int lastc, int len);
void printstring(char string[], int len);

int main() {
	int c, lastc, incomment, len;
	char string[MAX_CHARS];

	// The starting state
	incomment = OUT_OF_COMMENT;

	while((c = getchar()) != EOF) {
		if (incomment) {
			if (endofcomment(c, lastc, len)) {
				incomment = OUT_OF_COMMENT;
			};
		} else {
			if (beginningofcomment(c, lastc, len)) {
				incomment = IN_COMMENT;
				// Decrement length since last character first comment token
				--len;
			} else {
				string[len] = c;
				++len;
			};
		};	
		
		lastc = c;
	};
	
	printstring(string, len);
	return 0;
};


int beginningofcomment(int c, int lastc, int len) {
	if(c == '/' && lastc == '/') {
		return 1;
	};

	if (c == '*' && lastc == '/') {
		return 1;
	} 

	return 0;
};

int endofcomment(int c, int lastc, int len) {
	if (c == '/' && lastc == '*') {
		return 1;
	};

	return 0;
};

void printstring(char string[], int len) {
	int i;

	for(i = 0; i < len; i++) {
		putchar(string[i]);
	};

	printf("\n");
};
