#include <stdio.h>

struct student
{
	long stuId;
	int quality;
	int ability;
	
};

struct sort
{
	int flag;
	int sum;
}

int main(){
	int n,l,h;
	struct sort res[100000];
	scanf("%d %d %d",&n,&l,&h);
	struct student stu[100000];
	int k ;
	int count = 0;
	int fSum = 0;
	for(i;i<n;i++){
		scanf("%d%d%d",stu.stuId,stu.quality,stu.ability);
	}
	
	k = n;
	while(n--){
		if(stu[n].quality >= l && stu[n].ability >= l){
			if(stu[n].quality >= h && stu[n].ability >= h ){
				res[n].flag = 1;
				res[n].sum = stu[n].quality + stu[n].ability;
				break;
			}else if(stu[n].quality >= h || stu[n].ability >= h ){
				res[n].flag = 2;
				res[n].sum = stu[n].quality + stu[n].ability;
				break;
			}else if(stu[n].quality < h && stu[n].ability < h){
				res[n].flag = 3;
				res[n].sum = stu[n].quality + stu[n].ability;
				break;
			}else{
				//do nothing
			}
			
			count ++;
		} 
	}
	
	printf("%d\n",count);

	while(i < k){
		while(res[j].flag != 1){
			j++;
		}
		if(res[j].sum > fSum){
			res[j].flag = i;
			fSum = res[j].sum;
		}
		
		i ++;
	}
	
	

	return 0;
}
