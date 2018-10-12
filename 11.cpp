#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    double eps, s = 1, pi = 0;
    cin >> eps;
    int flag = -1;
	float i=1.0; 
    while(fabs(s) >= eps){
        flag *= -1;
        s = flag * (1.0/i);
        pi += s;
        i += 2;
    }
    cout << "Pi = " << fixed << setprecision(4) << pi * 4 << endl;
    return 0;
}
