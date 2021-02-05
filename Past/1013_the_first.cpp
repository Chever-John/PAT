#include <iostream>
#include <vector>
#include <cmath>

#define MAXPRIME 105000

using namespace std;

vector<int> primes;

bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(__int64 i = 2; i < sqrt(1.0 * n); ++i){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void getALLPrime(){
    for(int i = 1;i < MAXPRIME; ++i){
        if(isPrime(i)){
            primes.push_back(i);
        }
    }
}

int main(void){
    int m, n;
    cin >> m >> n;
    getALLPrime();
    for(int i = 1; i <= n - m; ++i){
        if(i % 10 == 0){
            cout << primes[i + m - 2] << endl;
        }
        else{
            cout << primes[i + m - 2] << " ";
        }
    }
    cout << primes[n - 1];
    return 0;

}