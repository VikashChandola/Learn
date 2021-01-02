#include <iostream>
#include "Student.h"

int main(){
  std::string mota_name = std::string("Shweta");
  Student me("Vikash");
  std::cout << me.get_name() << std::endl;
  me.set_name(mota_name);
  std::cout << me.get_name() << std::endl;
  return 0;
}
