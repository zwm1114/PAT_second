#include <stdio.h>
#include <math.h>

int main(){
	int m,n;
	int i;
	int num = 3;
	int count = 1;
	int flag;
	scanf("%d %d",&m,&n);
	while(count <= n){
		flag = 0;
		i = 2;
		while(i <= sqrt(num)){
			if(num%i == 0){
				flag = 1;
			}
			i++;
		}
		if( m == 1 && count == m && m != n){
			printf("2 ");
		}else if(n == 1){
			printf("2");
		} 
		if(flag == 0){
			count ++;
			if(count >= m && count <= n){
			printf("%d",num);
			if((count-m+1)%10 == 0){
				printf("\n");
			}else if(count < n){
				printf(" ");
			}
		}
		}
		
		num ++;
	}
	return 0;
} 
