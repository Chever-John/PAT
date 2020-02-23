#include<iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int b, s, g;

    b = n/100;
    s = n%100/10;
    g = n%10;

    int i;
    for ( i = 0; i < b; i++){
        cout << "B" ;
        /* code */
    }
    for ( i = 0; i < s; i++){
        cout << "S" ;
        /* code */
    }
    for ( i = 0; i < g; i++){
        cout << i + 1;
        /* code */
    }
    
    return 0;
    
}