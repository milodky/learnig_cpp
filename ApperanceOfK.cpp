#include <iostream>
using namespace std;

int KStartPos(int *pArray, int k, int start, int end)
{
	int result = -1;
	if (end < start)
		return result;
	int middle = (start + end) / 2;
	if (pArray[middle] > k) {
		end = middle -1;
		result = KStartPos(pArray, k, start, end);
	} else if (pArray[middle] < k) {
		start = middle + 1;
		result = KStartPos(pArray, k, start, end);
	} else {
		if (pArray[middle - 1] == k) {
			end = middle - 1;
			result = KStartPos(pArray, k, start, end);
		} else
			return middle;
	}
	return result;
}


int KEndPos(int *pArray, int k, int start, int end)
{
	int result = -1;
	if (end < start)
		return result;
	int middle = (start + end) / 2;
	if (pArray[middle] > k) {
		end = middle - 1;
		result = KEndPos(pArray, k, start, end);
	} else if (pArray[middle] < k) {
		start = middle + 1;
		result = KEndPos(pArray, k, start, end);
	} else {
		if (pArray[middle + 1] == k) {
			start = middle + 1;
			result = KEndPos(pArray, k, start, end);
		} else
			return middle;
	}
	return result;
}


int main()
{
	int a[] = {1, 2, 3, 3, 3, 3, 3, 3, 4, 5};
	cout << KEndPos(a, 8, 0, sizeof(a) / sizeof(int)) << endl;
	cout << KStartPos(a, 8, 0, sizeof(a) / sizeof(int)) << endl;

	return 0;
}









