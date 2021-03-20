#include <iostream>
using namespace std;
int main()
{
  int n, m;
  double res;

  cout << "Введите число клеток: \n";
  cin >> n;
  cout << "Введите число зайцев: \n";
  cin >> m;

  res = (m + n - 1) / n;
  cout << res << endl;
  
  return 0;
}
 