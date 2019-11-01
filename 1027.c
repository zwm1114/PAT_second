#include <stdio.h>

int main(){
	int n;
	char c;
	int i,j,k,m,temp;
	int sum = 1; 
	int p = 1;
	int count = 0;
	

	scanf("%d %c",&n,&c);

	for(j=1;(2*sum-1)<= n;j=j+2){
		i = j;
		sum = 0;
		while(i > 0){
			sum += i;
			i = i -2;
		}
	}
	
	if(2*sum!=n){
		j = j -4;
	}
	
	for(k=0;k<=j-1;k++){
		temp = j;
		if(k<=(j-1)/2){
			m = j -2*k;	
		}else{
			m = 2*p+1;
			p++;
		}	
		temp = (j-m)/2;
		while(temp--){
			printf(" ");
		}
		for(m;m>0;m--){
			printf("%c",c);
			count ++;
		}			
			printf("\n");
	}	
	

	printf("%d\n",n-count);

	return 0;
}
