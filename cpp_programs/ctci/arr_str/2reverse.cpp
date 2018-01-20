#include <iostream>
#include <string>
#include <string.h>


using namespace std;


class name1{

public:
	void reverse(char * str)
	{
		int len = strlen(str);
		char * temp = new char[len];
		strcpy (temp,str);
		cout<<"\n str"<<str<<"temp "<<temp<<endl;
		int i = len;int j = 0;
		while( len > 0 && temp[len-1] != '\0')
		{
			str[j] = temp[len-1];
			len--;j++;
		}
		return;
	}

};

int main()
{
	name1 nm;
	char str[16] = "hadkl.jfghiklzd";
	str[16] = '\0';
	nm.reverse(str);
	cout<<"\n"<<str<<endl;
	return 0;
}
