#include <stdio.h>
#define CLK_TCK 100

int main()
{
	float c1,c2;
	float result;
	int h = 0;
	int m = 0;
	int s = 0;

	scanf("%f %f",&c1,&c2);

	result = (c2-c1)/CLK_TCK;
	while(360*h+60*m+s<result){
		m = 0;
		while(360*h+60*m+s<result){
			s = 0;
			while(360*h+60*m+s<result){
				if(s == 60){
					m++;
					break;
				}
				s++;
			}
			if(m == 60){
				h++;
				break;
			}
		}
	}
	
	printf("%d %d %d\n",h,m,s);


	return 0;
}
