//
// Created by 硬汉J on 2021/2/9.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    if (sum < 0) cout << "-";
    sum = abs(sum);
    char buffer[20];
    sprintf(buffer, "%d", sum);

    int len = strlen(buffer);

    int m = len / 3;
    int n = len % 3;
    int start = 0;
    if (n==0) {
        cout << buffer[0] << buffer[1] << buffer[2];
        start = 3;
        m--;
    } else if (n == 2) {
        cout << buffer[0] << buffer[1] ;
        start = 2;
    } else if (n == 1) {
        cout << buffer[0];
        start = 1;
    }

    while (m != 0) {
        cout << ",";
        cout << buffer[start] << buffer[start + 1] << buffer[start + 2];
        start += 3;
        m--;
    }
    return  0;
}