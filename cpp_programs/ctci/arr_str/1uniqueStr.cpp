#include <iostream>
#include <string>

using namespace std;


class ustr{
public:
	
	bool findustr(const string str1)
	{
		cout<<"\n Input string"<<str1<<endl;
		int iSize = str1.size();
		int j = 0;
		string res;	
		bool result = true;
		for (int i = 0; i < iSize;i++)
		{
			j= 0;
			result = true;
			while(j < iSize)
			{
					
				if ( str1[i] == str1[j] && (i!=j) )
				{
					result = false;
			//		cout<<"str1 i"<<str1[i]<<endl;
					break;
				}		
				j++;
			}
			if (result)
			{
				res.append(str1,i,1);
			//	cout<<"Result : "<<str1[i]<<endl;
			}	
		}
		cout<<"\n"<<res<<endl;
	}
};


int main()
{
	ustr us;
	us.findustr("malayalam");
	return 0;
	
}
