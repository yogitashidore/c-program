#include<iostream>
using namespace std;
class demo
{
public:
	int a;
	int b;
	char ch;
};
int main()
{
	demo dobj;
	cout << "sizeof demo\n";
	cout << sizeof(dobj);
	return 0;
}

//output: size of demo
          12
