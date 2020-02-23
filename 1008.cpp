#include<iostream>
using namespace std;

void Inversion(int arr[], int n){
    int b[n];
    for (int i = 0; i < n; i++){
        b[n - i - 1] = arr[i];
        /* code */
    }
    for (int i = 0; i < n; i++){
        arr[i] = b[i];
        /* code */
    }
    
}

int main(){
    int n,m;
    cin >> n >> m;
    int a[n], b[m], c[n-m];
    
    for (int i = 0; i < n; i++){
        cin >> a[i];
        /* code */
    }

    Inversion( a, n);
    
    for (int i = 0; i < m; i++){
        b[i] = a[i];
        /* code */
    }

    Inversion( b, m);

    for (int i = 0; i < m; i++){
        a[i] = b[i];
        /* code */
    }

    for (int i = m; i < n - 1; i++){
        c[i] = a[i]; 
        /* code */
    }

    Inversion( c, n - m);

    for (int i = m; i < n - 1; i++){
        a[i] = c[i]; 
        /* code */
    }

    for (int i = 0; i < n; i++){
        cout << a[i];
        /* code */
    }
    
    //是存在问题的，问题从第29行开始
}