#include <stdio.h>
#include <string.h>

int main()
{
	char arr[100];
	scanf("%s",arr);
	char alp[26];
	char alpha ='a';
	int num[26]={0},i,j;
	for(i=0;i<26;i++){
		alp[i] =alpha;
		alpha++;
	}
	for(i=0;i<26;i++){
		for(j=0;j<strlen(arr);j++){
			if(alp[i]==arr[j]){
				num[i]=j;
				break;
			}
			else if(alp[i]!=arr[j]){
				num[i]=-1;
			}
		}
	}
	for(i=0;i<26;i++)
		printf("%d ",num[i]);
	return 0;
}
