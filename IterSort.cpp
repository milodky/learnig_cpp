#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> v;
	vector<int>::iterator iter = v.begin();
	cout << v.empty() << endl;
	int input;
	while (cin >> input)
		v.push_back(input);
	sort(v.begin(), v.end());
	iter = v.begin();
	cout << v.empty() << endl;
	for (int i = 0; i < v.size(); i++)
		cout << iter[i] << endl;
}
