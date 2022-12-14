//
// Created by Janir on 08.12.2022.
//
#include "Person.h"
#ifndef PROJECT_1_PATIENT_H
#define PROJECT_1_PATIENT_H
using namespace std;

class Patient : public Person{
public:
    string p_disease;
    //Constructors
    Patient(std::string name,int pesel,string p_disease) : Person(name, pesel) {this->p_disease=p_disease;}
    ~Patient()=default;
};


#endif //PROJECT_1_PATIENT_H
