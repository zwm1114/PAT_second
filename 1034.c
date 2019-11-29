#include <stdio.h>
#include <string.h>
void handleNum(long,long); 
void calculate(long,long,long,long,char);
long comMultiple(long,long);

int main(){
	long a1,b1,a2,b2;

	//读入字符串
	scanf("%ld/%ld",&a1,&b1);
	scanf("%ld/%ld",&a2,&b2);

	//计算+
	calculate(a1,b1,a2,b2,'+');
	calculate(a1,b1,a2,b2,'-');
	calculate(a1,b1,a2,b2,'*');
	calculate(a1,b1,a2,b2,'/');


	return 0;
}

void handleNum(long a,long b){
	long firPart;
	
	if(a == 0 && b != 0){
		printf("0 ");
	}else if(b == 0){
		printf("Inf ");
	}else{
		firPart = a/b;
	}
	
 	if(a%b){
		if(firPart){
			if(a < 0){
				printf("(%ld %ld/%ld) ",firPart,-(a%b),b);
			}else{
				printf("%ld %ld/%ld ",firPart,a%b,b);
			}
		}else{
			printf("%ld/%ld ",a%b,b);
		}	
	}else{
		printf("%ld ",firPart);
	}
	
}

void calculate(long a1,long b1,long a2,long b2,char a){
	long comdenominator,elment1,elment2;
	
	comdenominator = comMultiple(b1,b2);

	elment1 = a1 * (comdenominator / b1);
	elment2 = a2 * (comdenominator / b2);

	handleNum(a1,b1);
	if(a == '+'){
		printf("+ ");
		handleNum(a2,b2);
		printf("= ");
		handleNum(elment1+elment2,comdenominator);
		printf("\n");
	}

	if(a == '-'){
		printf("- ");
		handleNum(a2,b2);
		printf("= ");
		handleNum(elment1-elment2,comdenominator);
		printf("\n");
	}

	if(a == '*'){
		printf("* ");
		handleNum(a2,b2);
		printf("= ");
		handleNum(elment1*elment2,comdenominator);
		printf("\n");
	}

	if(a == '/'){
		printf("/ ");
		handleNum(a2,b2);
		printf("= ");
		handleNum(elment1/elment2,comdenominator);
		printf("\n");
	}
}

long comMultiple(long a,long b){
	long temp;
	long x = a;
	long y = b;
	if(x < y){
		temp = x;
		x = y;
		y = temp;
	}
	while(y != 0){
		temp = x % y;
		x = y;
		y = temp;
	}
	return a * b / x;
}
