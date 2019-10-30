#include <stdio.h>

int main(){
	int n;
	char c;
	int i,j;
	int sum = 1; 

	scanf("%d %c",&n,&c);

	for(j=1;2*sum <= n;j=j+2){
		i = j;
		while(i > 0){
			sum += i;
			i = i -2;
		}
	}

	printf("%d\n",j);

	return 0;
}
