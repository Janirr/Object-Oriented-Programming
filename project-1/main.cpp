#include <iostream>
#include <vector>
#include "Patient.h"
#include "Doctor.h"
#include "Ward.h"
using namespace std;


int main(){
    //Vectors of patients and doctors
    vector <Patient> p_orthodontia;
    vector <Doctor> d_orthodontia;
    vector <Patient> p_physiotherapy;
    vector <Doctor> d_physiotherapy;
    vector <Patient> p_stomatology;
    vector <Doctor> d_stomatology;
    //Orthodontia
    Patient p1("Konrad Manowski", 01261102312, "Wisdom tooth extraction");
    Patient p2("Andrzej Mostowiak", 01123123121, "Dental caries");
    p_orthodontia.push_back(p1);
    p_orthodontia.push_back(p2);
    //Physiotherapy
    Patient p3("Steve Jobs", 00212321322, "Anteversion");
    Patient p4("Elon Musk", 00212321322, "Scoliosis");
    p_physiotherapy.push_back(p3);
    p_physiotherapy.push_back(p4);
    //Doctors
    Doctor d1("Katarzyna Wroclawska",0);
    Doctor d2("Malgorzata Bialostocka",1);
    d_orthodontia.push_back(d1);
    d_physiotherapy.push_back(d2);
    //Wards
    //Interface
    int choice = 0;
    while (choice != 5){
        cout << "0: Full information about hospital" << endl;
        cout << "1: Add patient" << endl;
        cout << "2: Add doctor" << endl;
        cout << "3: Remove patient" << endl;
        cout << "4: Remove doctor" << endl;
        cout << "5: Exit" << endl;
        cin >> choice;
    switch(choice){
        case 0:
        {
            Ward orthodontia(35,"Orthodontia",d_orthodontia,p_orthodontia);
            Ward physiotherapy(26,"Physiotherapy",d_physiotherapy,p_physiotherapy);
            Ward stomatology(24,"Stomatology",d_stomatology,p_stomatology);
            orthodontia.info();
            cout << endl;
            physiotherapy.info();
            cout << endl;
            orthodontia.personel();
            cout << endl;
            physiotherapy.personel();
            cout << endl;
            break;
        }
        case 1:
        {
            cout << "0: Add patient to orthodontia" << endl;
            cout << "1: Add patient to stomatology" << endl;
            cout << "2: Add patient to physiotherapy" << endl;
            cout << "3: Exit" << endl;
            int choice_p_ward;
            cin >> choice_p_ward;
            switch (choice_p_ward) {
                case 0:
                    addPatient(p_orthodontia);
                    break;
                case 1:
                    addPatient(p_stomatology);
                    break;
                case 2:
                    addPatient(p_physiotherapy);
                    break;
                default:
                    break;
            }
            break;
        }
        case 2:
        {
            cout << "0: Add doctor to orthodontia" << endl;
            cout << "1: Add doctor to stomatology" << endl;
            cout << "2: Add doctor to physiotherapy" << endl;
            cout << "3: Exit" << endl;
            int choice_d_ward;
            cin >> choice_d_ward;
            switch (choice_d_ward) {
                case 0:
                    addDoctor(d_orthodontia);
                    break;
                case 1:
                    addDoctor(d_stomatology);
                    break;
                case 2:
                    addDoctor(d_physiotherapy);
                    break;
                default:
                    break;
            }
            break;
        }
        case 3:
        {
            cout << "0: Remove patient from orthodontia" << endl;
            cout << "1: Remove patient from stomatology" << endl;
            cout << "2: Remove patient from physiotherapy" << endl;
            cout << "3: Exit" << endl;
            int choice_d_ward;
            cin >> choice_d_ward;
            switch (choice_d_ward) {
                case 0:
                    removePatient(p_orthodontia);
                    break;
                case 1:
                    removePatient(p_stomatology);
                    break;
                case 2:
                    removePatient(p_physiotherapy);
                    break;
                default:
                    break;
            }
            break;
        }
        case 4:
        {
            cout << "0: Remove doctor from orthodontia" << endl;
            cout << "1: Remove doctor from stomatology" << endl;
            cout << "2: Remove doctor from physiotherapy" << endl;
            cout << "3: Exit" << endl;
            int choice_d_ward;
            cin >> choice_d_ward;
            switch (choice_d_ward) {
                case 0:
                    removeDoctor(d_orthodontia);
                    break;
                case 1:
                    removeDoctor(d_stomatology);
                    break;
                case 2:
                    removeDoctor(d_physiotherapy);
                    break;
                default:
                    break;
            }
        }
        default:
        {
            break;
        }
    }
    }
    return 0;
}
