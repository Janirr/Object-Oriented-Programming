
void Ward::info(){
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
void Ward::personel(){
        cout << "Doctors: " << doctors.size()<<endl;
        cout << "Patients: " << patients.size()<<endl;
        cout << h_name << " capacity: " << capacity << endl;
        cout << "Free seats: " << capacity - doctors.size() - patients.size() << endl;
    }