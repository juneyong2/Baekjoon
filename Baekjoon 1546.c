#include <stdio.h>

int main()
{
 int a;
 scanf("%d", &a);
 int arr[a],i,max=-1;
 double sum=0,Arr[a];
 for(i=0;i<a;i++){
   scanf("%d",&arr[i]);
   if(arr[i]>max)
    max = arr[i];
 }
 
 for(i=0;i<a;i++){
   Arr[i]=(double)arr[i]/max*100;
   sum+=Arr[i];
 }
  printf("%lf", sum/a);
  return 0;
}
