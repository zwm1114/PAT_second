#include <stdio.h>
#include <string.h>

/*
  Author:zoe
  Date: 2019/12/22 17:17:46
*/

int main()
{
	char str[10001] ={0};
	char *P = str;
	char *A = str;
	char *T = str;
	char *e = str;
	char *s = str;
	char *t = str;

	scanf("%s",str);

	while(P || A || T || e || s || t){
		P = strchr(str,'P');
		if(P){
			printf("%c",*P);
			*P = 'O';
		}
		A = strchr(str,'A');
		if(A){
			printf("%c",*A);
			*A = 'O';
		}
		T = strchr(str,'T');
		if(T){
			printf("%c",*T);
			*T = 'O';
		}
		e = strchr(str,'e');
		if(e){
			printf("%c",*e);
			*e = 'O';
		}
		s = strchr(str,'s');
		if(s){
			printf("%c",*s);
			*s = 'O';
		}
		t = strchr(str,'t');
		if(t){
			printf("%c",*t);
			*t = 'O';
		}
	}

    return 0;
}

