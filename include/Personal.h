// Copyright [2021] <Nikita Semaev>
#include "../include/Employee.h"
#include "../include/Interfaces.h"

#ifndef INCLUDE_PERSONAL_H_
#define INCLUDE_PERSONAL_H_

class Personal : public Employee, WorkBaseTime {
 public:
    explicit Personal(Position position, int salary) :
                                    Employee(position),
                                    salary(salary)
                                    {}
//    int calcBase(int salary, int wtime);
    virtual int calcBase(int salary, int wtime);
    virtual int calcBonus();
//    void calc () {}
//    virtual int calcBase(int salary, int wtime) { return 0; }
// protected:
    int salary;
};

class Driver : public Personal {
 public:
    explicit Driver(int salary) : Personal(Position::Driver, salary) {}
    int calcBase(int, int) override {
        return 1;
    }
    int calcBonus() override {
        return 2;
    }
//    void calc();
};

class Cleaner : public Personal {
 public:
    explicit Cleaner(int salary) : Personal(Position::Cleaner, salary) {}
    void calc();
};



#endif  // INCLUDE_PERSONAL_H_
