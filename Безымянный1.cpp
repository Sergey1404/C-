/*********************************************
 * Автор: Тупиленко С.Д.                     *
 * Дата: 15.10.2021                          *
 * Название: Использование массивов и функций*
 ********************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
  setlocale (LC_ALL, "rus");
  int E, S, C;
  cout << " "Введите количество элементов: ";
  cin >> E; cin >> S; cin >> C;
  double ke = 0, ks = 0, kc = 0;
  double e = 0, s = 0, c = 0, e1 = 1, s1 = 1, c1 = 1;
  double crE = 0, crS = 0, crC = 0;
  int *arrE = new int[E];
  int *arrS = new int[S];
  int *arrC = new int[C];
  cout << "Введите элементы массива E " << endl;
  for (int n = 0; n < E; n++) {
      cin >> arrE[n];
      if (arrE[n] > 0) {
          ++ke;
      }
  }
  
    for (int n1 = 0; n1 < E; n1++) {
    if (0 < arrE[n1]) {
      e = arrE[n1];
      e1 *= e;
    }
  }
  
  crE = pow(e1, 1 / ke);

  cout << "Введите элементы массива S " << endl;
  for (int m = 0; m < S; m++) {
      cin >> arrS[m];
      if (arrS[m] > 0) {
          ++ks;
      }
  }

  for (int m1 = 0; m1 < S; m1++) {
    if (0 < arrS[m1]) {
      s = arrS[m1];
      s1 *= s;
    }
  }
  
  crS = pow(s1, 1 / ks);
  
  cout << "Введите элементы массива C " << endl;
  for (int k = 0; k < C; k++) {
      cin >> arrC[k];
      if (arrC[k] > 0) {
          ++kc;
      }
  }
  
  for (int k1 = 0; k1 < C; k1++) {
    if (0 < arrC[k1]) {
      c = arrC[k1];
      c1 *= c;
    }
  }
  
  crC = pow(c1, 1 / kc);
  
  cout << "Среднее геометрическое массива E = " << crE << " массива S = " << crS <<  " массива C = " << crC;
  return 0;
}
