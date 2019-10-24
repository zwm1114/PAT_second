#include <stdio.h>

int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}

int main(){

	int n;
	char a,b;
	int count_a = 0;
	int peace = 0;
	int c_a = 0;
	int j_a = 0;
	int b_a = 0;
	int c_b = 0;
	int j_b = 0;
	int b_b = 0;
	int total;

	scanf("%d",&n);
	total = n;

	while(n--){
		scanf("%c %c",&a,&b);
		if(a == 'C'){
			switch(b){
				case 'C': peace++;break;
				case 'J': count_a++;c_a++;break;
				case 'B': b_b++;break;
			}

		}else if(a == 'J'){
			switch(b){
				case 'C': c_b++;break;
				case 'J': peace++;break;
				case 'B': count_a++;j_a++;break;
			}
		}else{
			switch(b){
				case 'C': count_a++;b_a++;break;
				case 'J': j_b++;break;
				case 'B': peace++;break;
			}
		}
	}

	printf("%d %d %d\n",count_a,peace,total-count_a);
	printf("%d %d %d\n",total-count_a,peace,count_a);

	if(max(c_a,max(j_a,b_a)) == c_a){
		printf("C ");
	}else if(max(c_a,max(j_a,b_a)) == j_a){
		printf("J ");
	}else{
		printf("B ");
	}

	if(max(c_a,max(j_a,b_a)) == c_b){
		printf("C");
	}else if(max(c_a,max(j_a,b_a)) == j_b){
		printf("J");
	}else{
		printf("B");
	}

	return 0;
}
