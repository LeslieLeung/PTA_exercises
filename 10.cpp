#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int i, j, n;
  cin >> n;
  for (i=1; i<=n; i++){
  	  for (j=1; j<=n && j<=i; j++){
      cout << j << "*" << i << "=" << setw(4) << left << i*j;
    }

    cout << endl;
  }
  return 0;
}
