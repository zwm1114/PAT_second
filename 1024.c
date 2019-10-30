#include <stdio.h>
void printZero(int n);

void printZero(int n){
	if(n >= 0){
		while(n--){
			printf("0");
		}	
	}
}

int main(){
	char s[10000]={0};
	int i = 1;
	int n = 1;
	int k,j;
	int a = 0;
	int count = 1;

	scanf("%s",s);

	if(s[0] == '-'){
		printf("-");
	}

	while(s[n] != '+'&& s[n] != '-'){
		n++;
	}
	k = n+1;
	while(s[k+1] != '\0'){
		count = count*10;
		k++;
	}
	j = n+1;
	/*指数*/
	while(j <= k){
		a += count*(s[j]-'0');
		count = count/10;
		j++;
	}

	if(s[n] == '+'){
		n = n - 1;
		while(i < n){
			if(s[i] != '.'){
				printf("%c",s[i]);
				a --;	
				if(a == -1){
					printf(".");
				} 				
			}			
			i++;
		}
		printZero(a+1);
	}else{
		n = n - 1;
		if(a != 0){
			printf("0.");		
		}
		printZero(a-1);		
		while(i < n){
			if(s[i] != '.' || a == 0){
				printf("%c",s[i]);			
			}
			i++;
		}
	}
	return 0;
}
