#include <iostream>
#include <vector>
#include <string>
#include "../../include/hospital/Doctor.h"
using namespace std;
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
        if ((number >= 0) && (number <doctors.size())){
          doctors.erase(doctors.begin()+number);
          cout << "Succesfully removed " << doctors[number].name <<endl;
        } else {
        throw number;
        }
    }
    catch(int number){
        cerr << "You typed " << number << ". Nothing happened.\n";
    }
}
