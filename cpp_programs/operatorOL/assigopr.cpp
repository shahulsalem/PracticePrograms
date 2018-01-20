#include<iostream>

using namespace std;



class assig
{
public:
	int * ptr;
	int i;

	assig (int ji)
	{
		ptr = new int(ji);
	}

	assig (const assig &obj)
	{
		
		if (this != &obj)
		ptr = new int(*(obj.ptr));		
		//return *this;
	}
	assig & operator = ( const assig & obj)
	{
		if (this != &obj)
		ptr = new int(*(obj.ptr));		
		return *this;
	}
};


int main()
{
	assig a1(10);
	cout << "\n A1"<<a1.ptr<<"\t"<<*(a1.ptr);
	assig a2 = a1;
	cout << "\n A2"<<a2.ptr<<"\t"<<*(a2.ptr)<<endl;
	return 0;
}
