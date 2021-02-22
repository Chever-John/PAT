//
// Created by 硬汉J on 2021/2/22.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string s;
    string digit[10] = {
            "zero",
            "one",
            "two",
            "three",
            "four",
            "five",
            "six",
            "seven",
            "eight",
            "nine"
    };

    cin >> s;
    int i, total = 0;
    for (i = 0; i < s.size(); ++i) {
        total += s[i] - 48;
    }


    vector<string> num;
    while (true) {
        num.push_back(digit[total % 10]);
        if (total % 10 == total) {
            break;
        }
        total /= 10;
    }

    for (i = num.size() - 1; i >= 0; --i){
        cout << num[i];
        if (i > 0) cout << ' ';
    }

    return 0;
}