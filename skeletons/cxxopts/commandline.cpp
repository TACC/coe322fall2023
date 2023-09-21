#include <iostream>
using std::cin, std::cout;

#include <string>
using std::string;
#include <vector>
using std::vector;

#include "cxxopts.hpp"

int main(int argc,char **argv) {

  cxxopts::Options options
    ("cxxopts",
     "Commandline options demo");
  options.add_options()
    ("h,help","usage information")
    ;
  
  auto result = options.parse(argc, argv);
  if (result.count("help")>0) {
    cout << options.help() << '\n';
    return 0;
  }

  cout << "The application starts here\n";
  return 0;
}
