#include <iostream>
#include <string>
#include "car.hpp"

int main(){
    std::cout << "hello cpp!" << std::endl;    

    Car *myCar = new Car("OldDriver");
    myCar->run();
    delete myCar;
    system("pause");
    
    return 0;
}