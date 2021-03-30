// Copyright 2020 GHA Test Team

#include <gtest/gtest.h>
#include <Manager.h>
#include <string>
//#include "../include/Employee.h"
//#include "../include/Manager.h"
#include "../include/Personal.h"

TEST(Employee, IdAutoincrement) {
    ProjectManager p1;
    EXPECT_EQ(1, p1.getId());
    ProjectManager p2;
    EXPECT_EQ(2, p2.getId());
}

TEST(EmployeesHeirs, IdAutoincrement) {
    ProjectManager p3;
    EXPECT_EQ(3, p3.getId());
    SeniorManager p4;
    EXPECT_EQ(4, p4.getId());
}

TEST(DriverTest, MonthSalary) {
    Driver driver(200);
    driver.calc();
    EXPECT_EQ(34000, driver.getPayment());
}

TEST(CleanerTest, MonthSalary) {
    Cleaner cleaner(200);
    cleaner.calc();
    EXPECT_EQ(32000, cleaner.getPayment());
}
