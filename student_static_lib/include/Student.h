#include <string>

class Student {
  public:
    std::string name;
    Student(std::string student_name) : name(student_name) {};

    std::string get_name(){
      return this->name;
    }

    void set_name(std::string&);
};
