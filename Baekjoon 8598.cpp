#include <stdio.h>
#include<string.h>

int main()
{ 
  int a;
  char arr[80];
  scanf("%d",&a);

  for(int i=0; i<a; i++){
    scanf("%s",arr);
    int sum =0, c=1;
    for(int j=0;j<strlen(arr);j++){
      if(arr[j]=='O'){
         sum +=c;
         c++; 
      } 
      if(arr[j] =='X')
        c =1;
     }
     printf("%d\n", sum);
  }
  return 0;
}
