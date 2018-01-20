#include <iostream>
#include <string>
#include <string.h>


using namespace std;


class name1{

public:
	bool isPerm(string str1, string str2)
	{
		int len = str1.size();
		int jlen = str2.size();
		int matchcount = 0;
		for(int i = 0;i<len;i++)
		{
			int j = 0;
			while(j<jlen)
			{
				if(str1[i] == str2[j])
					matchcount++;		

				j++;	
			}
		}
		if (matchcount == len)
		{
			cout<<"success :"<<matchcount<<endl;
			return true;
		}	
		else
			return false;
	}

};

int main()
{
	name1 nm;
	
	nm.isPerm("abc","cba");

	return 0;
}
