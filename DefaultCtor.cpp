#include <iostream>
#include <string>
using namespace std;

class A {
public:
	A(int x = 0, int y = 0)
	{
		cout << x + y << endl;
	}
};
string& foo()
{
	return "XXX~\n";
}
int main ()
{
	A a[10];
	cout << endl;
	A *b = new A(1, 2);
	delete b;
	cout << foo();
}
