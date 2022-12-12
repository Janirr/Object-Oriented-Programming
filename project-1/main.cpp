#include <iostream>
#include <vector>
#include "Patient.h"
#include "Doctor.h"
#include "Ward.h"
#include "Menu.h"
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
    //Stomatology
    Patient p5("Marek Mostowiak", 00212321312, "Tooth decay");
    Patient p6("Karol Wojtkowiak", 00212321372, "Pulpitis");
    p_stomatology.push_back(p5);
    p_stomatology.push_back(p6);
    //Doctors
    Doctor d1("Katarzyna Wroclawska",0);
    Doctor d2("Malgorzata Bialostocka",1);
    Doctor d3("Malgorzata Stomatolocka",2);
    d_orthodontia.push_back(d1);
    d_physiotherapy.push_back(d2);
    d_stomatology.push_back(d3);
    //Wards
    //Interface
    int choice = 0;
    vector <string> mainOptions = {"Full information about hospital","Add patient","Add doctor","Remove patient","Remove doctor"};
    Menu main(mainOptions);
    while (choice != mainOptions.size()){
        choice = main.display();
    switch(choice){
        case 0:
        {
            Ward orthodontia(35,"Orthodontia",d_orthodontia,p_orthodontia);
            Ward physiotherapy(26,"Physiotherapy",d_physiotherapy,p_physiotherapy);
            Ward stomatology(24,"Stomatology",d_stomatology,p_stomatology);
            orthodontia.info();
            physiotherapy.info();
            orthodontia.personel();
            physiotherapy.personel();
            stomatology.info();
            stomatology.personel();
            break;
        }
        case 1:
        {
            vector <string> options = {"Add patient to orthodontia","Add patient to stomatology","Add patient to physiotherapy"};
            Menu m1(options);
            int choice_p_ward = m1.display();
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
            vector <string> options = {"Add doctor to orthodontia","Add doctor to stomatology","Add doctor to physiotherapy"};
            Menu m2(options);
            int choice_d_ward = m2.display();
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
            vector <string> options = {"Remove patient from orthodontia","Remove patient from stomatology","Remove patient from physiotherapy"};
            Menu m3(options);
            int choice_p_ward = m3.display();
            switch (choice_p_ward) {
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
            vector <string> options = {"Remove doctor from orthodontia","Remove doctor from stomatology","Remove doctor from physiotherapy"};
            Menu m4(options);
            int choice_d_ward = m4.display();
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
    }}
    return 0;
}
