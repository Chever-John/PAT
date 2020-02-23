//平均耗时18ms，但是是看的很清楚很好理解的一种方法
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//#pragma warning(disable:4996)

int isprime(int n)
{
    int i;
    for (i = 2; i <= (int)sqrt((double)n); i++)
        if (n%i == 0)
            return 0;
    return 1;
}

int main(){
    int i = 2, j = 0, n, m, k = 0;
    scanf("%d%d", &n, &m);

    while (true){
        if (isprime(i)){
            j++;
            if (j >= n && j < m){
                k++;
                if (k % 10 == 0)
                    printf("%d\n", i);
                else
                    printf("%d ", i);
            }
            if (j == m){
                printf("%d\n", i);
                break;
            }
        }
        i++;
    }
    system("pause");
    return 0;
}