/*
 * ��θ�Ч���ж��������У�
 *  1. ��������
 *  2. �������飬�ж� �ȵ�ǰ��֪����������� ���������� �Ƿ�Ϊ��������
 */
#include <stdio.h>
#include <stdlib.h>

int cmp(const void * a, const void * b) {
    return *(long int *)a - *(long int *)b;//����
}
int main() {
    int N, max = 0;//����������, ����������ຬ�е����ָ��� 
    long int p;//����p 
    int i,j;
    scanf("%d %ld", &N, &p);
    long int arr[N];
    for (i = 0; i < N; i++) {
        scanf("%ld", &arr[i]);
    } 
    qsort(arr, N, sizeof(long int),cmp);//��������
    for (i = 0; i + max <= N; i++) {// ����δȡ��
        for (j = i + max; j < N; j++) {// ���������������ָ������Ƿ�Ϊ��������
            if(arr[j] <= (arr[i] * p)) {
                max = j - i + 1;
            } else {//������ǣ�����Ԫ�ظ��󣬸��������ǣ�����ѭ������
                break;
            }
        } 
    }
    printf("%d\n", max);
    return 0;
}
