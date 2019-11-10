#include <stdio.h>

/*升序排序*/
int sort(int a,int b,int c,int d,int flag){
	int temp;
	if(b<a){
		temp = b;
		b = a;
		a = temp;
	}
	if(c<a){
		temp = c;
		c = a;
		a = temp;
	}
	if(d<a){
		temp = d;
		d = a;
		a = temp;
	}
	if(c<b){
		temp = c;
		c = b;
		b = temp;
	}
	if(d<b){
		temp = d;
		d = b;
		b = temp;
	}
	if(d<c){
		temp = d;
		d = c;
		c = temp;
	}

	if(flag == 1){
		return d*1000+c*100+b*10+a;
	}else if(flag == 0){
		return a*1000+b*100+c*10+d;
	}

}


int main(){
	
	int num;
	int a,b,c,d;
	int des,asc;
	scanf("%d",&num);
	
	if(num == 6174){
		printf("7641 - 1467 = 6174\n");
	}
	
	while(num != 6174 && num != 0){
	/*求出各位数字*/
		a = num/1000;
		num = num%1000;
		b = num/100;
		num = num%100;
		c = num/10;
		num = num%10;
		d = num;
		des = sort(a,b,c,d,1);
		asc = sort(a,b,c,d,0);
		printf("%04d - %04d = %04d\n",des,asc,des-asc);
		num = des-asc;		
	}
	

	return 0;
}
