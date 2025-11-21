#include <iostream>
#include <string>


class person{
    int age;

    public:
        double gpa;
        std::string name;
        int say_hi(void);
        void presente_toi(void)
        {
            age = -9;
            std::cout << "Hello my name is "<< name << " age is " << age <<" gpa is "<< gpa<< "\n";
        }
        int presente_la(void)
        {
            return (age);
        }
    };

int person::say_hi(void)
{
    std::cout << "say hiiii\n";
    return 0;
}


class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}


namespace marouane{
    int age;
	std::string name;
}


// using namespace marouane;

int main() {
    //  marouane::age = 100;
    int age;
    // std::string test;
    // std::getline(std::cin, test);
    std::getline(std::cin);
    // std::cout << test +"a" << "\n";
    std::cout << age<< "\n";
}
