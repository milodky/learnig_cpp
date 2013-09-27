#include <iostream>
using namespace std;


bool IsBST(int *pArray, int Num)
{
	bool result = false;
	int i = 0;
	if (pArray == NULL)
		return result;
	int *pTemp = pArray;
	int *pRight;
	int root = pArray[Num - 1];
	if (Num == 3) {
		if (pArray[0] < root && pArray[1] > root)
			return true;
		else
			return false;
	} else if (Num == 2 || Num == 1)
		return true;
	while (*pTemp < root) {
		i++;
		pTemp++;
	}
	pRight = pTemp;
	while (pTemp < pArray + Num) {
		if (*pTemp < root)
			return result;
		pTemp++;
	}
	if (IsBST(pArray, i))
		if (IsBST(pRight, Num - i - 1))
			result = true;
	return result;
}

int main()
{
	int a[] = {2, 5, 9, 6, 12, 10, 7};
	if (IsBST(a, sizeof(a) / sizeof(int)))
		cout << "It is a BST.\n";
	else
		cout << "It isn't a BST.\n";
	int b[] = {2, 5, 4};
	if (IsBST(b, sizeof(b) / sizeof(int)))
		cout << "It is a BST.\n";
	else
		cout << "It isn't a BST.\n";
	return 0;
}
