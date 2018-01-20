#include <iostream>
#include<sstream>
#include<string>

using namespace std;



int main()
{

	ostringstream str1;

	int geek = 450;

	str1<<geek;


	string str2 = str1.str();

	cout << str2<<endl;
	return 0 ;
}
