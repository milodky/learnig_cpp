#include <iostream>
#include <stdio.h>
using namespace std;
static int i;
void permutation(char *pStr, char *pBegin)
{
	/* pStr is just used for printing */
	if (*pBegin == '\0')
		printf("%s\n", pStr);
	else {
		for (char *pCh = pBegin; *pCh != '\0'; pCh++) {
			/* change the sequence */
			char temp = *pCh;
			*pCh = *pBegin;
			*pBegin = temp;
			i++;
			permutation(pStr, pBegin + 1);
			/* change back the sequence */
			temp = *pCh;
			*pCh = *pBegin;
			*pBegin = temp;
		}
	}
}

int main()
{
	i = 0;
	char a[] = "abc";
	permutation(a, a);
	cout << i << endl;
	return 0;
}
