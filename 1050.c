/*
    Author:zoe
    Date: 2019/12/30 14:47:20
*/
#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
int cmp(const void *,const void *);
void formatPut(int * [],int *,int,int,int);
=======
int cmp(int,int);
void formatPut(int *,int *,int,int,int);
>>>>>>> 8b414111b5152d9f86a14b98f2135ad15205ff52

int main(){
	int N;
	int tm,tn;
	int i,j;
	scanf("%d",&N);
	int num[N];
	for(i = 0; i < N; i ++){
		scanf("%d",&num[i]);
	}

	//sort
	qsort(num,N,sizeof(num[0]),cmp);

	int reduce = N;
	int m = N;
	int n = N;
	for(tm = 0; tm < N; tm ++){
		for(tn = 0; tn <= tm; tn ++){
			if(tn * tm == N && (tm - tn < reduce)){
				m = tm;
				n = tn;
				reduce = tm - tn;
			}
		}
	}

	int arr [m] [n];
	formatPut(arr,num,N,m,n);
	
	//print
	for(i = 0;i < m;i ++){
		for(j = 0;j < n;j ++){
			printf("%d ",arr[i][j]);
		}
	}
	
	return 0;
}

int cmp(const void *a,const void *b){
	return *(int *)b - *(int *)a;
}

<<<<<<< HEAD
void formatPut(int *arr[],int *num,int N,int m,int n){
=======
void formatPut(int *arr,int *num,int N,int m,int n){
>>>>>>> 8b414111b5152d9f86a14b98f2135ad15205ff52
	int i = 0;
	int j = 0;
	int k = 0;
	while(i < N){
		//left to right
		while(k < (n - 1)){
//			arr[0][k ++] = num[i ++]; 
			arr[0]++ = num[i ++];
			k ++;
		}
		//top to bottom
		while(j < (m - 1)){
//			arr[j ++][k] = num[i ++];
			arr++ = num[i ++];
			j ++; 
		}
		//right to left
		while(k > 0){
//			arr[j][k --] = num[i ++];
			arr[j]-- = num[i ++];
			k --;
		}
		//bottom to top
		while(j > 0){
//			arr[j --][k] = num[i ++];
			arr -- = num[i ++];
			j --;
		}
	}
}
