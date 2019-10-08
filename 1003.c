#include <stdio.h>

void ifPass(char s[]);

/*1.必须有且仅有PAT这三个字符 
  2.P在T之前，PT之间必有A 
  3.满足n1（P左边A的字符的个数）* n2（P和T之间的A的个数） = n3（T右边A的个数）
*/

int main(){
	char s[200];
	int n; //输入字符串个数
	
	scanf("%d",&n);
	
	int t = 0;
	
	while(t < n){
		scanf("%s",&s);
		
		//找出P A T的个数和位置
		int i = 0;
		int tagP = 0;
		int countP = 0;
		int tagA = 0;
		int countA = 0;
		int tagT = 0;
		int countT = 0;
		while(s[i] != '\0'){
			if(s[i] != 'P'&& s[i] != 'A' && s[i] != 'T'){
				printf("NO\n");
				goto end;
			}
			if(s[i] == 'P'){
				tagP = i;
				countP ++;
			}
			if(s[i] == 'T'){
				tagT = i;
				countT ++;
			}
			i++; 
		} 
		if(tagP >= tagT || countP != 1 || countT != 1){
			printf("NO\n");
		}else{
			ifPass(s);
		}
	
	end:	
		t++;
	} 
	return 0;
}
	
	void ifPass(char s[]){
		int i = 0;
		int lap = 0;
		int ma = 0;
		int rat = 0;
		while(s[i] != 'P'){
			lap ++;
			i++;
		}
		i++;
		while(s[i] != 'T'){
			ma ++;
			i++;
		}
		i++;
		while(s[i] != '\0'){
			rat ++;
			i++;
		}
		if(ma == 0){
			printf("NO\n");
		}else if(lap * ma == rat){
			printf("YES\n");
		}else{
			printf("NO\n"); 
		} 
	}
	
