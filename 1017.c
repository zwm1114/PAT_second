#include <stdio.h>

int main(){
	char s1[1001]={0};
	int d,q;
	int temp = 0;
	int i = 0;
	int flag = 0;

	scanf("%s %d",s1,&d);

	while(s1[i] != '\0'){
		q=(s1[i]-'0'+temp*10)/d;
		if(flag || q != 0 || s1[i+1] == '\0'){
			printf("%d",q);
			flag = 1;
		}
		temp = (s1[i]-'0'+temp*10)%d;
		i++;
	}
	
	printf(" %d",temp);
	return 0;
}
