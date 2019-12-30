/*
    Author:zoe
    Date: 2019/12/30 14:47:20
*/
#include <stdio.h>
#include <stdlib.h>
int cmp(int,int);
int * put(int *,int *,int,int);

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
	put(arr,num,m,n);
	
	return 0;
}

int cmp(int a,int b){
	return b - a;
}

int * put(int * arr,int *num,int m,int n){
	int i = 0;
	if( m == n){
		return 
	}
	if(i % 2){
		while(i < n){
			arr[m][i] = num[j];
			i ++;
		}
	}else{
		while(j < m){
			arr[j] [n] = num[j];
			j ++;
		}
	}
	



}