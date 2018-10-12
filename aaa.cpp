#include <iostream>
using namespace std;
int H;
double weight;

int main()
{
  cin >> H;
    if (H>100 && H<=300)
      {
      weight = (H-100)*0.9*2;
      cout << weight;
      return 0;
      }
    //else
      //return -1;
  
}
