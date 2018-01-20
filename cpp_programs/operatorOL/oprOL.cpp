#include<iostream>

using namespace std;

class comp
{
public:
	int real;
	int image;

	comp(int r,int i):real(r),image(i)
	{
		cout<<"\n comp constructor";
	}

	bool operator == (const comp & obj)
	{
		if (real == obj.real && image == obj.image)
			return true;
		else
			return false;
	}
	
};

int main()
{
	comp c1(10,11) , c2 (10,11);
	cout <<"\n c1 and c2 are equal"<<(c1 == c2)<<endl;
	return 0;
}
