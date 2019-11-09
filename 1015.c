#include <stdio.h>
#define SIZE 1000

typedef struct
{
	int stuId;
	int quality;
	int ability;
}student;

void sortArr(student *,int);
void swap(student *,int,int);
void printResult(student *,int);

int main(){
	int n,l,h;
	scanf("%d%d%d",&n,&l,&h);
	getchar();
	student levelOne[SIZE];
	student levelTwo[SIZE];
	student levelThree[SIZE];
	student levelFour[SIZE];
	student t;
	int i = 0;
	int j = 0;
	int k = 0;
	int z = 0;
	int count = 0;
	
	while(n--){
		 scanf("%d%d%d",&t.stuId,&t.quality,&t.ability);
		 if(t.quality >= l && t.ability >= l){
			if(t.quality >= h && t.ability >= h){
			 	//才德全尽
			 	levelOne[i] = t;
			 	count ++;
			 	i ++;
			 }else if(t.quality >= h){
			 	//德胜才
			 	levelTwo[j] = t;
			 	count ++;
			 	j ++;
			 }else if(t.quality >= t.ability){
			 	//才德兼亡，德胜才
				levelThree[k] = t;
			 	count ++;
			 	k ++;		 	
			 }else{
				levelFour[z] = t;
			 	count ++;
			 	z ++;		 	
			}		 	
		 }
		 
		getchar();
	}

	sortArr(levelOne,i);
	sortArr(levelTwo,j);
	sortArr(levelThree,k);
	sortArr(levelFour,z);

	printf("%d\n",count);
	printResult(levelOne,i);
	printResult(levelTwo,j);
	printResult(levelThree,k);
	printResult(levelFour,z);

	return 0;
}

//排序(我也不知道这是什么排序，瞎写的)
void sortArr(student * stu,int n){
	int i = 0;
	int j;
	
	while(i < n){
		j = i;
		while(j < n){
			//按总分排序
			if((stu[j].quality + stu[j].ability)> (stu[i].quality + stu[i].ability)){
				swap(stu,i,j);
			}else if((stu[j].quality + stu[j].ability) == (stu[i].quality + stu[i].ability) && (stu[j].quality > stu[i].quality ) ){
				//总分相等，按德分降序
				swap(stu,i,j);
			}else if((stu[j].quality + stu[j].ability) == (stu[i].quality + stu[i].ability) && (stu[j].quality == stu[i].quality ) && (stu[j].stuId < stu[i].stuId )){
				//总分相等，德分也相等，则按准考证升序
				swap(stu,i,j);
			}
			j ++;
		}
		i ++;
	}
}

//打印
void printResult(student stu[],int n){
	int i;
	for(i = 0;i < n; i ++){
		printf("%d %d %d\n",stu[i].stuId,stu[i].quality,stu[i].ability);
	}
}

void swap(student *stu,int i, int j){
	student temp;
	temp.stuId = stu[j].stuId;
	temp.quality = stu[j].quality;
	temp.ability = stu[j].ability;
	stu[j].stuId = stu[i].stuId;
	stu[j].quality = stu[i].quality;
	stu[j].ability = stu[i].ability;
	stu[i].stuId = temp.stuId;
	stu[i].quality = temp.quality;
	stu[i].ability = temp.ability;	
}
