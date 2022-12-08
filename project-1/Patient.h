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
void addPatient(std::vector <Patient> &patient){
    string p_name; string name; string surname; int pesel; string p_disease;
    cout << "Name: "; cin >> name;
    cout << "Surname: "; cin >> surname;
    p_name = name + " " + surname;
    cout << "PESEL: "; cin >> pesel;
    cout << "Disease: "; cin >> p_disease;
    Patient p1(p_name,pesel,p_disease);
    patient.push_back(p1);
}
void removePatient(std::vector <Patient> &patients){
    int number;
    for(int i=0;i<patients.size();i++) {
        cout << i << ": " << patients[i].name << endl;
    }
    cout << "-----------" <<endl;
    cout << "Remove patient with number: "; cin >> number;cout<<endl;
    try {
        patients.erase(patients.begin() + number);
    }
    catch(int number){
        cout << "You typed: "<<number<<". Nothing happened."<<endl;
    }
}

#endif //PROJECT_1_PATIENT_H
