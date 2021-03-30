// Copyright [2021] <Nikita Semaev>
#include "../include/Personal.h"

int Personal::calcBase(int salary, int wtime) {
    return salary * wtime;
}

int Driver::calcBonus() {
    return 2000;
}

void Driver::calc() {
    this->payment = this->calcBase(this->salary, 40 *4)
                    + this->calcBonus();
}

void Cleaner::calc() {
    this->payment = this->calcBase(this->salary, this->worktime);
}
