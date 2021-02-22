//
// Created by 硬汉J on 2021/2/22.
//

#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

string numEnglish[] = {
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

int String2Int(char A){
    int a;
    stringstream ss;
    ss << A;
    ss >> a;
    return a;
}

string Int2String(int A){
    string a;
    stringstream ss;
    ss << A;
    ss >> a;
    return a;
}

int main(){
    string N;
    cin >> N;
    int sum = 0;
    for (char i : N) {
        sum += String2Int(i);
    }

    N = Int2String(sum);
    for (int i = 0; i < N.size(); i++) {
        cout << numEnglish[String2Int(N[i])];
        if (i == N.size() - 1) {
        } else {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}