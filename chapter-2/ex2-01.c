#include <stdio.h>
#include <limits.h>

void printlimits(char var[], int varslength, int lower, int upper);

int main() {
	printlimits("SCHAR", 5, SCHAR_MIN, SCHAR_MAX);
	printlimits("UCHAR", 5, 0, UCHAR_MAX);
	printlimits("SHORT", 5, SHRT_MIN, SHRT_MAX);
	printlimits("INT", 3, INT_MIN, INT_MAX);
	printlimits("LONG", 4, LONG_MIN, LONG_MAX);
	return 0;
};


void printlimits(char vars[], long int varslength, long int lower, long int upper) {
	int i;

	for(i = 0; i < varslength; i++) {
		putchar(vars[i]);
	};

	printf("%s%d%s%d\n", " LOWER: ", lower, " UPPER: ", upper);

};
