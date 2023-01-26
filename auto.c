#include<stdio.h>
int main()
{
auto int x=5;
printf("%d\n",x);
{
x=4;
printf("%d",x);
}
return 0;
}
