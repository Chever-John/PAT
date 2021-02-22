//
// Created by 硬汉J on 2021/2/22.
//

#include <iostream>
#include <string>

using namespace std;
static string digToEng[10] = {
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
    string num;
    cin >> num;

    int sum = 0;
    int result[1000];

    for (char i : num) {
//        int digit = i - 48;
        sum += i - 48;
    }

    if (sum == 0) {
        cout << "zero" << endl;
        return 0;
    }

    int i = 0;
    while (sum > 0) {
        int current = sum % 10;
        sum /= 10;
        result[i++] = current;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << digToEng[result[j]];
        if (j != 0){
            cout << " ";
        }
    }

    return 0;


}