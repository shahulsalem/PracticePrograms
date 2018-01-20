#include <iostream>
#include <vector>
using namespace std;


class name1
{
	public:

		vector <vector <int> > vect; 
		vector <vector <int> > vectoutput; 
		name1():vect(20,vector<int>(20)),vectoutput(20,vector<int>(20))
		{
			vector <vector <int> >::iterator row;
			vector <int>::iterator col;
			int val = 0;	
			for (row = vect.begin();row != vect.end();row++)
			{

				for (col = row->begin();col != row->end();col++)
				{
					*col = 0;
					if (col == row->begin())
						*col = 2;
				}
			}
		}	
		void printarr()
		{

			vector <vector <int> >::iterator row;
			vector <int>::iterator col;
			for (row = vect.begin();row != vect.end();row++)
			{

				for (col = row->begin();col != row->end();col++)
				{
					cout<<*col<<" ";
				}
				cout<<endl;
			}

			cout<<"\n\n after rotate \n\n";
			for (row = vectoutput.begin();row != vectoutput.end();row++)
			{

				for (col = row->begin();col != row->end();col++)
				{
					cout<<*col<<" ";
				}
				cout<<endl;
			}	
			return;
		}
		void rotate90()
		{

			vector <vector <int> >::iterator row;
			vector <int>::iterator col;
			int n = 19;
			for (int i= 0;i<20;i++)
			{
				for (int j =0;j<20;j++)
				{
					vectoutput[j][n-i] = vect[i][j];
					
				}
			}	

			return;
		}

};

int main()
{
	name1 nm;
	cout<<"\n input"<<endl;
	nm.printarr();
	nm.rotate90();
	cout<<"\n output"<<endl;
	nm.printarr();
	return 0;
}
