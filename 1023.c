#include <stdio.h>

int main(){
	int arr[10] = {0};
	int i = 1;
	int n = 0;
	int flag = 1;
	char a;
	
	scanf("%d",&arr[n]);
	n++;
	while(a = getchar() != '\n'){
		scanf("%d",&arr[n]);
		n++;
	}
	while(i<10){
		if(flag && arr[i] != 0){
			printf("%d",i);
			arr[i]--;
			flag = 0;
		}
		if(flag == 0){
			while(arr[0] != 0){
				printf("0");
				arr[0] --;
			}
			while(arr[i] != 0){
				printf("%d",i);
				arr[i] --;
			}
		}		
		i ++;
	}

	return 0;
}
