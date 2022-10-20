#include<iostream>
using namespace std;
class demo
{
public:
	int a;
	int b;
};
int main()
{
	demo dobj;
	cout << sizeof(dobj);
	return 0;
}

//output: 8
