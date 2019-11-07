#include <stdio.h>
#include <ctype.h>


int main(){
	char s[70];
	int i = 0;
	int j = 0;
	int shift = 1;
	int isAvailable;
	char a; 
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
		isAvailable = 1;
		while(j < i){
			if(a == s[j]||(isalpha(a) && (tolower(a) == s[j] || toupper(a) == s[j]))){
				isAvailable = 0;
				break;
			}
			j++;
		}
		if(isAvailable && !iswupper(a) && !shift){
			putchar(a);
		}
	}
	return 0;
}
