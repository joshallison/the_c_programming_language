#include <stdio.h>

#define		MAX_LINE_CHARS			1000 
#define		BREAK_COLUMN_INDEX		5

int nonblankcharexists(char c[], int len);
int findlastnonblankchar(char c[], int len);

int main() 
{
	int c, len, fold;
	char line[MAX_LINE_CHARS];
	
	len = fold = 0;
	
	while((c = getchar()) != '\n') {
		// Check for character array memory overflow
		if(len > MAX_LINE_CHARS) {
			return 0;
		}

		if (fold == BREAK_COLUMN_INDEX) {
			if (nonblankcharexists(line, len)) {
				printf("EXISTS");
				line[len] = '\n';
				++len;
				line[len] = c;
				++len;
				fold = 0;
			}
		} else {
			line[len] = c;
			++len;
			++fold;
		};	
	};


	for(c = 0; c < len; c++) {
		putchar(line[c]);
	};
	
	printf("\n");

	return 0;
};

int nonblankcharexists(char c[], int len)
{
	int i;


	for(i = 0; i < len; i++) {
		if(c[i] != ' ' || c[i] != '\t') {
			return 1;
		}
	}

	return 0;
};	

int findlastnonblankchar(char c[], int len) {
	int i;

	for(i = len; i >= 0; i--) {
		if(c[i] != ' ' || c[i] != '\t') {
			return c[i];
		};
	};

	return 0;
};

