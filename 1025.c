/*
    Author:zoe
    Date: 2020/1/2 18:11:57
*/
#include <stdio.h>
#include <string.h>

typedef struct{
	char address[6];
	int data;
	char next[6];
	int * nPoint; //next point
	int * pPoint; //previous point
}LIST;


int main(){
	char add[6];
	int N,K;
	scanf("%s %d %d",add,&N,&K);
	LIST list[N];
	LIST *head;
	LIST *p;
	LIST *temp;
	int i,j;
	//store all data in array
	for(i = 0;i < N; i ++){
		scanf("%s %d %s",list[i].address,&list[i].data,list[i].next);
	}
	
	for(i = 0;i < N; i ++){
		if(strcmp(list[i].address,add) == 0){
			head = &list[i];
		}
		for (j = 0; j < N; j ++)
		{
			if(strcmp(list[j].address,list[i].next) == 0){
				list[i].nPoint = &list[j];
				list[j].pPoint = &list[i];
				break;
			}
		}
	}
	i = 0;
	
	while(i < N/K){
		j = 1;
		while(j < K){
			head=head->nPoint;
			j++;
		}
		temp = head;
		head = head->nPoint;
		while(j --){
			printf("%s %d %s\n",temp->address,temp->data,temp->next);
			temp = temp->pPoint;
		}
		i ++;
	}
	
	if(N%K){
		i = N%K;
		while(i--){
			head = head->nPoint;
			printf("%s %d %s\n",head->address,head->data,head->next);
		}		
	}
	
	return 0;
}

