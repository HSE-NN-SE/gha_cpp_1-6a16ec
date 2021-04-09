// Copyright [2021] <Nikita Semaev>
#include <iostream>
#include "../include/Manager.h"

Project::~Project() {
    delete[] this->projects;
}

uint16_t Project::nextId() const {
    static uint16_t new_id = 0;
    new_id += 1;
    return new_id;
}

uint16_t Project::getId() const {
    return this->id;
}

void Project::setId(uint16_t id) {
    this->id = id;
}

uint64_t Project::getBudget() const {
    return this->budget;
}

void Project::setBudget(uint64_t budget) {
    this->budget = budget;
}

void ProjectManager::calc() {}

void ProjectManager::printInfo() {
    std::cout << "ProjectManager (" << this->id << ")" << std::endl;
    std::cout << "Payment: " << this->payment << std::endl;
}
