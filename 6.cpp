#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int v,h;
  cin >> v >> h;
  float n = (1.0*v)/h;
  //cout.setf(ios::fixed);
  cout << int(n+0.5);
  return 0;
}

