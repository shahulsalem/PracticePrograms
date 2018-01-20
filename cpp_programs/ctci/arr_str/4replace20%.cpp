#include <iostream>
#include <string>
#include <string.h>


using namespace std;


class name1{

public:

	void replace20()
	{
		string ipbuff;

		cout<<"\n Enter the Input string"<<endl;

		getline(cin,ipbuff);

		bool parse = true;
		size_t npos;
		int len = ipbuff.size();
		cout<<"\n"<<ipbuff<<endl;
		while(parse)
		{
			if (string::npos ==  ( npos = ipbuff.find(' ')))
				break;
			cout<<npos<<endl;

			if (npos >= len)
				break;
			ipbuff.replace(npos,1,"0");	
			ipbuff.insert(npos,"%2");	
		
			len = ipbuff.size();
		cout<<"\n"<<ipbuff<<endl;
		}

		cout<<"result \n"<<ipbuff<<endl;
	}


};

int main()
{
	name1 nm;
	nm.replace20();
	return 0;
}
