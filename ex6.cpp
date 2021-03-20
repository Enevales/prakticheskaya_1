#include <iostream>
using namespace std;
int main()
{
  int a,b,c;

  cout << "Введите длину стороны а: \n";
  cin >> a;

  b = 4*a;
  c = a*a;
  cout << "Периметр квадрата: " << b << endl;
  cout << "Площадь квадрата: " << c << endl;
  
  return 0;
}