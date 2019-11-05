#include <stdio.h>
const char sign[] = {'+','-','*','/'};

int main(){
	int a1,b1;
	char sign1,sign2;
	int a2,b2;

	if((sign1 = getchar()) != '-'){
		a1 = sign1 - '0';
		sign1 = '+';
		scanf("/%d",&b1);
	}else{
		scanf("%d/%d",&a1,&b1);
	}

	getchar()
	if((sign2 = getchar()) != '-'){
		a2 = sign2 - '0';
		sign2 = '+';
		scanf("/%d",&b2);
	}else{
		scanf("%d/%d",&a2,&b2);
	}

	for(i = 0;i < 4;i ++){
		if(sign1 == '-'){
			printf("-");
		}else if(){

		}

	}



	return 0;
}