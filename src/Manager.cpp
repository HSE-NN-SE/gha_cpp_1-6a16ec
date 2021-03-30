// Copyright [2021] <Nikita Semaev>
#include <iostream>
#include "../include/Manager.h"

void ProjectManager::calc() {}

void ProjectManager::printInfo() {
    std::cout << "ProjectManager (" << this->id << ")" << std::endl;
    std::cout << "Payment: " << this->payment << std::endl;
}
