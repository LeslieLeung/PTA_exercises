#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main()
{
  int n=0,k;
  string bin;
  cin >> bin;
  k = bin.length();
  for (int i=0; i <= k; i++)
    {
    if (bin[i]=='1')
	n += pow(2,k-i-1);
    }
  cout << n;
  return 0;
}


