
void addPatient(std::vector <Patient> &patient){
    string p_name; string name; string surname; int pesel; string p_disease;
    cout << endl << "Name: "; cin >> name;
    cout << endl << "Surname: "; cin >> surname;
    p_name = name + " " + surname;
    cout << endl << "PESEL: "; cin >> pesel;
    cout << endl << "Disease: "; cin >> p_disease;
    std::getline(std::cin,p_disease);
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