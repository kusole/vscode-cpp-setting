#pragma once
#include <iostream>
#include <string>

class Car {
  private:
    std::string mName;

  public:
    Car(std::string &&name) : mName(name) {
        std::cout << "A car: " << mName << "has been created!" << std::endl;
    }

    ~Car() {
        std::cout << "A car: " << mName << "has been destoryed!" << std::endl;
    }

    void run(void);
};