#include <stdio.h>

int main(){
	int arr[200];
	int i = 0;
	int j = 0;
	char a;
	scanf("%d",&arr[i]);
	while( a=getchar() == 32){
			i++;
			scanf("%d",&arr[i]);
	}
	while(j <= i){
		if(i == 1 && (arr[j] == 0 || arr[j+1] == 0)){
			printf("0 0");
			break;
		}else if(arr[j] != 0 && arr[j+1] == 0){
			break;
		}else{
			printf("%d ",arr[j++]*arr[j]);
			printf("%d",arr[j]-1);	
		}
		j++;
		if( j < i && arr[j+1] != 0){
			printf(" ");
		}
	}
	
	return 0;
}
