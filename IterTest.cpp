#include <stdio.h>

template <class T>
class vector1 {
private:
	T* pbegin;
	int n; //当前大小
public:
	vector1() {
		pbegin = new T[100]; //暂时先固定大小
		n = 0;
	}
	
	T* begin() {
		return pbegin;
	}
	void insert(T d){
		pbegin[n++] = d;
	}
	typedef T* iterator; //vector的迭代器就是基础指针类型
};


int main()
{
	vector1<int> a;
	a.insert(1);
	a.insert(2);
	vector1<int>::iterator itra;
	itra = a.begin();
	printf("%d\n", *itra); 
	itra++;
	printf("%d\n", *itra);
	itra--; //基础指针类型都支持++,--,+,-等操作符
	printf("%d\n", *itra);
}
