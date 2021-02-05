#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int len = s.length();
    int count = 1;
    for (int i = 0; i < len; i++){
        if (s[i] == ' ')
            count++;
    }
    char **a = new char* [count]; 
    for (int i = 0; i < count; i++){
        a[i] = new char[len];
    }

    int t = 0;
    for (int i = 0; i < count - 1; i++){
        for (int j = 0; i < len; j++){
            if(s[t] !=  ' '){
                a[i][j] = s[t];
                t++;
            }
            else{
                a[i][j] = '\0';
                t++;
                break;
            }
        }
    }
    int temp = t;
    for (int j = 0; j < len - temp + 1; j++){
        a[count - 1][j] = s[t];
        t++;
    }
    a[count - 1][len - temp + 1] = '\0';

    for (int i = count - 1; i >= 1; i--){
        for (int j = 0; j < len; j++){
            if (a[i][j] != '\0')
                cout << a[i][j];
            else
                break;
        }
        cout << " ";
    }
        for (int j = 0; j < len; j++){
            if (a[0][j] != '\0')
                cout << a[0][j];
        }

        for (int i = 0; i < count; i++){
            delete [] a[i];
        }
        delete [] a;
        return 0;
}