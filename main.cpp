#include <iostream>

using namespace std;

int main() {
  int R;
  int C;
  double percent;
  double pi = 3.14;
  
  cin >> R >> C;
  R = R*R;
  C = C*C;
  
  percent = ((pi*R)-(pi*C))/(pi*R);
  percent = (1-percent)*100;
  cout.precision(10);
  cout << percent;
}