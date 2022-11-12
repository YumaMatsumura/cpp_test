#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char* argv[])
{
  std::stringstream ss1, ss2;
  std::string str1, str2;
  std::string output1, output2;
  
  str1 = "string";
  int num = 1234;
  ss1 << str1 << num;
  std::cout << "文字列に数値を追加" << std::endl;
  std::cout << ss1.str() << std::endl;
  std::cout << "" << std::endl;
  
  ss1 >> output1;
  std::cout << "文字列の取り出し" << std::endl;
  std::cout << output1 << std::endl;
  std::cout << "" << std::endl;
  
  str2 = "alpha beta gamma";
  ss2 << str2;
  std::cout << "空白文字で分割し、1つずつ取り出す" << std::endl;
  while(ss2 >> output2)
  {
    std::cout << output2 << std::endl;
  }
  std::cout << "" << std::endl;
  
  return 0;
}
