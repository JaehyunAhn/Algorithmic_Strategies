#include <stdio.h>
#include <string.h>

char* strStr(char* target, char* object) {
	// until target is over
	char* startAddr		= target;
	char* startIndex	= target;
	char* objectAddr	= object;
	char* objctIndex	= object;
	while(*startAddr != '\0') {
		startIndex = startAddr;
		objctIndex = objectAddr;
		while(*startIndex == *objctIndex) {
			startIndex++;
			objctIndex++;
		}
		objctIndex++;
		if(*objctIndex == '\0')
			return startAddr;
		startAddr++;
	}
	return NULL;
}

int main () {
	char* input = "this is game\0";
	char* comparedSentance = "is\0";

	printf("%s\n",strstr(input,comparedSentance));
	printf("%s\n",strStr(input,comparedSentance));
	return 0;
}
