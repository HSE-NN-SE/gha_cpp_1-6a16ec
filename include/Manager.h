// Copyright [2021] <Nikita Semaev>
#include "../include/Employee.h"
#include "../include/Interfaces.h"

#ifndef INCLUDE_MANAGER_H_
#define INCLUDE_MANAGER_H_

class Project {
 public:
    Project() :
                id(this->nextId())
                , budget(0)
                {}
    uint16_t getId() const;
    void setId(uint16_t id);
    uint64_t getBudget() const;
    void setBudget(uint64_t budget);

 private:
    uint16_t id;
    uint64_t budget;
    uint16_t nextId() const;
};

class ProjectManager : public Employee, ProjectBudget {
 public:
    explicit ProjectManager(Position position = Position::ProjectManager) :
                                                    Employee(position)
                                                    , projects(new Project[1])
                                                    {}
    ~ProjectManager();
    virtual void calc();
    void printInfo();
    int calcBudgetPart(float part, int budget) {return 0;}
    int calcProAdditions() {return 0;}
 private:
    Project *projects;
};

class SeniorManager : public ProjectManager {
 public:
    explicit SeniorManager(Position position = Position::SeniorManager) :
                                            ProjectManager(position) {}
};

#endif  // INCLUDE_MANAGER_H_
