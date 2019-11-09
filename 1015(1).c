/*
  Author:zoe(tudouzi)
  Date: 2019/11/9 17:49:33
*/
#include <stdio.h>
#include<stdlib.h>
#define SIZE 1000

typedef struct
{
	int stuId;
	int quality;
	int ability;
}student;

int compar(const void *a, const void *b);
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

	qsort(levelOne,i,sizeof(student),compar);
	qsort(levelTwo,j,sizeof(student),compar);
	qsort(levelThree,k,sizeof(student),compar);
	qsort(levelFour,z,sizeof(student),compar);

	printf("%d\n",count);
	printResult(levelOne,i);
	printResult(levelTwo,j);
	printResult(levelThree,k);
	printResult(levelFour,z);

	return 0;
}


//打印
void printResult(student stu[],int n){
	int i;
	for(i = 0;i < n; i ++){
		printf("%d %d %d\n",stu[i].stuId,stu[i].quality,stu[i].ability);
	}
}

//比较算法
int compar(const void *a, const void *b){
	student *va,*vb;;
	int vala,valb;
	va = (student *)a;
	vb = (student *)b;
	vala=va->quality+va->ability;
	valb=vb->quality+vb->ability;
	if(vala != valb){
		return valb - vala;
	}else if(va->quality != vb->quality){
		return vb->quality - va->quality;
	}else{
		return va->stuId - vb->stuId;
	}
} 

