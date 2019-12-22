#include <stdio.h>
#include <string.h>

/*
  Author:zoe
  Date: 2019/12/21 15:55:36
*/

int main()
{
	char ava [1001];//已有的珠串
	char make [1001];//想做的珠串
	int countAva = 0;//统计多余的珠子
	int la = 0;
	int lm = 0;
	int i,j;

	scanf("%s",ava);
	scanf("%s",make);
	la = strlen(ava);
	lm = strlen(make);
	for(i = 0; i < lm;i ++){
		for(j = 0;j < la;j ++){
			if(make[i] == ava[j]){
				ava[j] = ' ';
				countAva ++;
				break;
			}
		}
	}

	if(countAva == lm){
		printf("Yes %d",la - countAva);
	}else{
		printf("No %d",lm - countAva);
	}
    return 0;
}

