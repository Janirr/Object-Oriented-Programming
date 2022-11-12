#include <iostream>
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
//void addPatient(vector <Patient> &patient){
//    string p_name; string name; string surname; int p_id; int p_age; string p_disease;
//    cout << "Name: "; cin >> name;
//    cout << "Surname: "; cin >> surname;
//    p_name = name + " " + surname;
//    cout << "ID: "; cin >> p_id;
//    cout << "Age: "; cin >> p_age;
//    cout << "Disease: "; cin >> p_disease;
//    Patient p1(p_name,p_id,p_age,p_disease);
//    patient.push_back(p1);
//}
class Doctor{
public:
    string d_name;
    int d_id;
    vector <Patient> patients;
    //Constructors
    Doctor(string d_name_,int d_id_,vector <Patient> &patients_):d_name{d_name_},d_id{d_id_},patients{patients_}{}
};
//void addDoctor(vector <Doctor> &doctors){
//    string p_name; string name; string surname; int p_id; int p_age; string p_disease;
//    cout << "Name: "; cin >> name;
//    cout << "Surname: "; cin >> surname;
//    p_name = name + " " + surname;
//    cout << "ID: "; cin >> p_id;
//    cout << "Age: "; cin >> p_age;
//    cout << "Disease: "; cin >> p_disease;
//    Patient p1(p_name,p_id,p_age,p_disease);
//    patient.push_back(p1);
//}
class Ward{
    private:
    int capacity;
    string h_name;
    vector <Doctor> doctors;
    public:
    //Constructors
    Ward(int capacity_,string h_name_, vector <Doctor> doctors_):capacity{capacity_},h_name{h_name_},doctors{doctors_}{}
    void info(){
        cout << h_name << endl;
        for(Doctor &d : doctors){
            cout<<"Doctor "<<d.d_name<<" is curing:\n";
            for (Patient &p : d.patients){
                cout<<p.p_name<<endl;
            }
            cout << "\n";
    }
    }
};

int main(){
//    cout << "0: Add patient" << endl;
//    cout << "1: Add doctor" << endl;
//    cout << "2: Add hospital" << endl;
//    cout << "3: Add doctor to patient" << endl;
//    cout << "4: Remove patient" << endl;
//    cout << "5: Remove doctor" << endl;
//    cout << "6: Remove hospital" << endl;
//    cout << "7: Exit" << endl;
//    cin >> choice;
    int choice = 0;
    vector <Patient> P_PICU;
    vector <Patient> P_NICU;
    vector <Patient> P_SICU;
    vector <Doctor> D_PICU;
    vector <Doctor> D_NICU;
    vector <Doctor> D_SICU;
    switch(choice){
        case 0:
        {
            Patient p1("Jakub Januszewski",0,21,"Alzheimer");
            Patient p2("Janusz Jakubewski",1,22,"Down");
            P_SICU.push_back(p1);
            P_SICU.push_back(p2);
            Doctor d1("Katarzyna Zielinska",0,P_SICU);
            Doctor d2("Malgorzata Zielinska",1,P_SICU);
            D_SICU.push_back(d1);
            D_SICU.push_back(d2);
            Ward SICU(140,"Surgical intensive care Unit (SICU)",D_SICU);

            Ward PICU(140,"Pediatric Intensive Care Unit (PICU)",D_PICU);
            Ward NICU(140,"Neonatal  Intensive Care Unit (NICU)",D_NICU);
            SICU.info();
            PICU.info();
            NICU.info();
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
    return 0;
}
