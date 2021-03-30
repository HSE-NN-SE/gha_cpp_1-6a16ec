// Copyright [2021] <Nikita Semaev>
#include <string>

#ifndef INCLUDE_EMPLOYEE_H_
#define INCLUDE_EMPLOYEE_H_

enum class Position {
    ProjectManager, SeniorManager,
    Engineer, Programmer, Tester,
    Driver, Cleaner
};

class Employee {
 public:
    explicit Employee(Position position) :
                                            id(this->nextId())
                                            , position(position)
                                            {}
    uint16_t getId() const;
    uint16_t getPayment() const;
 protected:
    uint16_t id;
    std::string name;
    Position position;
    uint16_t worktime;
    uint16_t payment;

    void setWorkTime(uint16_t worktime);
    virtual void calc() = 0;
    virtual void printInfo() = 0;
 private:
    uint16_t nextId() const;
};



#endif  // INCLUDE_EMPLOYEE_H_
