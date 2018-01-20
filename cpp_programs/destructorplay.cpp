#include<iostream>
using namespace std;
int i;

class shahul
{
	public:

	~shahul()
	{
		i = 10;
	} 

};

//int& fun()
int fun()
{

	i =4;
//	{
		shahul sh;
//	}
	return i;
}


int main()
{
	cout<<"fun"<<fun()<<endl;
	return 0;
}
