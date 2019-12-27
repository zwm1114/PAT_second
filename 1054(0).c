/*
    Author:zoe
    Date: 2019/12/27 16:11:36
*/
#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(){
	int n;
	char sign [SIZE]; //store words 
	char str [SIZE];
	double temp;
	double sum = 0.0;
	int count = 0;
	int isLegal = 1;
	int i,j;
	
	scanf("%d",&n);
	
	for(i = 0;i < n; i++){
		scanf("%s",sign);
		sscanf(sign,"%lf",&temp);//input aaa, store as 0.0
		sprintf(str,"%.2f",temp);
		isLegal = 1;
		if(temp < -1000.0 || temp > 1000.0){
			isLegal = 0;
		}else{
			for(j = 0;j < strlen(sign);j ++){
				if(str[j] != sign [j]){
					isLegal = 0;
					break;
				}
			}
		}
		if(!isLegal){
			printf("ERROR: %s is not a legal number\n",sign);
		}else{
			sum += temp;
			count ++;
		}
		
	}
	if(count>1){                          
        printf("The average of %d numbers is %.2f",count,sum/count);  
    }
    else if(count==1){
        printf("The average of 1 number is %.2f",sum);
    }
    else printf("The average of 0 numbers is Undefined");
	return 0;
}

