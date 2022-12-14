//
// Created by Janir on 08.12.2022.
//
#include "Person.h"
#ifndef PROJECT_1_DOCTOR_H
#define PROJECT_1_DOCTOR_H
using namespace std;

class Doctor : public Person{
public:
    //Constructors
    Doctor(std::string name,int pesel) : Person(name,pesel){};
};


#endif //PROJECT_1_DOCTOR_H
