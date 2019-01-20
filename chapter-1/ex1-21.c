//  Program replaces strings of blanks with the minimum number of spaces & tabs to achieve the same spacing
#include <stdio.h>

#define		MAX_CHARS				1000
#define		TAB_STOPS					 8

int blankstring(char s[], int len);

int main() {
	int c, len, i, l;
	char s[MAX_CHARS];
	char ps[MAX_CHARS];
	
	len = 0;

	while((c = getchar()) != EOF) {
		// If end of string
		if (c == '\n') {
			if(blankstring(s, len)) {
				for(i = 0; i < len; ++i) {
					if(len - i >= TAB_STOPS) {
						for(l = i; l < i + TAB_STOPS; ++l) {
							ps[l] = 'T';
						};	
					// Since we have tabbed, set next loop index variable equal to index after tab stop 
					i = i + (TAB_STOPS - 1);
					} else {
						ps[i] = '#';
					};
				};	
				
				for(i = 0; i < len; i++) {
					putchar(ps[i]);
				}
				printf("\n");		
			};

			len =  0;
		} else {
			s[len] = c;
			++len;
		};
	};
		
	return 0;
};


int blankstring(char s[], int len) {
	int i;

	for(i = 0; i < len; ++i) {
		if(s[i] != ' ') {
			return 0;
		};
	};

	return 1;
};

