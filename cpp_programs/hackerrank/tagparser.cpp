#include <cmath>
#include <cstdio>
#include <string>
#include <string.h>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;


class node{

	public:
		node()
		{
			paramlist.resize(20);
			value.resize(20);
			next.resize(20);
			child.resize(20);
		}
		string tagname;
		vector<string> paramlist;
		vector<string> value;
		vector<node*> child;
		vector<node*> next;
};

class store:public node{

	public:
		node* nd;
		store()
		{
			nd = new node[sizeof(node)];
		}
		node* parsetag(string tagnode,node * nd);

		//	getline(cin,str1);
};

node* store::parsetag( string tagnode, node *nd )
{
	if (NULL == nd)
		nd = new node[sizeof(node)];
	string str1;
	int found, found1;

	if (string::npos ==  (found = tagnode.find("<tag"))  
	|| (string::npos ==  (found1 = tagnode.find("=")) ))
	{
		return NULL;
	}
	else
	{
		nd->paramlist.push_back(tagnode.substr(found,found1));
		
	}
/*	
	if (string::npos ==  (found = tagnode.find('"'))  
	|| (string::npos ==  (found1 = tagnode.find('"')) ))
	{
		return NULL;
	}
	else
	{
		nd->value.push_back(tagnode.substr(found,found1));
	}

*/
	cout<<nd->paramlist.pop_back()<<endl;
//	cout<<nd->value.pop_back()<<endl;
	/*	

		if ( string::npos != (found = str1.find("<tag")))
		{
		this->parse();
		}
	 */	return nd;
}

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	store st;// nd;
	string str1;
	string str2;
	int len;
	size_t found = 0;
	/*
	   char str[256];	
	   cin.get(str,256);
	   len = strlen(str);
	   str[len -1] = '\0';
	 */
	//str1(str);
	//	ofstream file1;
	//	file1.open("xmlfi.txt");
	while (getline(cin,str1))
	{
		str2.append(str1);
		str2.append("\n");
		//		file1<<str1<<endl;
		if ( string::npos != (found = str1.find("</tag1>")))
		{
			break;
		}
	}
	//	file1.close();
	cout<<str2;
	st.parsetag(str2,st.nd);

	//handle query..
//	while (getline(cin,str1))
	{

	}

	return 0;
}

