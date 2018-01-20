#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    typedef vector <int> k;
    vector <k> a;
    int n = 0;
    int q = 0;
    vector <int> output;
    cin>>n >> q ;
   
   // cout<<"\nn"<<n<<"q"<<q<<endl; 
    int val;
    int xc = -1;
    a.resize(n);
    for (int i = 0; i<n; i++)
    {
        val = 0;
	string line1;  
	char c;
	if (xc == -1)
	{
       		cin.get();
		xc = 0;
	} 
	else
	   xc = 0;
//	cin.ignore();
	getline (cin,line1);
	cout<<line1<<"\n";
	istringstream is(line1);
	while ( is >> c)	
	{
	    char *inp = strdup(&c);
	    val = atoi(inp);
            a[i].push_back(val);
	
	   cout<<"\ninert "<<val<<" i "<<i;
	}
	
	cout<<"\ni value"<<i<<endl;
    }
    
   int j = 0; 
    for ( int i=0;i<q;i++)
    {
        
        val = -1; j = 0;
	char c;

	string lin1;    
//	cin.ignore();
	getline (cin,lin1);
	cout<<lin1<<"\n";
	istringstream iss(lin1);
        while ( iss >> c ) //cin>> val >> j  && val != '\n')
        {
	    char *inp = strdup(&c);
	    if (val == -1)
	    val = atoi(inp);
	    else
            j = atoi(inp);
        }
      cout<<"\nval "<<val<<"j "<<j<<endl;  
            output.push_back(a[val][j]);           
    }
    

    while( ! output.empty() )
    {
        val = output.back();
        output.pop_back();
        cout<<val<<endl;
    }
    
    return 0;
}

