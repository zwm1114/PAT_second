#include <stdio.h>
#define CLK_TCK 100

int main(){
	float c1,c2;
	int h,m,s;
	float c;

	scanf("%f %f",&c1,&c2);

	c=(c2-c1)/CLK_TCK;
	h = c/3600;
	c = c-h*3600;
	m = c/60;
	c = c-m*60;
	s = c;

	if(c-s>=0.5){
		s++;
	}

	printf("%02d:%02d:%02d\n",h,m,s);
	
	return 0;
}
