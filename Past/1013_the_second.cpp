//速度最快的一种解法，平均耗时为8ms
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable:4996)

int isPrime_3(int num)
{
    if(num==1)
        return 0;
    if(num==2||num==3)
        return 1;
    if(num%6!=1&&num%6!=5)
        return 0;
    int tmp=sqrt(num);
    for(int i=5;i<=tmp;i+=6)
        if(num%i==0||num%(i+2)==0)
            return 0;
    return 1;
}

int main(){
    int i = 2, j = 0, n, m, k = 0; 
    scanf("%d%d", &n, &m);

    while(true){
        if(isPrime_3(i)){
            j++;
            if(j >= n && j < m){
                k++;
                if(k % 10 == 0)
                    printf("%d\n", i);
                else 
                    printf("%d ", i);
            }
            if(j == m){
                printf("%d\n" ,i);
                break;
            }
        }
        i++;
    }
    system("pause");
    return 0;
}