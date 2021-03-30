// Copyright [2021] <Nikita Semaev>

#ifndef INCLUDE_INTERFACES_H_
#define INCLUDE_INTERFACES_H_

class WorkBaseTime {
 public:
    virtual int calsBase(int salary, int wtime) = 0;
    virtual int calsBonus() = 0;
};



#endif  // INCLUDE_INTERFACES_H_
