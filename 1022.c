#include <stdio.h>

int main()
{
	int a,b,d;
	int arr[100]={0};
	int i;
	int result =1;
	int num;
	
	scanf("%d %d %d",&a,&b,&d);
	num = a+b;
	if(num == 0){
		i = 1;
	}else{
		i = 0;
	}

	while(num != 0){
		result = num%d;
		arr[i++] = result;
		num = num/d;
	}

	while(i--){
		printf("%d",arr[i]);
	}

	return 0;
}
