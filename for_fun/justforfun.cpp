//
// Created by 硬汉J on 2021/2/9.
//

#include <iostream>
using namespace std;

int count(int num_to_counted){
    int count = 0;
    while (num_to_counted != 0) {
        num_to_counted = num_to_counted / 10;
        count++;
    }
    if (num_to_counted % 3 == 0) {
        count--;
    }
    return count;
}
int main(){
    int a = 999999;
    cout << count(a) << endl;
    return 0;
}