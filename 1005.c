#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	//����������ִ洢������arr1��
	int arr1 [200];
	int i = 0; 
	while(i < n){
		scanf("%d",&arr1[i]);
		i++;
	} 
	//��������� 
	int j = 0;
	int k = 0;
	int length = 1;
	int arr2 [500];
	int num;
	while( j < n){
		num = arr1[j];
		while(num != 1){
			if(num%2){
				num = (3*num+1)/2;
			}else{
				num = num/2;
			}
			while(k < length){
				if(num == arr2[k]){
					break;
				}else{
					k++;
				}
			}
			if(k == length){
				arr2[--k] = num;
				length++;
				k = 0;
			}			
		}
		j++;
	}
	//���������е�Ԫ�ؽ��бȽ�
	int p,q;
	for(p = 0;p < n;p++){
		for(q = 0; q < length-1;q ++){
			if(arr1[p] == arr2[q]){
				arr1[p] = 0;
			}
		}
	} 
	//������1����ð������
	int m = 0;
	int z,temp;
	while(m < n){
		for(z = m;z < n;z++){
			if(arr1[z] > arr1[m]){
				temp = arr1[m];
				arr1[m] = arr1[z];
				arr1[z] = temp;
			}
		}
		m++;
	} 
	int v = 0;
	while(v < n){
		printf("%d",arr1[v++]);
		if(arr1[v] != 0){
			printf(" ");
		}else{
			break;
		}
	}
	return 0;
}
