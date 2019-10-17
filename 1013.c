#include <stdio.h>

int main(){
	int m,n;
	int i;
	int num = 2;
	int count = 0;
	scanf("%d %d",&m,&n);
	while(count <= n){
		i = 2;
		while(i < num/2 && num%i != 0){
			i++;
		}
		if(i == num/2){
			count ++;
		}
		if(count >= m && count <= n){
			printf("%d",num);
		}
		if(count-m == 10){
			printf("\n");
		}else if(count < n){
			printf(" ");
		}
		num ++;
	}
	return 0;
} 
