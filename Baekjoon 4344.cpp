#include <stdio.h>

int main()
{ 
  int a;
  scanf("%d", &a);

  for(int i=0;i<a;i++){
    int input,sum=0;
    double avg=0;
    scanf("%d",&input);
    int arr[input];
    for(int j=0;j<input;j++){
      scanf("%d",&arr[j]);
      sum+=arr[j];
    }
    avg = (double)sum/input;
    int count=0;
    for(int i =0;i<input;i++){
      if(arr[i]>avg){
        count++;
      }
    }
    printf("%.3lf%%\n",(double)count/input*100);
  }
  return 0;
}
