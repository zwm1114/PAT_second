#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j,pre_prime,count = 0,flag;
    scanf("%d",&n);
    pre_prime = 2;//��ʼ����һ������Ϊ2
    for(i = 3; i <= n; i++){//��ǰ�������ж���3��ʼ
        flag = 0;
        for(j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            //���i����������flag == 0��
            //�ҵ�ǰ��������һ��������Ϊ2
            if(i-pre_prime == 2){
                count++;
            }
            pre_prime = i;//������һ������Ϊ��ǰ����
        }
    }
    printf("%d\n",count);
    return 0;
}
