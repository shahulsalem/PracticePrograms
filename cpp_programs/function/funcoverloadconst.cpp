#include<iostream>


using namespace std;

class funcover{
public:
	void fun(const int & i)
	{
		cout<<"\nconst fun";
	}
	
	void fun( int & i)
	{
		cout<<"\n fun";
	}
};


int main()
{
	int f = 10;
	funcover fo;
	fo.fun(f);
	return 0;
}
