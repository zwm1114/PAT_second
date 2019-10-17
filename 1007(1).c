#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j,pre_prime,count = 0,flag;
    scanf("%d",&n);
    pre_prime = 2;//初始化上一个素数为2
    for(i = 3; i <= n; i++){//当前素数的判定从3开始
        flag = 0;
        for(j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            //如果i是素数（即flag == 0）
            //且当前素数与上一个素数差为2
            if(i-pre_prime == 2){
                count++;
            }
            pre_prime = i;//更新上一个素数为当前素数
        }
    }
    printf("%d\n",count);
    return 0;
}
