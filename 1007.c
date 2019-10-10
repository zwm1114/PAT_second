#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int arr[500] = {0};
	int i,j;
	int count = 0;
	for(j=1;j<n;j++){
		i = 2;
		while(i < j){
			if(j%i == 0){
				arr[j] = 1;
			}
			i++;
		}
	}
	int p = n-1;
	int q ;

	while(p>1){
		while(arr[p] == 1){
			p--;
		}
		q = p -1;
		while(arr[q] == 1){
			q--;
		}
		if(p-q == 2){
			count ++;
		}
			p=q;
			q=p-1;
	}	
	
	printf("%d",count);
		
	return 0;
}
