#include <stdio.h>

int main()
{
	/* code */
	char sa[1000];
	char sb[1000];
	int a,b;
	int da = 0;
	int db = 0;
	int i = 0;
	int first = 1;
	int temp;

	scanf("%s %d %s %d",&sa,&a,&sb,&b);

	while(sa[i] != '\0'){
  		if(first && sa[i]-'0' == a){
			da =a;
			first = 0;
		}else if(sa[i] -'0' == a){
			da = 10*da + a;
		}
		i++;
	}
	i = 0;
	first = 1;
	while(sb[i] != '\0'){
		if(first && sb[i]-'0' == b){
			db = b;
			first = 0;
		}else if(sb[i]-'0'== b){
			db = 10*db + b;
		}
		i++; 
	}

	printf("%d\n",da+db);


	return 0;
}
