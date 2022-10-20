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
	dobj.a = 10;
	dobj.b = 20;
	cout << "first program of cpp\n";
	cout << "a:" << dobj.a;
	return 0;
}


//output-  first program of cpp
           a:10
