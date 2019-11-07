#include <stdio.h>
#define SIZE 100001


int main(){
	int n;
	int index,score;
	int max = 0;
	int maxIndex = 0;
	int degree[SIZE] = {0}; 
	scanf("%d",&n);

	while(n --){
		scanf("%d%d",&index,&score);
		degree[index] += score;
		if(degree[index] >= max){
			maxIndex = index;
			max = degree[index];
		}
	}

	printf("%d %d",maxIndex,max);
	return 0;
}
