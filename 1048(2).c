/*
 * 1. ��Ҫ��A��B ��Ӧ��λ���м���
 * 2. ����������A��B������Ȳ�һ����λ��0ʹ����һ�£����м���
 * 3. ��������λ��ʼ���
 */
#include <stdio.h>
#include <string.h>

int main() {
    char A[101], B[101];
    int i = 0;
    scanf("%s %s", A, B);
    char num[14] = "0123456789JQK";
    int lenA = strlen(A), lenB = strlen(B);
    int maxlen = lenA > lenB ? lenA : lenB;
    int a, b;
    for(i = 0; i < maxlen; i++) {
        a = lenA + i - maxlen < 0 ? 0 : A[lenA + i - maxlen] - '0';//��Ӧλ������ʱ��Ϊ0 
        b = lenB + i - maxlen < 0 ? 0 : B[lenB + i - maxlen] - '0';
        if((maxlen - i) % 2 == 1) { //����λ 
             printf("%c", num[(a + b) % 13]);
        } else {//ż��λ 
            printf("%d", (b - a < 0 ? b - a + 10 : b - a));
        }
    }
    return 0;
}
