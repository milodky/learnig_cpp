#include <iostream>
#include <stdlib.h>
using namespace std;
inline int cmp(const void *a, const void *b)
{
	int aa = * (int *) a;
	int bb = * (int *) b;
	if (aa > bb)
		return 1;
	else if (aa == bb)
		return 0;
	else
		return -1;
}
int main()
{
	const int size = 1000;
	int array[1000];
	int n = 0;
	while (cin >> array[n++]);
	cout << cin.good() << endl;
	n--;
	qsort(array, n, sizeof(int), cmp);
	for(int i = 0; i < n; i++)
		cout << array[i] << endl;
	return 0;
}
