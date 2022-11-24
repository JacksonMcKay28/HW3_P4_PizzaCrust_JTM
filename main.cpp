#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int R;
  int C;
  double percent;
  
  cin >> R >> C;
  
  percent = ((pow(R-C,2))/(pow(R,2)))*100.0;
  
  cout.precision(10);
  cout << percent;
}