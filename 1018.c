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

	scanf("%d\n",&n);
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
		getchar(); 
	}

	printf("%d %d %d\n",count_a,peace,total-count_a-peace);
	printf("%d %d %d\n",total-count_a-peace,peace,count_a);
	

	if(max(c_a,max(j_a,b_a)) == c_a){
		if(b_a == c_a){
			printf("B ");
		}else{
			printf("C ");	
		}		
	}else if(max(c_a,max(j_a,b_a)) == j_a){
		if(j_a == b_a){
			printf("B ");
		}else if(j_a == c_a){
			printf("C ");
		}else{
			printf("J ");	
		}
	}else{
		printf("B ");
	}

	if(max(c_b,max(j_b,b_b)) == c_b){
		if(c_b == b_b){
			printf("B");
		}else{
			printf("C");	
		}
	}else if(max(c_b,max(j_b,b_b)) == j_b){
		if(j_b == b_b){
			printf("B");
		}else if(j_b == c_b){
			printf("C");
		}else{
			printf("J");	
		}
	}else{
		printf("B");
	}

	return 0;
}
