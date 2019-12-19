#include <stdio.h>

/*
  Author:zoe
  Date: 2019/12/19 21:17:11
*/

int main()
{
	int n;
	scanf("%d\n",&n);
	int arr[n];
	int i = 0;
	char a;
	int k,j,num;
	int count; 
	while(i < n){
		scanf("%d",&arr[i]);
		i ++;
	}
	scanf("%d",&k);
	while(k --){
		scanf("%d",&num);
		count = 0;
		for(j = 0;j < i;j ++){
			if(arr[j] == num){
				count ++;
			}
		}
		printf("%d",count);
		if(k != 0){
			printf(" ");
		}
	}
    return 0;
}

