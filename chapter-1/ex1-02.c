#include <stdio.h>

#define		UNKNOWN_ESCAPE_SEQUENCE		"\p"

int main()	{
	// Program won't compile, will raise an "unknown escape sequence" error
	printf("Hello world%s", UNKNOWN_ESCAPE_SEQUENCE);	
	return 0;
};
