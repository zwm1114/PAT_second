#include <stdio.h>

int main(){
	int n,i,j;
	char m;
	int a,b,c;
	int arr[3];
	int k = 1;
	scanf("%d",&n);
	while(k<=n){
		i=0;
		j=0;
		scanf("%d",&arr[i]);
		while(m=getchar() == 32){
			i++;
			scanf("%d",&arr[i]);
		}
		if(arr[j++]+arr[j++]>arr[j]){
			printf("Case #%d: true\n",k);
		}else{
			printf("Case #%d: false\n",k);
		}
		k++;
	}
	return 0;
}
