// Copyright [2021] <Nikita Semaev>
#include "../include/Employee.h"

#ifndef INCLUDE_MANAGER_H_
#define INCLUDE_MANAGER_H_

class ProjectManager : public Employee {
 public:
    explicit ProjectManager(Position position = Position::ProjectManager) :
                                            Employee(position) {}
    virtual void calc();
    void printInfo();
};

class SeniorManager : public ProjectManager {
 public:
    explicit SeniorManager(Position position = Position::SeniorManager) :
                                            ProjectManager(position) {}
};

#endif  // INCLUDE_MANAGER_H_
