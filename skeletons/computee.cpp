#include <iostream>

float power(float fraction, int k) {
  if (k <= 0) return 1;
  return fraction * power(fraction, k - 1);
}

int main() {
  for (int k=0; k<10; k++) {
    float n = power(10, k);
    float result = 1.0 + (1.0 / n);
    result = power(result, n);
    std::cout << "k=" << k << ", n=" << n << "; resulting e approximation: " << result << "\n";
  }
  return 0;
}
