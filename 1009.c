#include <stdio.h>

int main(){
	char s[100]={'1'};
	int i = 0;
	int t,j;
	char a;
	while(1){
		a = getchar();
		if(a=='\n'){
			break;
		}
		s[i++]=a;
	}
	while(i--){
		j=i;
   		while(s[j] != '0'){
			j--;
		}
		t=i;
		i=j;
		while(t>=i){
			printf("%c",s[i]);
			t--;
		}
	}
	
	return 0;
}
