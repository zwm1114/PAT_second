#include <stdio.h>

int main(){
	int n,num;
	scanf("%d",&n);
	num = n;
	//求出n的位数
	int count = 1;
	while(n > 10){
		n = n/10;
		count *= 10;
	} 
    //得出百位，十位，个位
    char s[100];
    char c[9]={'1','2','3','4','5','6','7','8','9'};
    int i = 0;
    int j = 1;
    int k = 0;
    while(count > 0)
    {
    
    switch(count)
	{
    	
    	case 100:
			{
    			while(i < num/count){
				s[i++] = 'B';
			}
			num=num%count;
			count = count/10;	
			};
		case 10:
			{
				while(j <= num/count){
				s[i++] = 'S';
				j++;
				}
				num=num%count;
				count = count/10;	
			};
		case 1:
			{
				while(k < num/count){
					s[i++] = c[k] ; 
					k++;
				}
				count = count/10;
				break;	
			}
		}
	}
	
	printf("%s",s);
	
	return 0;
}
