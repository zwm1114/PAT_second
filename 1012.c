#include <stdio.h>

int main(){
	int arr[1002];
	int l = 0;
	long count1 = 0;
	int count2 = 1;
	long result = 0;
	long count3 = 0;
	int count4 = 0;
	double sum = 0.0;
	int max = 0;
	double avg;
	char a;
	scanf("%d",&arr[l]);
	while(a=getchar() == 32){
		l ++;
		scanf("%d",&arr[l]);
	} 
	while(l > 0){
		switch(arr[l]%5){
			case 0:{
				if(arr[l]%2 == 0){
					count1 = count1+arr[l];
				}
				break;
			}
			case 1:{
				if(count2%2 == 0){
					result = result -arr[l];
				}else{
					result = result + arr[l];
				}
				count2++;
				break;
			}
			case 2:{
				count3 ++;
				break;
			}
			case 3:{
				sum = sum + arr[l];
				count4++;
				break;
			}
			case 4:{
				if(arr[l]>max){
					max = arr[l];
				}
				break;
			}
		}
		l --;
	}
	if(count1 == 0){
		printf("N ");
	}else{
		printf("%ld ",count1);
	}
	
	if(count2 == 1){
		printf("N ");
	}else{
		printf("%ld ",result);
	}
	
	if(count3 == 0){
		printf("N ");
	}else{
		printf("%ld ",count3);
	}

	if(count4 == 0){
		printf("N ");
	}else{
		avg = sum / count4;
		printf("%.1f ",avg);
	}
	
	if(max == 0){
		printf("N");	
	}else{
		printf("%d",max);
	}
	
	return 0;
} 
