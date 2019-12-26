#include <stdio.h>
#include <string.h>

/*
  Author:zoe
  Date: 2019/12/23 22:07:43
*/

int main()
{
	char sa [100];
	char sb [100];
	char add [100] = {'0'};
	int i = 1;
	scanf("%s %s",sa,sb);
	int lena = strlen(sa);
	int lenb = strlen(sb); 
	int la = lena;
	int lb = lenb;
	int temp;
	int length = la < lb? la:lb;

	for(i;i <= length; i++){
		la --;
		lb --;
		if(i%2){
			temp = ((sb[lb]-'0') + (sa[la] - '0'))%13;
			if(temp == 10){
				sb[lb] = 'J';
			}else if(temp == 11){
				sb[lb] = 'Q';
			}else if(temp == 12){
				sb[lb] = 'K';
			}else{
				sb[lb] = (char)(temp + '0');
			}
		}else{
			temp = (sb[lb] - '0') - (sa[la] - '0');
			if(temp < 0){
				sb[lb] = (char)(temp + 10 + '0');
			}else{
				sb[lb] = (char)(temp + '0');
			}
		}
	}

	if(length == lenb){
		add[la] = '\0';
		for(i;i<=lena;i++){
			la --;
			if(i%2){
			temp = (0 + (sa[la] - '0'))%13;
			if(temp == 10){
				add[la] = 'J';
			}else if(temp == 11){
				add[la] = 'Q';
			}else if(temp == 12){
				add[la] = 'K';
			}else{
				add[la] = (char)(temp + '0');
			}
		}else{
			temp = 0 - (sa[la] - '0');
			if(temp < 0){
				add[la] = (char)(temp + 10 + '0');
			}else{
				add[la] = (char)(temp + '0');
			}
		}
		}
		printf("%s",add);
	}

	
	printf("%s",sb);
    return 0;
}

//Ê¾Àý£ºA:1234567 B:368782971 Êä³ö£º3695Q8118
// A:1234567 B:2971 Êä³ö£º1838118 

