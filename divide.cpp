#include <iostream>
using namespace std;

void divide(int *pStr, int StrLength)
{
	int i = 0;
	int tmp;
	if (pStr == NULL)
		return;
	while (*pStr & 0x01) {
		cout << *pStr << endl;
		i++;
		pStr++;
	}
	int *pEvenStart = pStr;
	int *pEvenEnd = pStr;
	for (; i < StrLength; i++) {
		if (*pEvenEnd & 0x01) {
			tmp = *pEvenStart;
			*pEvenStart = *pEvenEnd;
			*pEvenEnd = tmp;
			pEvenEnd++;
			pEvenStart++;

		} else {
			pEvenEnd++;
		}
	}
}

int main()
{
	int a[] = {6, 1, 2, 3, 4, 5, 6};
	for (int i = 0; i < 7; i++)
		cout << a[i] << " ";
	cout << endl;
	divide(a, 7);
	for (int i = 0; i < 7; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}
