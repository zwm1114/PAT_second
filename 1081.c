/*
    Author:zoe
    Date: 2019/12/30 11:54:47
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 82 //it must more than 81, be careful! cause it includes an enter!
void s_gets(char *,int);
int judge(char *,int);

int main(){
	int n;
	char str[SIZE];
	int len;
	int res;
	scanf("%d\n",&n);
	
	while(n --){
		s_gets(str,SIZE);
		len = strlen(str);
		res = judge(str,len);
		if(res == 0){
			printf("Your password is tai duan le.\n");
		}else if(res == -1){
			printf("Your password is tai luan le.\n");
		}else if(res == -2){
			printf("Your password needs shu zi.\n");
		}else if(res == -3){
			printf("Your password needs zi mu.\n");
		}else{
			printf("Your password is wan mei.\n");
		}
	}
	
	return 0;
}

void s_gets(char * str,int n){
	fgets(str,n,stdin);
	int i = 0;
	while(str[i] != '\n'){
		i ++;
	}

	str[i] = '\0';
}

int judge(char * str,int len){
	int i;
	int digit = 0;
	int alpha = 0;
	if(len < 6){
		return 0; //too short
	}else{
		for(i = 0; i < len; i ++){
			if(!isdigit(str[i]) && !isalpha(str[i]) && str[i] != '.'){
				return -1; //wrong
			}else if(isalpha(str[i])){
				alpha = 1;
			}else if(isdigit(str[i])){
				digit = 1;
			}
		}
	}

	if(digit && alpha){
		return 1; //perfect
	}else if(!digit && alpha){
		return -2; //need number
	}else if(digit && !alpha){
		return -3; //need alpha
	}
}
