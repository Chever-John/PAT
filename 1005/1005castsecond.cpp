//
// Created by 硬汉J on 2021/2/22.
//
/**
 * 这个是我最喜欢的代码了
 * 非常清爽，内容朴实，就是这样，不错不错， 奈斯！*/
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string code[10] = {
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

int main(){
    int n = 0;
    string s, str;
    cin >> s;
    for (unsigned int i = 0; i < s.size(); i++) {
        n += (s[i] - '0');
    }

    stringstream ss;
    ss << n;
    ss >> str;

    cout << code[str[0] - '0'];
    for (unsigned int i = 1; i < str.size(); i++) {
        cout << " " << code[str[i] - '0'];
    }

    cout << endl;
    return 0;
}