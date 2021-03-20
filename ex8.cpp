#include <iostream>
using namespace std;
int main() {
    int N,K;
    
    cout << "Введите число школьников и яблок через пробел: \n";
    cin >> N >> K;
    cout <<K/N <<"\n"<< K%N << endl;
    return 0;
}