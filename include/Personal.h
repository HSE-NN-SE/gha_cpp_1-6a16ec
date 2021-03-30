// Copyright [2021] <Nikita Semaev>
#include "../include/Employee.h"
#include "../include/Interfaces.h"

#ifndef INCLUDE_PERSONAL_H_
#define INCLUDE_PERSONAL_H_

class Personal : public Employee, protected WorkBaseTime {
 public:
    explicit Personal(Position position, int salary) :
                                    Employee(position),
                                    salary(salary) {
        this->setWorkTime(40 * 4);
    }
    int calcBase(int salary, int wtime);
 protected:
    int salary;
};

class Driver : public Personal {
 public:
    explicit Driver(int salary) :
                                Personal(Position::Driver, salary)
                                {}
    int calcBonus();
    void calc();
    void printInfo();
};


class Cleaner : public Personal {
 public:
    explicit Cleaner(int salary) :
                                Personal(Position::Driver, salary)
                                {}
    int calcBonus();
    void calc();
    void printInfo();
};


#endif  // INCLUDE_PERSONAL_H_
