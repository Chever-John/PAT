#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int b, s, g;
    
    // 获取各个 位数上的值 
    b = n/100;
    s = n%100/10;
    g = n%10;
    
    int i;
    // 百位 
    for (i=0; i<b; i++){
        printf("B");
    }
    // 十位 
    for (i=0; i<s; i++){
        printf("S");
    }
    // 个位 
    for (i=0; i<g; i++){
        printf("%d", i+1);
    }
    
    return 0;
} 