//
// Created by Janir on 08.12.2022.
//

#ifndef PROJECT_1_PERSON_H
#define PROJECT_1_PERSON_H
using namespace std;

class Person{
public:
    int pesel;
    string name;
    Person(string name, int pesel){this->name=name;this->pesel=pesel;}
};


#endif //PROJECT_1_PERSON_H
