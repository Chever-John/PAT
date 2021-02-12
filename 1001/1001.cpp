//
// Created by 硬汉J on 2021/2/9.
//

#include <iostream>
#include <algorithm>
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

int sum(int a, int b){
    int sum = a + b;
    int digits = count(sum);

}
int main(){
    int a = 0;
    int b = 0;
    cin >> a >> b;
//    cout << a << b << endl;
    cout << sum(a, b) << endl;
    return 0;
}