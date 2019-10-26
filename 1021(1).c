#include <stdio.h>

int main(){

	char arr[1001] = {0};
	int i = 0;
	int num_0 = 0;
	int num_1 = 0;
	int num_2 = 0;
	int num_3 = 0;
	int num_4 = 0;
	int num_5 = 0;
	int num_6 = 0;
	int num_7 = 0;
	int num_8 = 0;
	int num_9 = 0;	
	char a;

	while(1){
		a = getchar();
		if(a == '\n'){
			break;
		}
		arr[i++]=a;
	}
	
	while(i--){
		switch(arr[i]-'0'){
			case 0: num_0++;break;
			case 1: num_1++;break;
			case 2: num_2++;break;
			case 3: num_3++;break;
			case 4: num_4++;break;
			case 5: num_5++;break;
			case 6: num_6++;break;
			case 7: num_7++;break;
			case 8: num_8++;break;
			case 9: num_9++;break;
		}
	}
	if(num_0 != 0){
		printf("0:%d\n",num_0);
	}
	if(num_1 != 0){
		printf("1:%d\n",num_1);
	}
	if(num_2 != 0){
		printf("2:%d\n",num_2);
	}
	if(num_3 != 0){
		printf("3:%d\n",num_3);
	}
	if(num_4 != 0){
		printf("4:%d\n",num_4);
	}
	if(num_5 != 0){
		printf("5:%d\n",num_5);
	}
	if(num_6 != 0){
		printf("6:%d\n",num_6);
	}
	if(num_7 != 0){
		printf("7:%d\n",num_7);
	}
	if(num_8 != 0){
		printf("8:%d\n",num_8);
	}
	if(num_9 != 0){
		printf("9:%d\n",num_9);
	}	
	return 0;
}
