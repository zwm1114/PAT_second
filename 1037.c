#include <stdio.h>

/*
  Author:zoe
  Date: 2019/12/19 20:34:57
*/
struct money
{
	long galleon;
	int sickle;
	int knut;
};
void calculate(struct money,struct money);

int main()
{
	struct money charge;
	struct money pay;
	scanf("%ld.%d.%d",&charge.galleon,&charge.sickle,&charge.knut);
	scanf("%ld.%d.%d",&pay.galleon,&pay.sickle,&pay.knut);
	if(charge.galleon < pay.galleon){
		calculate(charge,pay);
	}else if(charge.galleon <= pay.galleon && charge.sickle < pay.sickle){
		calculate(charge,pay);
	}else if(charge.galleon <= pay.galleon && charge.sickle <= pay.sickle && charge.knut <= pay.knut){
		calculate(charge,pay);
	}else{
		printf("-");
		calculate(pay,charge);
	}
    return 0;
}

void calculate(struct money charge,struct money pay){
	struct money result;
	if(pay.knut >= charge.knut){
		result.knut = pay.knut - charge.knut;
	}else{
		result.knut = pay.knut + 29 - charge.knut;
		pay.sickle --;
	}

	if(pay.sickle >= charge.sickle){
		result.sickle = pay.sickle - charge.sickle;
	}else{
		result.sickle = pay.sickle + 17 - charge.sickle;
		pay.galleon --;
	}
	
	result.galleon = pay.galleon - charge.galleon;
	printf("%ld.%d.%d\n",result.galleon,result.sickle,result.knut);
}
