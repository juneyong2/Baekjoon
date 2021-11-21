#include <stdio.h>
int number(int n)
{
int count,arr[3];
for(int i=1;i<=n;i++)
{
if(i<100)
{
count = i;
}
else if(i>=100)
{
arr[0] = i/100,arr[1]=(i%100)/10,arr[2]=i%10;
int a=arr[0]-arr[1],b=arr[1]-arr[2];
if(a==b)
count++;
}
}
return count;
}
int main()
{
int input;
scanf("%d", &input);
printf("%d",number(input));
return 0;
}
