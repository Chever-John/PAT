//
// Created by 硬汉J on 2021/2/22.
//
/**
 * 这种解法会存在内存超过的情况，不安全
 * 不是最佳解法！
 * */
#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<string> num;
int main(){
    string str;
    long long sum = 0;

    cin >> str;

    for (char i : str) {
        sum += i - '0';
    }

    while (sum > 0) {
        switch (sum % 10) {
            case 0: num.push("zero");break;
            case 1: num.push("one");break;
            case 2: num.push("two");break;
            case 3: num.push("three");break;
            case 4: num.push("four");break;
            case 5: num.push("five");break;
            case 6: num.push("six");break;
            case 7: num.push("seven");break;
            case 8: num.push("eight");break;
            case 9: num.push("nine");break;
        }
        sum /= 10;
    }

    string s;
    s = num.top();
    num.pop();
    cout << s;
    while (!num.empty()) {
        cout << " ";
        string temp;
        temp = num.top();
        cout << temp;
        num.pop();
    }
    cout << endl;
    return 0;
}