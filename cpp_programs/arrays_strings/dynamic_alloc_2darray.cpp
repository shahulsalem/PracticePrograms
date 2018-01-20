#include <iostream>


using namespace std;


class arralloc
{
public:
	arralloc(void);

	int** alloc(int n , int m);

	void print(int **arr, int n, int m); 
};

arralloc::arralloc(void)
{
	cout<<"intialized"<<endl;
}
int** arralloc::alloc(int n, int m)
{
	int **arr = new int*[n];
	for (int i = 0; i < n; i++)
		arr[i]=new int[m];

	return arr;
	
}
void arralloc::print(int **arr, int n , int m )
{
     for (int i=0; i<n; i++)
	{
	for (int j=0;j<m;j++)
		cout<<arr[i][j]<<" ";

	cout<<endl;
	}
}
int main()
{
  arralloc a;
  int **arr = a.alloc(10,10);
  a.print(arr,10,10);
  return 0;
}
