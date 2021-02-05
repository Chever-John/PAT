#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    cout << str << endl;
    int str_length = str.length;
    str = reverse(str.begin, str.end);
    for (int i = 0; i < str_length; i++){
         
        /* code */
    }
    
    cout << str.length() << endl;
}