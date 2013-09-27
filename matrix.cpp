#include <iostream>
using namespace std;

#define X 4
#define Y 4

static int matrix[X][Y] = {{1, 2, 8, 9},{2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}};


bool solve (int m[X][Y], int num)
{
	int i = 0, j = Y - 1;
	bool found = false;
	while (i != X && j != -1 && found != true) {
		if (matrix[i][j] > num)
			j--;
		else if (matrix[i][j] < num)
			i++;
		else
			found = true;
	}
	return found;
}

int main()
{
	int num;
	bool found;
	cout << "num is :";
	cin >> num;
	found = solve(matrix, num);
	if (found)
		cout << "found! \n";
	else
		cout << "not found!\n";
	return 0;
}
