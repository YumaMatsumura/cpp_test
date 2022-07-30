#include <iostream> // std::cout, std::endl
#include <iomanip>  // std::setw
#include <limits>   // std::numeric_limits

#define TYPE_SIZE(type)                                      \
  std::cout << "[" << #type << "] " << std::setw(4)          \
            << "sizeof: " << sizeof(type)                    \
            << ", min: " << std::numeric_limits<type>::min() \
            << ", max: " << std::numeric_limits<type>::max() \
            << std::endl;

int main(int argc, char* argv[])
{
  TYPE_SIZE(int);
  TYPE_SIZE(float);
  TYPE_SIZE(double);

  return 0;
}
