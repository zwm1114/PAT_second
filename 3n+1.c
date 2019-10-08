#include <stdio.h>

int main(){
	int num;
	int count = 0;
	scanf("%d",&num);
	
	while(num != 1){
		
		if(num%2 != 0){
		
			num = 3*num + 1;
		}
		num = num/2;
		count ++;
	}
	
	printf("%d",count);
	
}
