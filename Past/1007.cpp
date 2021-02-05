#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int n,cnt=0,prev=2;
    cin >> n;
    for(int i= 2;i<=n;i++)
    {
        int flag = 1;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            if(i-prev ==2)
            {
                cnt++;
            }
 
            prev= i;
 
        }
 
    }
 
    cout << cnt << endl;
 
    return 0;
}