#include <stdio.h>


#define 	DASHES_PER_CHAR		4

int main() {
	int c, i, wordIndex, totalWords, barPosition, highestWordCount;
	int wordsCount[10];

	wordIndex = totalWords = barPosition = highestWordCount = 0;
	// Assign initial value to integer's in words array
	for(i = 0; i < 10; ++i) {
		wordsCount[i] = 0;
	}
	
	while((c = getchar()) != EOF) {
		// If end of word
		if (c == ' ' || c == '\t') {
			if (wordsCount[wordIndex] > highestWordCount) {
				highestWordCount = wordsCount[wordIndex];
			};
			++wordIndex;
			++totalWords;
		} else {
			++wordsCount[wordIndex];
		};
	};
	
	// Print a vertical histogram to stdout
	for(i = 0; i <= totalWords; ++i) {
		for(barPosition = 0; barPosition <= wordsCount[i]; ++barPosition) {
			printf("----");
		};
		printf("\n");
		printf("%d%s", wordsCount[i], ":");
		for(barPosition = 0; barPosition <= (wordsCount[i]) * DASHES_PER_CHAR;  ++barPosition) {
			printf(" ");
		}
		printf("|\n");
		for(barPosition = 0; barPosition <= wordsCount[i]; ++barPosition) {
			printf("----");
		};
		printf("\n");
	};
	
	// Print a horizontal histogram to stdout
	int lengthOfWord, frequency;
	for(lengthOfWord = highestWordCount; lengthOfWord >= 1; --lengthOfWord) {
		printf("%d%s", lengthOfWord, ": ");
		for(frequency = 0; frequency <= totalWords; ++frequency) {
			if (wordsCount[frequency] > lengthOfWord) {
				printf("|");
			} else if (wordsCount[frequency] == lengthOfWord) {
				printf("-");
			} else {
				printf(" ");
			}
			printf("   ");
		};
		printf("\n");
	}; 

	printf("   ");
	for(i = 1; i <= totalWords + 1; ++i) {
		printf("%d", i);
		if (i != totalWords + 1) {
			printf(" | ");
		};
	};
	printf("\n");
	return 0;
};
