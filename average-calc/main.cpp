#include <iostream>
#include <iterator>
#include <vector>
#include <numeric>

int main() {
  int  n;
  std::cout << "Enter number of grades: ";
  std::cin >> n;
  
  std::vector<double> grades(n);
  std::cout << "Enter " << n << " grades\n";
  for (int i = 0; i < n; ++i) {
    std::cin >> grades[i];
  }
  double sum = 
  std::accumulate(grades.begin(), grades.end(), 0.0);
  double average = sum / n;
  
  std::cout << "Average grade: " << average << std::endl;
  return 0;
}
