//
// Created by 硬汉J on 2021/2/6.
//
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<int> list1(n);
    vector<int> list2(n);
    for (int i = 0; i < n; i++) scanf("%d", &list1[i]);
    for (int i = 0; i < n; i++) scanf("%d", &list2[i]);

    int pos = 0;
    for (int i = 1; i < n; i++) {
        if (list2[i] < list2[i - 1]) {
            pos = i;
            break;
        }
    }

    bool flag = true;
    for (int i = pos; i < n; i++) {
        if (list1[i] != list2[i]) flag = false;
    }

    if (flag) {
        printf("Insertion Sort\n");
        sort(list2.begin(), list2.begin() + pos + 1);
        for (int i = 0; i < n - 1; ++i) {
            printf("%d ", list2[i]);
        }
        printf("%d\n", list2[n - 1]);
    } else {
        printf("Heap Sort\n");

        sort(list1.begin(), list1.end());

        pos = n - 1;
        while (pos >= 0 && list1[pos] == list2[pos])
            pos--;

        int now = 1;
        list2.insert(list2.begin(), 0);
        pos++;
        while (2 * now + 1 <= pos) {
            int next;
            if (list2[2 * now + 1] > list2[2 * now])
                next = 2 * now + 1;
            else next = 2 * now;

            swap(list2[now], list2[next]);
            now = next;
        }

        swap(list2[now], list2[pos]);

        for (int i = 1; i < n; i++) {
            printf("%d ", list2[i]);
        }
        printf("%d\n", list2[n]);
    }
    return 0;

}