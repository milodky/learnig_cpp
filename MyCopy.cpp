#include <iostream>
#include <set>
#include <vector>
#include <iterator>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;
/* 
 * how to use std::copy to copy data from a 
 * vector to set/map/rbtree
 */
void MyCopy(int Num)
{
	vector<int> v(Num);
	for (int i = 0; i < Num; i++) {
		v[i] = rand() % 100;
		cout << v[i] << " ";
	}
	cout << endl;
	multiset<int> RbTree;
	multiset<int>::iterator iter = RbTree.begin();
	/* 
	 * inserter is specified for containers with
	 * insert() member function
	 */
	copy(v.begin(), v.end(), inserter(RbTree, iter));

	for (iter = RbTree.begin(); iter != RbTree.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;
}

int main(int argn, char **argv)
{
	int num = atoi(argv[1]);
	MyCopy(num);
	return 0;
}
