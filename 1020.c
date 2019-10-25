#include <stdio.h>

/*找到最大的数的下标*/
int max(float arr[]){

}

int main(){
	int n,r;
	float arr_inventory[1000]={0};
	float arr_charge[1000]={0};
	float arr_unitPrice[1000]={0};
	int i = 0;

	scanf("%d %d",&n,&r);

	while(i<n){
		scanf("%f",&arr_inventory[i]);
	}
	i = 0;
	getchar();
	while(i<n){
		scanf("%f",&arr_charge[i]);
	}
	i=0;
	while(i<n){
		arr_unitPrice[i]=arr_charge[i]/arr_inventory[i];
	}

	while(total < r){
		
	}



	return 0;
}