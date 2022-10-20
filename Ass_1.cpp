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
	cout << "a:" << dobj.a;
	cout << "b:" << dobj.b;
	return 0;
}


//output   a:10 b:20
           
