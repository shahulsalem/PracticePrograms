#include <iostream>
#include <cstdio>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float f;
    double d;
    cin >> a >> b >> c >> f >> d ;
    
    
    cout<<"\n"<<a<<"\n"<<b<<"\n"<<c<<"\n";
	 printf("%.3f\n%.9lf",f,d);
//   cout<<setprecision(3)<<f<<"\n"<<setprecision(9)<<d<<endl;
//    cout.precision(3);
  //   cout<<f<<"\n"<<setprecision(9)<<d<<endl;
    return 0;
}
