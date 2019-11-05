#include <stdio.h>
#include <ctype.h>
const int weight [18] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
const char check [18] = {'1','0','X','9','8','7','6','5','4','3','2'};

struct id
{
	int isValid;
	int num [17];
	char lastNum;
};

int main(){
	int n,i;
	int a;
	int j = 0;
	char lastNum;
	int sum = 0;
	struct id id[100];
	int count = 0;
	char temp[20]={0};
	scanf("%d",&n);
	getchar();
	while(j < n){
		id[j].isValid = 1;
		sum = 0;
		for(i = 0;i < 17;i ++){
			a = getchar();
			if(a < '0' || a > '9'){
				id[j].isValid = 0;
				count ++;
			}
			id[j].num[i] = a - '0';
			sum += weight[i] * id[j].num[i];			
		}
		
		lastNum = getchar();
		if(check[sum%11] != lastNum){
			id[j].isValid = 0;
		}
		id[j].lastNum = lastNum;	
	
		getchar();
		j++;
	}

	if(count != 0){
		for(j = 0; j < n;j ++){
		if(!id[j].isValid){
			for(i = 0;i < 17;i ++){
				if((id[j].num[i] + '0') < '0' || (id[j].num[i] + '0') > '9'){
					printf("%c",id[j].num[i]+'0');
				}else{
					printf("%d",id[j].num[i]);	
				}
			}
			printf("%c\n",id[j].lastNum);
		}
		}	
	}else{
		printf("All passed");
	}

	return 0;
}
