#include <stdio.h>
#include <math.h>

int main(){
	int n;
	int colum;
	char c;
	int i,j;
	scanf("%d %c",&n,&c);

	colum = round(n*0.5);

	for(i = 0;i < colum; i ++){
		printf("%c",c);
		if(i == 0 || i == (colum - 1)){
			for(j = 0;j < n-2; j++){
				printf("%c",c);
			}
		}else{
			for(j = 0;j < n-2; j++){
				printf(" ");
			}			
		}
		printf("%c\n",c);
	}

	return 0;
}
