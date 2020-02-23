#include <iostream>
#include <cmath>
using namespace std;

bool isPrime_3(int num)
{
    if(num==1)
        return 0;
    if(num==2||num==3)
        return 1;
    if(num%6!=1&&num%6!=5)
        return 0;
    int tmp=sqrt(num);
    for(int i=5;i<=tmp;i+=6)
        if(num%i==0||num%(i+2)==0)
            return 0;
    return 1;
}
int main(){
    int a, b, count;
    int arr[b - a + 1];
    cin >> a >> b;
    for(int i = 0; i < 10000; i++){
        if(count % 10 != 0){
            if(count != b){
                if(isPrime_3(i)){
                    arr[count] = i;
                    count++;
                    cout << arr[count];
                }
            }
            else return 0;
        }
        else
        {
            cout << '\n';
        }
        
    }
    return 0;
}