#include <stdio.h>

int main(){
	char s[100];
	int i = 0;
	int count = 0;
	int t,j,k;
	char a;
	while(1){
		a = getchar();
		if(a =='\n'){
			break;
		}
		s[i++]=a;
	}
	i--;
	while(i >= 0){
		j=i;
   		while(j>=0){
   			if(s[j] == 32){
   				count++;
   				break;
			   }
			   j--;
		}
		t=i;
		i=j;
		k=j+1;//Ìø¹ý¿Õ¸ñ 
		while(t>=k){
			printf("%c",s[k]);
			k++;
		}
		if(count--){
			printf(" ");
		}
		i--; 
	}
	
	return 0;
}
