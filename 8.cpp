#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int binary_to_decimal(const char a[])
{
int i=0,k=0,sum=0;
while(a[i++]!='\0')
{i++;}
i--; //�ж��ַ�������
if(i>32) //������32λ�������ķ�Χʱ������
{
printf("����32λ�����ķ�Χ");
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
