#include <stdio.h>

int main(){
	
//	逆序 
//	int temp,num;
//	int sum = 0;
	
//	scanf("%d",&temp);
//
//	while(temp > 0)
//	{
//		num = temp % 10;
//		printf("%d",num);
//		temp = temp /10;
//		sum += num;
//	}
//	printf("%d\n",sum);

//正序方法一：先逆序再逆序 
	int x=700;
	int d;
	int t=1; 
	
	d=x%10;
	x=x/10;
	while(x>0){
		d=x%10;
		t=10*t+d;
		x=x/10;
	}
	printf("%d\n",t);
	
	while(t>0){
		printf("%d",t%10);
		t=t/10;
	}
}
