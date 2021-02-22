//
// Created by 硬汉J on 2021/2/14.
//
#include <iostream>

using namespace std;

int main(){
    int i, j;
    int sum;
    cout << "please input a number:";
    scanf("%d", &sum);
    cout << "Prim num is: \n";
    for (i = 2; i < sum; ++i) {
        for (j = 2; j <= (i / j); ++j) {
            if (i % j == 0) {
                break;
            }
        }
        if (j > (i /j)) {
            cout << i << " is prim num\n";
        }
    }
    return 0;
}