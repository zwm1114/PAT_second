#include <stdio.h>
#include <string.h>

/*
  Author:zoe
  Date: 2019/12/23 22:07:43
*/

int main()
{
	char sa [100];
	char sb [100];
	int i = 1;
	scanf("%s %s",sa,sb);
	int la = strlen(sa);
	int lb = strlen(sb);
	int temp;
	int length = la < lb? la:lb;

	for(i;i <= length; i++){
		la --;
		lb --;
		if(i%2){
			temp = ((sb[lb]-'0') + (sa[la] - '0'))%13;
			if(temp == 10){
				sb[lb] = 'J';
			}else if(temp == 11){
				sb[lb] = 'Q';
			}else if(temp == 12){
				sb[lb] = 'K';
			}else{
				sb[lb] = (char)(temp + '0');
			}
		}else{
			temp = (sb[lb] - '0') - (sa[la] - '0');
			if(temp < 0){
				sb[lb] = (char)(temp + 10 + '0');
			}else{
				sb[lb] = (char)(temp + '0');
			}
		}
	}

	
	printf("%s",sb);
    return 0;
}

