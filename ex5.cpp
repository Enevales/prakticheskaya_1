#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;

    if (n<=-1) for(int i=1; i>=n; i--) sum+= i; 
    else sum = (1+n) * n / 2; 

    cout << sum;
    return 0;
}