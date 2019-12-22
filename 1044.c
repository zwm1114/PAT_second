#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
  Author:zoe
  Date: 2019/12/22 22:14:42
*/

struct mars
{
	char sign [5];
};

const struct mars low[] = {"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
const struct mars high[] = {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

int main()
{
	
	int n;
	char temp [10];
	int length = 0;
	int num = 0;
	int j = 0;
	scanf("%d",&n);
	
	while(n--){
		scanf("%s",temp);
		num = 0;
		length = strlen(temp);
		if(isdigit(temp[0])){
			for(j = 0;j < length;j ++){
				num = num * 10 + temp[j] - '0';
			}
			if(num < 13){
				printf("%s\n",low[num]);
			}else{
				if(num%13){
					printf("%s %s\n",high[num/13 - 1],low[num%13]);
				}else{
					printf("%s\n",high[num/13 - 1]);
				}
			}
		}else{
			while(j < 13){
				if(strstr(low[j].sign,temp) != NULL){
					num = j; 
					break;
				}
				j ++;
			}
			j = 0;
			while(j < 12){
				if(strstr(high[j].sign,temp) != NULL){
					num = num + (j + 1) * 13; 
					break;
				}
				j ++;
			}
			printf("%d\n",num);			
		}
	}
    return 0;
}

