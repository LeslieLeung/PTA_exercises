#include<iostream>
using namespace std;

int main()
{
  int Today,DayAfter;
  cin >> Today >> DayAfter;
  if (Today>=0 && Today<=7)
  {
    if (Today+DayAfter%7<=7)
      cout << Today+DayAfter%7;
    else
       cout << Today+DayAfter%7-7;
       return 0;
  }
  else
  return -1;
}
