#include <stdio.h>

int main(){
	int A[200]={0};
	int n,m,i,j,num;
	int count = 0;
	int k = 0;
	scanf("%d %d",&n,&m);
	m = m % n; 
	int temp = m;
	for(i=n;i<2*n;i++){
		scanf("%d",&num);
 		A[i] = num;
	}
   	for(j=n-m;m>0;m--){
		A[j] = A[2*n-m];
		A[2*n-m]=0;
		j++;
	}
	while(k<2*n-temp){
		if(A[k] != 0){
			if(count > 0){
				printf(" ");
			}
			printf("%d",A[k]);
			count++;
		}
		k++;
	}
	return 0;
}
