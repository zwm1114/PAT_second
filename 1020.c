#include <stdio.h>
#define SIZE 1000

typedef struct
{
	int inventory;
	int charge;
	
}moones;

int max(moones [],int);

int main(){
	int n,demand;
	int i = 0;
	float sum = 0;
	int maxIndex;
	int per;
	moones moon[SIZE];
	scanf("%d%d",&n,&demand);

	while(i<n){
		scanf("%d",&moon[i].inventory);
		i++;
	}

	i = 0;

	while(i<n){
		scanf("%d",&moon[i].charge);
		i++;
	}

	while(demand > 0){
		maxIndex = max(moon,n);
		if(moon[maxIndex].inventory <= demand){
			per = moon[maxIndex].inventory;
		}else{
			per = demand;
		}
		demand -= per;
		sum += ((float)moon[maxIndex].charge/moon[maxIndex].inventory) * per;
		moon[maxIndex].inventory -=per;
	}
	
	printf("%.2f",sum);

	return 0;
}

//找出最大单价
int max(moones moon [],int n){
	int i = 0;
	int maxIndex = 0;
	float max = 0.0;
	float unitCharge;
	while(i<n){
		unitCharge = (float)moon[i].charge/moon[i].inventory;
		if(unitCharge > max && moon[i].inventory != 0){
			max = unitCharge;
			maxIndex = i;
		}
		i++;
	}
	return maxIndex;
}
