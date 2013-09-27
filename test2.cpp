#include <iostream>
#include <vector>
#include <map>
#include <iterator>
using namespace std;

int main ()
{
	vector<int>::iterator iter;
	vector<int> a(129);



	map<int, int> mymap;
	
	cout << ++mymap[1] << endl;
	cout << mymap.find(1) << endl;
/*

	cout << "size: " << a.size() << endl;
	cout << "capacity: " << a.capacity() << endl;
	cout << "max_size: " << a.max_size() << endl;
	a.insert(a.begin() + 127, 11);
	iter = a.begin();
	iter = find(a.begin(), a.end(), 12);
	cout << "result: " << *iter << endl;
	cout << "size: " << a.size() << endl;
	cout << "capacity: " << a.capacity() << endl;
	cout << "max_size: " << a.max_size() << endl;

*/	return 0;
}
