#include <iterator>
//#include <string.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;
	vector<int>::iterator iter = v.begin();
	istream_iterator<int> start(cin);
	istream_iterator<int> end;
	back_insert_iterator<vector<int> > dest(v);
	copy(start, end, dest);
//	copy(start, end, iter);
	sort(v.begin(), v.end());
	copy(v.begin(), v.end(), ostream_iterator<int, char>(cout, "\t"));
	return 0;
}
