#include <stdio.h>

typedef struct 
{
	char id[17];
	int meNum;
	int exNum;
}student;

int main(){
	int n;
	int i,j;
	int seak;
	int num[1001];
	student stu[1001];
	scanf("%d",&n);
	for(i = 0;i < n; i ++){
		scanf("%s %d %d",stu[i].id,&stu[i].meNum,&stu[i].exNum);
	}
	scanf("%d",&seak);	
	for(i = 0;i < seak;i ++){
		scanf("%d",&num[i]);
	}

	for(i = 0;i < seak;i ++){
		for(j = 0;j < n;j ++){
			if(stu[j].meNum == num[i]){
				printf("%s %d",stu[j].id,stu[j].exNum);
			}
		}
		printf("\n");
	}

	return 0;
}
