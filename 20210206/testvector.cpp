//
// Created by 硬汉J on 2021/2/6.
//

#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<int> list1(n);
//    vector<int> list2(n);
    for (int i = 0; i < n; i++) scanf("%d", &list1[i]);
//    for (int i = 0; i < n; i++) scanf("%d", &list1[i]);

    for (const int &k: list1) {
        cout << k << " ";
    }
    cout << endl;
    cout << "wanbi"<< endl;
}