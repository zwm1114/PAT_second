#include <stdio.h>
#include <string.h>

int main(){
	char name[200];
	char id[200];
	int score;
	int n;
	int mName[200],nName[200],mId[200],nId[200],mScore,nScore;
	
	scanf("%d",&n);
	scanf("%s",&name);
	scanf("%s",&id);
	scanf("%d",&score);
	strcpy(mName,name);
	strcpy(nName,name);
	strcpy(mId,id);
	strcpy(nId,id);
	mScore = score;
	nScore = score;
	n--;
	
	while(n--){
	scanf("%s",&name);
	scanf("%s",&id);
	scanf("%d",&score);	
	if(score > mScore){
		mScore = score;
		strcpy(mName,name);
		strcpy(mId,id);
	}else if(score<nScore){
		nScore = score;
		strcpy(nName,name);
		strcpy(nId,id);
	}				
	}
	printf("%s %s\n",mName,mId);
	printf("%s %s\n",nName,nId);
	
	return 0;
} 
