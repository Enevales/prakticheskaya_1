# include <iostream>
using namespace std;
int main() 
{ 
  string str;
  char a, b, c, d, e;
  cout << "Введите пять букв поочерёдно: ";
  cin >> a >> b >> c >> d >> e;
  str = {a, b, c, d, e};
  cout << str << endl;
  return 0;
}