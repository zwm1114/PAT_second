#include <stdio.h>
#include <ctype.h>


int main(){
	char s[100];
	int available[100001];
	int i = 0;
	int j = 0;
	int shift = 1;
	char a; 
	int ifPrint = 0;
	scanf("%s",s);

	while(s[i] != '\0'){
		if(s[i] == '+'){
			shift = 0;
		}
		i ++;
	}
	getchar();
	while((a = getchar()) != '\n'){
		j = 0;
		while(j < i){
			if(available[a] == 1){
				break;
			}else if(a == s[j]||(isalpha(a) && toupper(a) == s[j])){
				available[a] = 1;
				break;
			}
			j++;
		}
		if(shift && !available[a]){
			putchar(a);
			ifPrint = 1; 
		}else if(!shift && !isupper(a) && !available[a]){
			putchar(a);
			ifPrint = 1;
		}
	}
	
	if(!ifPrint){
		printf("\n");
	}
	return 0;
}
