//
// Created by 硬汉J on 2021/2/9.
//

#include <iostream>
#include <cstdio>

using namespace std;
int main(){
    char buffer[50];
    int a = 8;
    int b = 324;
    int n;
    sprintf(buffer, "%d", a + b);
//    printf ("[%s] is a string %d chars long\n",buffer,n);
    cout << buffer[2] << endl;
    return 0;
}