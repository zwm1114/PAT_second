#include <stdio.h>

/*升序排序*/
int ascSort(int a,int b,int c,int d){
	

}
/*降序排序*/
int desSort(int a,int b,int c,int d){

}

int main(){
	
	long num;
	int a,b,c,d;
	scanf("%ld",num);

	while(num != 6174){
	/*求出各位数字*/
		a = num/1000;
		num = num%1000;
		b = num/100;
		num = num%100;
		c = num/10;
		num = num%10;
		d = num;
		des = desSort(a,b,c,d);
		asc = ascSort(a,b,c,d);
		printf("%ld - %ld = %ld",des,asc,des-asc);
		num = des-asc;		
	}
	

	return 0;
}