#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class name1
{
	public:
		string * compress(string str)
		{
			string opbuff;
			int count = 0;
			for (int i=0;i<str.size();i++)
			{
				if (str[i] == str[i+1])
				{
					count++;
			//		cout<<opbuff<<endl;
				}
				else
				{
					
					stringstream intstr;
					count++;
					opbuff += str[i];
					intstr<<count;
					opbuff += intstr.str();
					//opbuff.append(str[i]);
					//opbuff.append((const*)intstr.str());
					count = 0;
				}
			}
			cout<<opbuff<<endl;
		}
};
int main()
{
	name1 nm;
	nm.compress("wweeeeerrrrfffftttthhhahah");
	return 0;
}
