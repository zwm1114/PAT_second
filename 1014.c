#include <stdio.h>
char HOUR[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N'};

int main() {
	char s1[60];
	char s2[60];
	char s3[60];
	char s4[60];
	int i = 0;
	int j = 0;
	int flag = 0;
	int k;
	int m = 0;
	int n;
	int q = 0;

	scanf("%s",s1);
	scanf("%s",s2);
	scanf("%s",s3);
	scanf("%s",s4);

	/*找第一个相同的字母*/
	while(s1[i] != '\0'){
		/*如果是大写字母则进入循环*/
		if(s1[i] <= 'Z' && s1[i] >= 'A'){
			j = i;
			if(s2[j] == s1[i] && s2[j] <= 'Z' && s2[j] >= 'A'){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			break;
		}
		i++;
	}
	k = i;
	i++;
	/*找第二个相同的大写字母*/
	while(s1[i] != '\0'){
		if(s1[i] <= 'Z' && s1[i] >= 'A'){
			j=i;
			if(s2[j] == s2[i] && s2[j] <= 'Z' && s2[j] >= 'A'){
				flag = 0;
				break;
			}
		}		
		if(flag == 0){
			break;
		}
		i++;
	}
	/*找出第一对相同的英文字母的位置*/
	while(s3[m] != '\0'){
		if((s3[m] >= 'a' && s3[m] <= 'z')|| (s3[m] >= 'A' && s3[m] <= 'Z')){
			n=m;
			if(s4[n] == s3[m]){
				flag = 1;
				break;
			}
		}
		
		if(flag == 1){
			break;
		}
		m++;
	}
	/*输出结果*/
	switch(s1[k]){
		case 'A': printf("MON ");break;
		case 'B': printf("TUE ");break;
		case 'C': printf("WED ");break;
		case 'D': printf("THU ");break;
		case 'E': printf("FRI ");break;
		case 'F': printf("SAT ");break;
		case 'G': printf("SUN ");break;
	}
	while(HOUR[q] != s2[j]){
		q++;
	}
	printf("%d:", q);
	printf("%02d", m);
	return 0;

}

