#include <stdio.h>

struct people
{
	int isValid;
	char name[6];
	int year;
	int month;
	int day;
};
int main(){
	int n;
	int i,date;
	int j = 0;
	int min = 1829;
	int minIndex = 0;
	int max = 2029;
	int maxIndex = 0;
	int count = 0;
	struct people person[10000];
	scanf("%d\n",&n);

	for(i=0;i<n;i++){
		scanf("%s",person[i].name);
		scanf("%d/%d/%d",&person[i].year,&person[i].month,&person[i].day);
		date = person[i].year+person[i].month+person[i].day;
		if(date<1829||date>2029){
			person[i].isValid = 0;
		}else if(date == 1829 && person[i].month<9){
			person[i].isValid = 0;
		}else{
			person[i].isValid = 1;
		}
	}

	for(i=0;i<n;i++){
		if(person[i].isValid){
			date = person[i].year+person[i].month+person[i].day;
			if(date<=max){
				max = date;
				maxIndex = i;
			}
			if(date>=min){
				min = date;
				minIndex = i;
			}
			count ++;
		}
	}

	printf("%d %s %s",count,person[maxIndex].name,person[minIndex].name);

	return 0;
}
