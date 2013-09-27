#include <iostream>
#include <stdio.h>
using namespace std;

char *replace(const char *pIn)
{
	int Length = 0;
	int NewLength;
	int BlankCount = 0;
	int i;
	const char *pTemp = pIn;
	if (pIn == NULL)
		return NULL;
	while (*pTemp != '\0') {
		if (*pTemp == ' ')
			BlankCount++;
		pTemp++;
		Length++;
	}
	NewLength = Length + BlankCount * 2 + 1;
	char *pOut = new char[NewLength];
	pOut[NewLength - 1] = '\0';
	for (i = 0; i < Length; i++) {
		if (pIn[Length - 1 - i] == ' ') {
			pOut[NewLength - 2 - i - 2] = '%';
			pOut[NewLength - 2 - i - 1] = '2';
			pOut[NewLength - 2 - i - 0] = '0';
			NewLength -= 2;
		} else
			pOut[NewLength - 2 - i - 0] = pIn[Length - 1 - i];
	}
	return pOut;
}
int main()
{
	const char *pIn = "a e adfad adfa aadfa wwer";
	char *pOut;
	pOut = replace(pIn);
	cout << pOut << endl;
	printf("%s\n", pOut);
	delete pOut;
	return 0;
}
