#include<iostream>
using namespace std;

int Even_numbers(int a){
    a = a / 2;
    return a;
}

int Odd_number(int b){
    b =(b * 3 + 1) / 2;
    b = b / 2;
    return b;
}

int main(){
    cout << "please input : " << endl;
    int n, count,number;
    count = 0;
    cin >> number;
    n = number;
  for (int i = 0; n == 1; i++){
    if(n % 2 == 0){
        n = Even_numbers(n);
        count++;
    }
    else{
        n = Odd_number(n);
        count++;
    }



    cout << count << endl << n << endl;
    return 0;
  }
}