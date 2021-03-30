// Copyright [2021] <Nikita Semaev>
#include "../include/Employee.h"

void Employee::setWorkTime(uint16_t worktime) {
    this->worktime = worktime;
}

uint16_t Employee::nextId() const {
    static uint16_t new_id = 0;
    new_id += 1;
    return new_id;
}

uint16_t Employee::getId() const {
    return this->id;
}

uint16_t Employee::getPayment() const {
    return this->payment;
}
