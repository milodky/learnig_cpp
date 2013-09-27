#include <iostream>
#include <stdio.h>
using namespace std;

char SingleChar(char *pStr)
{
	char result = '\0';
	if (pStr == NULL)
		return '\0';
	const int TableSize = 256;
	int Table[TableSize];
	for (int i = 0; i < TableSize; i++)
		Table[i] = 0;
	while (*pStr != '\0') {
		Table[(int) *pStr]++;
		pStr++;
	}
	for (int i = 0; i < TableSize; i++) {
		if (Table[i] == 1) {
			result = (char) i;
			printf("%c\n", result);
			cout << "here\n";
			break;
		}
	}
	return result;
}

int main()
{
	char str[] = "abcdeabcd";
	cout << SingleChar(str) << endl;
	return 0;
}
