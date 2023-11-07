// Nathen Paniagua
// NathenPaniagua@csu.fullerton.edu
// @CSUFNathen
// Partners: @Nasir-AsimSalmon

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (argc <= 1) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }

  double sum = 0;
  for (int i = 1; i < argc; i++) {
    sum += std::stod(arguments[i]);
  }

  double average = sum / (argc - 1);

  std::cout << "average = " << average << "\n";

  return 0;
}