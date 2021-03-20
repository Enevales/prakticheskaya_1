#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "Введите количество чашек, блюдец и ложек через пробел: \n";
    cin >>a>>b>>c;
    cout << "Общее количество предметов: \n" << a+b+c <<endl;
    return 0;
}