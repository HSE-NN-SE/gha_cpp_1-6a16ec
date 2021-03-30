// Copyright [2021] <Nikita Semaev>
#include <iostream>
#include "../include/Personal.h"

int Personal::calcBase(int salary, int wtime) {
    return salary * wtime;
}

int Driver::calcBonus() {
    return 2000;
}

void Driver::calc() {
    this->payment = this->calcBase(this->salary, this->worktime)
                    + this->calcBonus();
}

void Driver::printInfo() {
    std::cout << "Driver (" << this->id << ")" << std::endl;
    std::cout << "Salary: " << this->salary << std::endl;
}

int Cleaner::calcBonus() {
    return 0;
}

void Cleaner::calc() {
    this->payment = this->calcBase(this->salary, this->worktime);
}

void Cleaner::printInfo() {
    std::cout << "Driver (" << this->id << ")" << std::endl;
    std::cout << "Salary: " << this->salary << std::endl;
}
