# include <iostream>
# include <cmath>
using namespace std;
double f( double a,  double b,  double c);

int main() {
  double s, t;
  cout << "s = "; cin >> s;
  cout << "t = "; cin >> t;

  cout << (f(1, t + s, s) + f(t, s * t, 1)) / (1 + f(s, 1, t) * f(s, 1, t));
  return 0;
}
double f( double a,  double b,  double c) {
return a* sin(b) + b * sin(a) + pow(c, 2);
}