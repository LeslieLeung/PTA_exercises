#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int binary_to_decimal(const char a[])
{
int i=0,k=0,sum=0;
while(a[i++]!='\0')
{i++;}
i--; //判定字符串长度
if(i>32) //当超过32位整数最大的范围时，报错
{
printf("超过32位整数的范围");
return 0;
}
else
for(int j=i;j>0;j--)
{
if(a[k++]=='1')
sum+=(int)pow(2,j-1);
}
return sum;
}
int main()
{
char a[8];
scanf(a);
printf("%d\n",binary_to_decimal(a));
return 0;
}
