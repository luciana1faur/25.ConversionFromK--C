#include <iostream>
#include <cmath>
using namespace std;

int main() {

  cout << "Convert temperature in Kelvin to Celsius :" << endl;
  cout << "-----------------------------------------" << endl;
  double gradeK;
  float gradeC;

  cout << "Introduce grade K: ";
  cin >> gradeK;

  gradeC = gradeK - 273.15;

  cout << "Gradele C are: " << gradeC << endl;

  return 0;

}
//℃ =K - 273.15
