#include <iostream>
#include <vector>


using namespace std;


class name1
{
public:

	vector <vector <int> > grid;
	name1():grid(20,vector<int>(20,1))
	{
		
	}
	void print1()
	{
		vector <vector<int> >::iterator it1;
		vector <int>::iterator it2;
		int val = 0;
		for(it1 = grid.begin();it1!=grid.end();it1++)
		{
			for(it2 = it1->begin();it2!=it1->end();it2++)
			{
				cout<<*it2<<" ";
				if (it2 == it1->begin())
					*it2=val;
			}
			cout<<endl;
		}
		return;
	}
	void validate()
	{
		
		vector <vector<int> >::iterator it1;
		vector <int>::iterator it2;
		for(it1 = grid.begin();it1!=grid.end();it1++)
		{
			for(it2 = it1->begin();it2!=it1->end();it2++)
			{
				if ( *it2 == 0 )
				{
					this->resetall();	
				}
			}
		}
		return;
	}
	void resetall()
	{
		
		vector <vector<int> >::iterator it1;
		vector <int>::iterator it2;
		for(it1 = grid.begin();it1!=grid.end();it1++)
		{
			for(it2 = it1->begin();it2!=it1->end();it2++)
			{
				*it2=0;
			}
		}
		return;	
	}
};

int main()
{
	name1 nm;
	nm.print1();
	cout<<"after validate"<<endl;
	nm.validate();
	nm.print1();
	return 0;
}
