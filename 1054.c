#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100
void s_gets(char *);
char * judge(char *);


/*
  Author:zoe
  Date: 2019/12/26 22:41:34
*/

int main()
{
	int n;
	int i;
	int count = 0;
	double value;
	double sum = 0.0;
	char *res;
	char sign[SIZE];
	scanf("%d\n",&n);
	for(i = 0;i < n;i ++){
		s_gets(sign); //get input
		res = judge(sign); //if legal
		if(res != NULL){
			count ++;
			value = strtod(sign);
			sum += value;
		}else{
			printf("ERROR: %s is not a legal number\n",sign);
		}
	}
	if(count == 0){
		printf("The average of 0 numbers is Undefined");
	}else{
		printf("The average of %d number is %.2f",count,sum/count);
	}
	

    return 0;
}

void s_gets(char *str){
	char a;
	int i = 0;
	while((a = getchar())!= ' '){
		str[i] = a;
		i ++;
	}
	str[i] = '\0';
}

char * judge(char *str){
	int i = 1;
	char *res = NULL;
	int len = strlen(str);

	if(!isdigit(str[0]) && str[0] != '-' && str[0] != '+'){
		return res;
	}

	while(i < len){
		if(!isdigit(str[i])){
			return res;
		}
		if(str[i] == '.' && (len-i > 3)){
			return res;
		}
	}

	return str;

}