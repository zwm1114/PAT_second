#include <stdio.h>

int main(){
	char date[100];
	char hour[100];
	char time_1[100];
	char time_2[100];
	
	int first = 1;
	int d_i = 0;
	int t = 0; 
	int h,m;
	
	scanf("%s %s %s %s",date,hour,time_1,time_2);
	
	while(date[d_i] != '\0' && hour[d_i] != '\0'){
		if(date[d_i] == hour[d_i]){
			if(first && date[d_i] >= 'A' && date[d_i] <= 'G'){
				first = 0;
				switch(date[d_i] -'A' + 1){
					case 1: printf("MON ");break;
					case 2: printf("TUE ");break;
					case 3: printf("WED ");break;
					case 4: printf("THU ");break;
					case 5: printf("FRI ");break;
					case 6: printf("SAT ");break;
					case 7: printf("SUN ");break;
				}
			}else if(!first && date[d_i] >= '0' && date[d_i] <= '9'){
				h = date[d_i] - '0';
				break; 
			}else if(!first && date[d_i] >= 'A' && date[d_i] <= 'N'){
				h = hour[d_i] - 'A' + 10;
				break;
			}else{
				//do nothing				
			}  
		}
		d_i ++;
	}
	
	while(time_1[t] != '\0' && time_2[t] != '\0'){
		if((time_1[t] == time_2[t]) && (time_1[t] >= 'a' && time_1[t] <= 'z') || (time_1[t] >= 'A' && time_1[t] <= 'Z')){
			break;
		}
		t++;
	}
	printf("%02d:", h); 
	printf("%02d\n", t);
	
	return 0;
}
