#include <stdio.h>

int main(){
	int n,num;
	scanf("%d",&n);
	num = n;
	//���n��λ��
	int count = 1;
	while(n > 10){
		n = n/10;
		count *= 10;
	} 
    //�ó���λ��ʮλ����λ
    char s[100];
    int i = 1;
    while(count > 0)
    {
    
    switch(count)
	{
    	
    	case 100:
			{
    			while(i <= num/count){
				printf("B");
				i++;
			}
			num=num%count;
			count = count/10;
			i=1;
			};
		case 10:
			{
				while(i <= num/count){
				printf("S");
				i++;
				}
				num=num%count;
				count = count/10;
				i=1;	
			};
		case 1:
			{
				while(i <= num/count){
					printf("%d",i); 
					i++;
				}
				count = count/10;
				break;	
			}
		}
	}
		
	return 0;
}
