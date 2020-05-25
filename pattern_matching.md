/* Pattern matching algorithm */

```c

#include <stdio.h>
#include <string.h>
#define MAX_STRING_SIZE 100
#define MAX_PATTERN_SIZE 100

int nfind(char* string, char* pat);

int main()
{
	char string[MAX_STRING_SIZE] = "{abaabbbaababaaabaca}";
	char pattern[MAX_PATTERN_SIZE] = "{abac}";

	nfind(string, pattern);

	return 0;
}

int nfind(char* string, char* pat)
{
	int i, j, start = 0;
	int lasts = strlen(string) - 1;
	int lastp = strlen(pat) - 1;
	int endmatch = lastp;

	for (i = 0; endmatch < lasts; endmatch++, start++) {
		if (string[endmatch] == pat[lastp])
			for (j = 0, i = start; j < lastp && string[i] == pat[j]; i++, j++)

		if (j == lastp)
			return start;
	}
	printf("패턴이 시작하는 위치 : %d번째\n", start);
	return -1;
}
