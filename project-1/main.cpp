#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
class Patient{
public:
    std::string name;
    int id;
    string p_disease;
    //Constructors
    Patient(string name,int id,string p_disease){this->name=name;this->id=id;this->p_disease=p_disease;}
    ~Patient()=default;
};
void addPatient(vector <Patient> &patient){
    string p_name; string name; string surname; int p_age; string p_disease;
    cout << "Name: "; cin >> name;
    cout << "Surname: "; cin >> surname;
    p_name = name + " " + surname;
    cout << "Age: "; cin >> p_age;
    cout << "Disease: "; cin >> p_disease;
    Patient p1(p_name,p_age,p_disease);
    patient.push_back(p1);
}
void removePatient(vector <Patient> &patients){
    int number;
    for(int i=0;i<patients.size();i++) {
        cout << i << ": " << patients[i].name << endl;
    }
    cout << "-----------" <<endl;
    cout << "Remove patient with number: "; cin >> number;cout<<endl;
    try{
        if (number >=0){
            if (number<patients.size()){
                cout << "Succesully removed " << patients[number].name << endl;
                patients.erase(patients.begin()+number);
            }
            else {
                throw (number);
            }
        }
        else {
            throw (number);
        }

    }
    catch(int number){
        cout << "You typed: "<<number<<". Nothing happened."<<endl;
    }
}
class Doctor{
public:
    std::string name;
    int id;
    //Constructors
    Doctor(string name_,int id_):name{name_},id{id_}{}
};
void addDoctor(vector <Doctor> &doctors){
    string d_name; string name; string surname; int p_id; string p_disease;
    cout << "Name: "; cin >> name;
    cout << "Surname: "; cin >> surname;
    d_name = name + " " + surname;
    cout << "ID: "; cin >> p_id;
    Doctor d1(d_name,p_id);
    doctors.push_back(d1);
}
void removeDoctor(vector <Doctor> &doctors){
    int number;
    for(int i=0;i<doctors.size();i++) {
        cout << i << ": " << doctors[i].name << endl;
    }
    cout << "-----------" <<endl;
    cout << "Remove doctor with number: "; cin >> number;cout<<endl;
    try{
        if (number >=0){
            if (number<doctors.size()){
                cout << "Succesully removed " << doctors[number].name <<endl;
                doctors.erase(doctors.begin()+number);
            }
            else {
                throw (number);
            }
        }
        else {
            throw (number);
        }

    }
    catch(int number){
        cout << "You typed: "<<number<<". Nothing happened."<<endl;
    }
}
class Ward{
    private:
    int capacity;
    string h_name;
    vector <Doctor> doctors;
    vector <Patient> patients;
    public:
    //Constructors
    Ward(int capacity_,string h_name_, vector <Doctor> &doctors_,vector <Patient> &patients_):capacity{capacity_},h_name{h_name_},doctors{doctors_},patients{patients_}{}
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
        cout<<"\n";
    }
    void personel(){
        cout << "Doctors: " << doctors.size()<<endl;
        cout << "Patients: " << patients.size()<<endl;
        cout << h_name << " capacity: " << capacity << endl;
        cout << "Free seats: " << capacity - doctors.size() - patients.size() << endl;
    }
};
int main(){
    //Vectors of patients and doctors
    vector <Patient> p_orthodontia;
    vector <Doctor> d_orthodontia;
    vector <Patient> p_physiotherapy;
    vector <Doctor> d_physiotherapy;
    vector <Patient> p_stomatology;
    vector <Doctor> d_stomatology;
    //Orthodontia
    Patient p1("Konrad Manowski",01261102312,"Wisdom tooth extraction");
    Patient p2("Andrzej Mostowiak",01123123121,"Dental caries");
    p_orthodontia.push_back(p1);
    p_orthodontia.push_back(p2);
    //Physiotherapy
    Patient p3("Steve Jobs",00212321322,"Anteversion");
    Patient p4("Elon Musk",00212321322,"Scoliosis");
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
