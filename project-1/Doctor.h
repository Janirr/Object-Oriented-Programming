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
void addDoctor(std::vector <Doctor> &doctors){
    string d_name; string name; string surname; int pesel;
    cout << endl << "Name: "; cin >> name;
    cout << endl << "Surname: "; cin >> surname;
    d_name = name + " " + surname;
    cout << endl << "PESEL: "; cin >> pesel;
    Doctor d1(d_name,pesel);
    doctors.push_back(d1);
}
void removeDoctor(std::vector <Doctor> &doctors){
    int number;
    for(int i=0;i<doctors.size();i++) {
        cout << i << ": " << doctors[i].name << endl;
    }
    cout << "-----------" <<endl;
    cout << "Remove doctor with number: "; cin >> number;cout<<endl;
    try{
        cout << "Succesfully removed " << doctors[number].name <<endl;
        doctors.erase(doctors.begin()+number);
    }
    catch(int number){
        cout << "You typed: "<<number<<". Nothing happened."<<endl;
    }
}

#endif //PROJECT_1_DOCTOR_H
