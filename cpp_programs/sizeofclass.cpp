#include<iostream>

using namespace std;

class empty{};


class derived1:public empty{};

class derived2:public virtual empty{};

class derived3:public empty{

char c;
};
class derived4:public virtual empty{
char c;
};

int main()
{
	cout<<"\nsize of empty "<<sizeof(empty);
	cout<<"\nsize of der1 "<<sizeof(derived1);
	cout<<"\nsize of der2 "<<sizeof(derived2);
	cout<<"\nsize of der3 "<<sizeof(derived3);
	cout<<"\nsize of der4 "<<sizeof(derived4);

	return 0;

}



