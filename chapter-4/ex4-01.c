#include <stdio.h>
#include <string.h>

#define		MAX_S_LENGTH		1000
#define		MATCH_CHAR			 'a'

void getstring(char s[]);
int strrindex(char s[], int t);

int main() {
	char s[MAX_S_LENGTH];		
	getstring(s);
	printf("%d\n", strrindex(s, MATCH_CHAR));
	return 0;
}

int strrindex(char s[], int t) {
	int i, res;
	res = -1;

	for(i = strlen(s); i > 0; i--) {
		if(s[i] == t) {
			return res = i;
		}; 
	};

	return res;
};

void getstring(char s[]) {
	int c, i;
	i = 0;

	while((c = getchar()) != EOF) {
		s[i] = c;
		i++;
	};
};



