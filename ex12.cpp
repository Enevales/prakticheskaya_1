#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double p;
    cout << "Вероятность события: \n";
    cin >> p;
    cout <<fixed<<setprecision(3)<<"Общая энтропия: \n" <<(-p*log2(p))-((1-p)*log2(1-p)) <<endl;
    return 0;
}