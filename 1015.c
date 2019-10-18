#include <stdio.h>

struct student
{
	long stuId;
	int quality;
	int ability;
	
};

int main(){
	int n,l,h;
	int sort [100000] ={0};
	scanf("%d %d %d",&n,&l,&h);
	struct student stu[100000];
	int i = 0;
	for(i;i<n;i++){
		scanf("%d%d%d",stu.stuId,stu.quality,stu.ability);
	}
	

	return 0;
}