//
// Created by 硬汉J on 2021/2/22.
//

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

typedef  pair<string, string> tLog;
int main(){
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;
    tLog ear = tLog (b, a);
    tLog las = tLog (c, a);
    for (int i = 1; i < n; i++) {
        cin >> a >> b >> c;
        ear = min(ear, tLog(b, a));
        las = max(las, tLog(c, a));
    }
    cout << ear.second << ' ' << las.second << endl;
    return 0;
}