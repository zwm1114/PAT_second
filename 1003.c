#include <stdio.h>

void ifPass(char s[]);

/*1.�������ҽ���PAT�������ַ� 
  2.P��T֮ǰ��PT֮�����A 
  3.����n1��P���A���ַ��ĸ�����* n2��P��T֮���A�ĸ����� = n3��T�ұ�A�ĸ�����
*/

int main(){
	char s[200];
	int n; //�����ַ�������
	
	scanf("%d",&n);
	
	int t = 0;
	
	while(t < n){
		scanf("%s",&s);
		
		//�ҳ�P A T�ĸ�����λ��
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
	
