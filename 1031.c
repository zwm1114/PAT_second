#include <stdio.h>
#include <ctype.h>
const int weight [18] = {7，9，10，5，8，4，2，1，6，3，7，9，10，5，8，4，2};
const int check [18] = {1, 0, X, 9, 8, 7, 6, 5, 4, 3, 2};

struct id
{
	int isValid;
	int num [17];
	char lastNum;
};

int main(){
	int n;
	int a,i;
	int j = 0;
	char lastNum;
	int sum = 0;
	struct id id[100];
	int count = 0;
	scanf("%d",&n);
	while(j < n){
		id[j].isValid = 1;
		for(i = 0;i < 17;i ++){
			a = getchar();
			if(a.isdigit()){
				id[j].num[i] = a;
				sum += weight[i] * a;
			}else{
				id[j].isValid = 0;
				count ++;
				break;
			}
		}
		lastNum = getchar();
		while(weight[i] != sum%11){
			i ++;
		}
		if(check[i] != lastNum){
			id[j].isValid = 0;
		}
		getchar();
	}

	printf("%d\n",n-count);

	for(j = 0; j < n;j ++){
		if(id[j].isValid){
			for(i = 0;i < 17;i ++){
				printf("%d",id[j].num[i]);
			}
			putchar(id[j].lastNum);
		}
	}
	return 0;
}