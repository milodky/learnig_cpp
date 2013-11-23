#include <iostream>
#include <exception>
#include <string>
using namespace std;

class person {
public:
	person(char *p) : mName(p), height(0) {
		cout << "i love w33." << endl;
		cout << mName << endl;
	}
	void output() {
		cout << "again, i love w33." << endl;
	}
	~person() {
		cout << "i'm gonna throw an excetion." << endl;
		cout << mName << endl;
		throw exception();
	}
	int height;
	string mName;
};

int main()
{
	try {
		person xiaoting("xiaoting");
		person w33("w33");
		person *p = NULL;
		cout << p << endl;
		cout << sizeof (p) << endl;
		p->output();
	} catch (exception& e) {

		cout << "I got the exception." << endl;
	}
}

