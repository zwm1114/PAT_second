#include <stdio.h>

int main(){
	int arr[200]={0};
	int n,m,i,j,num;
	int count = 0;
	int k = 0;
	scanf("%d %d",&n,&m);
	int temp = m;
	for(i=n;i<2*n;i++){
		scanf("%d",&num);
 		arr[i] = num;
	}
   	for(j=n-m;m>0;m--){
		arr[j] = arr[2*n-m];
		arr[2*n-m]=0;
		j++;
	}
	while(k<2*n-temp){
		if(arr[k] != 0){
			if(count > 0){
				printf(" ");
			}
			printf("%d",arr[k]);
			count++;
		}
		k++;
	}
	return 0;
}
