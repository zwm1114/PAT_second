#include <stdio.h>
#include <ctype.h>

int main(){
	char origin[85] = {0};
	int arr[130] = {0};
	char a;
	int i = 0;
	int j = 0;

	scanf("%s",origin);
	getchar();
	

	while(origin[j] != '\0'){
		i = j;
		a = getchar();
		while(a != origin[i] && origin[i] != '\0'){
			i++;
		}
		while(j<i){
			if(arr[toupper(origin[j])] == 0){
				printf("%c",toupper(origin[j]));
				arr[toupper(origin[j])] = 1;
			}
			j++;
		}
		j++;
	}


	return 0;
}
