#include <stdio.h>
#include <math.h>

int main(){
	int arr[10001] = {0};
	int m,n;
	int i;
	int num = 3;
	int count = 1;
	scanf("%d %d",&m,&n);
	while(count <= n){
		i = 2;
		while(i <= sqrt(num)){
			if(num%i == 0){
				arr[num] = 1;
			}
			i++;
		}
		if( m == 1 && count == m && m != n){
			printf("2 ");
		}else if(n == 1){
			printf("2");
		} 
		if(arr[num] == 0){
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
