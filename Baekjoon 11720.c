#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    char arr[input];
	int sum=0;
    scanf("%s", arr);
    
    for(int i=0;i<input;i++){
        sum +=arr[i] -'0';
    }

    printf("%d", sum);
}
