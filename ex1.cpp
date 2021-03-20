#include <iostream>
using namespace std;
int main() {
  setlocale(LC_ALL, "ru");
  
  string vinyl;
  int num;
  float price;
  bool availability;

  cout << "Введите название пластинки: \n";
  cin >> vinyl;
  cout << "Введите количество пластинок: \n";
  cin >> num;
  cout << "Введите цену одной пластинки: \n";
  cin >> price; 
  cout << "Наличие: \n";
  cin >> availability; 
  
  cout << "Название: " << vinyl << " Кол-во: " << num << " Цена: " << price << " Наличие: " << availability << endl;
  
 return 0;
}
