#include <iostream>
#include <utility>
#include <vector>
using namespace std;
class Patient{
public:
    string p_name;
    int p_id;
    int p_age;
    string p_disease;
    //Constructors
    Patient(string p_name,int p_id,int p_age,string p_disease){this->p_name=p_name;this->p_id=p_id;this->p_age=p_age;this->p_disease=p_disease;}
    ~Patient()=default;
    void add(){};

};
void addPatient(vector <Patient> &patient){
    string p_name; string name; string surname; int p_id; int p_age; string p_disease;
    cout << "Name: "; cin >> name;
    cout << "Surname: "; cin >> surname;
    p_name = name + " " + surname;
    cout << "ID: "; cin >> p_id;
    cout << "Age: "; cin >> p_age;
    cout << "Disease: "; cin >> p_disease;
    Patient p1(p_name,p_id,p_age,p_disease);
    patient.push_back(p1);
}
class Doctor{
public:
    string d_name;
    int d_id;
    vector <Patient> patients;
    //Constructors
    Doctor(string d_name_,int d_id_,vector <Patient> &patients_):d_name{d_name_},d_id{d_id_},patients{patients_}{}
};
class Ward{
    private:
    int capacity;
    string h_name;
    Doctor &doctor;
    public:
    //Constructors
    Ward(int capacity_,string h_name_, Doctor &doctor_):capacity{capacity_},h_name{h_name_},doctor{doctor_}{}
    //void patient_info() const{cout<<doctor.patients.p_name<<" is sick for "<<doctor.patients.p_disease<<" and is being cured by "<<doctor.d_name;}
    void initializevector(){for(Patient &p : doctor.patients) {cout<<"\n Doctor: " << doctor.d_name <<  " is curing: "<<p.p_name<< " who is sick for: " <<p.p_disease<<endl;}}
};

int main(){
    cout << "0: Add patient" << endl;
    cout << "1: Add doctor" << endl;
    cout << "2: Add hospital" << endl;
    cout << "3: Add doctor to patient" << endl;
    cout << "4: Remove patient" << endl;
    cout << "5: Remove doctor" << endl;
    cout << "6: Remove hospital" << endl;
    cout << "7: Exit" << endl;
    int choice;
    cin >> choice;
    vector <Patient> patients;
    switch(choice){
        case 0:
        {
            addPatient(patients);
            addPatient(patients);
            Doctor d1("Katarzyna Zielinska",1,patients);
            Ward h1(140,"Otolaryngology",d1);
            h1.initializevector();
            break;
        }
        case 1:
        {
            int x = 1;
            break;
        }
        default:
        {
            int b = 0;
            break;
        }
    }
//    Patient p1("Jakub Januszewski",1,21,"Alzheimer");
//    Patient p2("Adam Zielinski",2,18,"Flu");
//    Patient p3("Marek Stachowiak",3,34,"Allergy");
//    Patient p4("Jacek Papszun",4,64,"Conjuctivitis");
//    Patient p5("Marian Nowy",5,37,"Diarrhea");
//    Doctor d1("Katarzyna Zielinska",1,p1);
//    Ward h1(140,"Otolaryngology",d1);
//    h1.patient_info();
    return 0;
}
