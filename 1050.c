/*
    Author:zoe
    Date: 2019/12/30 14:47:20
*/
#include <stdio.h>
#include <stdlib.h>
int cmp(int,int);
void formatPut(int *,int *,int,int,int);

int main(){
	int N;
	int tm,tn;
	int i;
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
	put(arr,num,N,m,n);
	
	return 0;
}

int cmp(int a,int b){
	return b - a;
}

void formatPut(int arr[][],int *num,int N,int m,int n){
	int i = 0;
	int j = 0;
	int k = 0;
	while(i < N){
		//left to right
		while(k < (n - 1)){
			arr[0][k ++] = num[i ++]; 
		}
		//top to bottom
		while(j < (m - 1)){
			arr[j ++][k] = num[i ++];
		}
		//right to left
		while(k > 0){
			arr[j][k --] = num[i ++];
		}
		//bottom to top
		while(j > 0){
			arr[j --][k] = num[i ++];
		}
	}
}
