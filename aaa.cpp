#include <iostream>
template<typename T> void P(T x) { std::cout << x; }
int main() 
{
 int a[] = {1,2,3,4};
 P(0);
 for (auto x : a)
 P(x);
 P(9);
	return 0;
}
