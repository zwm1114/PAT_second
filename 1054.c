#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100
void s_gets(char *);//handle input
char * judge(char *);//check if is legal


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
	char *end; 
	char sign[SIZE];
	scanf("%d\n",&n);
	for(i = 0;i < n;i ++){
		s_gets(sign); //get input
		res = judge(sign); //if legal
		if(res != NULL){
			value = strtod(sign,&end);
			if(value < -1000 || value > 1000){
				printf("ERROR: %.0f is not a legal number\n",value);
				continue;	
			}
			sum += value;
			count ++;
		}else{
			printf("ERROR: %s is not a legal number\n",sign);
		}
	}
	if(count == 0){
		printf("The average of 0 numbers is Undefined");
	}else if(count == 1){
		printf("The average of 1 number is %.2f",sum);
	}else if(count > 2){
		printf("The average of %d numbers is %.2f",count,sum/count);
	}
	

    return 0;
}

void s_gets(char *str){
	char a;
	int i = 0;
	while((a = getchar())!= ' ' && a != '\n'){
		str[i] = a;
		i ++;
	}
	str[i] = '\0';
}

char * judge(char *str){
	int i = 1;
	char *res = NULL;
	const char ch = '.';
	char *end;
	char *ret = strchr(str,ch);
	int len = strlen(str);
//in the first position, if it is either a digit or a sign,it is illegal
	if(!isdigit(str[0]) && str[0] != '-' && str[0] != '+'){
		return res;
	}

//if no point,a charcter means wrong 
	if(!ret){
		while(i < len){
			if(!isdigit(str[i])){
				return res;
			}
			i ++;
		}
	}else{
		//there is a point,it is illegal if the length more than 3 
		//or there is a point after it 
		if(strlen(ret) > 3 || !strchr(ret,ch)){
			return res;
		}else{
			//after the point, if the type of element is not char it means illegal
			while(!isdigit(*++ret)){
				return res;
			}
		}
	}

	return str;

}
