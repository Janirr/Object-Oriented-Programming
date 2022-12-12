//
// Created by Janir on 08.12.2022.
//

#ifndef PROJECT_1_WARD_H
#define PROJECT_1_WARD_H
#include "Person.h"
#include "Doctor.h"
#include "Patient.h"
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Ward{
private:
    int capacity;
    std::string h_name;
    vector <Doctor> doctors;
    vector <Patient> patients;
public:
    //Constructors
    Ward(int capacity_,std::string h_name_, vector <Doctor> &doctors_,vector <Patient> &patients_):capacity{capacity_},h_name{h_name_},doctors{doctors_},patients{patients_}{}
    void info(){
        cout << "Ward name: "<< h_name << endl;
        cout << "Doctors: ";
        for(Doctor &d : doctors){
            cout<<d.name<<", ";
        }
        cout << "\nPatients: ";
        for(Patient &p : patients){
            cout<<p.name<<", ";
        }
        cout<<endl<<endl;
    }
    void personel(){
        cout << "Doctors: " << doctors.size()<<endl;
        cout << "Patients: " << patients.size()<<endl;
        cout << h_name << " capacity: " << capacity << endl;
        cout << "Free seats: " << capacity - doctors.size() - patients.size() << endl;
    }
};


#endif //PROJECT_1_WARD_H
