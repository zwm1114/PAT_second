#include <stdio.h>

int main(){
	int n;
	long p;
	int i = 0;
	long a;
	int j,plus;
	char jump;
	int max = 0;
	int min = 100000;
	int count = 0;
	long arr[100000]={0};
	scanf("%d%ld",&n,&p);
	while(scanf("%ld",&a)){
		arr[i] = a;
		if(arr[i] >= max){
				max = arr[i];
		}
		if(arr[i] <= min){
			min = arr[i];
		}
		i ++;
		if((jump = getchar()) == '\n'){
			break;
		}
	}
	plus = min * p;
	for(j = 0;j < i; j++){
		if(arr[j] <= plus && arr[j] >= min){
			count ++;
		}
	}

	printf("%d",count);
	return 0;
}
