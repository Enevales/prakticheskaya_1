# include <iostream>
using namespace std;
int main()
{
  int a, b;
  int sum, mult, sub;
  
  cout << "Введите первое число: \n";
  cin >> a;
  cout << "Введите второе число: \n";
  cin >> b;
  
  sum =  a+b;
  mult = a*b;
  sub = a-b;
  
  cout << "Сумма чисел: " << sum << endl << "Произведение чисел: "<< mult << endl << "Разница: " << sub << endl;
  return 0;
}