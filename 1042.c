#include <stdio.h>
#include <string.h>

/*
  Author:zoe
  Date: 2019/12/21 16:16:13
*/

int main()
{
	char str[1001];
	scanf("%s",str);
	int length = strlen(str);
	int arr[length] = {0};
	int i = 0;	

	while(i < length){
		arr[i] = count(str[i]);
		i ++;
	}
	sort(arr);

	
    return 0;
}

//递归
int count(char *str){
	char *p = &str;
	char *q = strchr(str++,*p);
	int count = 0;
	if(q != Null){
		return count + count(q++);
	}else{
		return count;
	}
}

//找到最大数
int * findMax(int * arr,int n){
	int max = 0;
	int maxIndex = 0;
	int indexList [n] ={-1};
	int j;
	int i =0;
	for(j = 0;j < n;j++){
		if(arr[j] > max){
			maxIndex = j;
			max = arr[j];
		}
	}
	indexList[0] = maxIndex;
	for(j = 0;j < n;j ++){
		if(arr[j] == max){
			indexList[i++] = j;
		}
	}
	return indexList;
}