#include<iostream>



using namespace std;

void func(int * ptr)
{
    *ptr = 10 + 10;
    return;
}

int main ()
{
	const int a = 10;
	int * ptr = const_cast <int *> (&a);
	func( ptr);
	cout<<*ptr<<endl;
}
