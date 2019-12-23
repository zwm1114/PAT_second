#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 10
void s_gets(char *);
/*
  Author:zoe
  Date: 2019/12/22 22:14:42
*/

struct mars
{
	char sign [5];
};

const struct mars low[] = {"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
const struct mars high[] = {"0","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

int main()
{
	
	int n;
	char temp [SIZE];
	int length = 0;
	int num = 0;
	int j = 0;
	scanf("%d\n",&n);
	
	while(n--){
		s_gets(temp);
		num = 0;
		length = strlen(temp);
		if(isdigit(temp[0])){
			for(j = 0;j < length;j ++){
				num = num * 10 + temp[j] - '0';
			}
			if(num < 13){
				printf("%s\n",low[num].sign);
			}else{
				if(num%13){
					printf("%s %s\n",high[num/13].sign,low[num%13].sign);
				}else{
					printf("%s\n",high[num/13].sign);
				}
			}
		}else{
			while(j < 13){
				if(strstr(temp,low[j].sign) != NULL){
					num = j; 
					break;
				}
				j ++;
			}
			j = 0;
			while(j < 13){
				if(strstr(temp,high[j].sign) != NULL){
					num = num + j * 13; 
					break;
				}
				j ++;
			}
			printf("%d\n",num);			
		}
	}
    return 0;
}

void s_gets(char * str){
	fgets(str,SIZE,stdin);
	char * a = str;
	while(*a != '\n'){
		a ++;
	}
	*a = '\0';
}
