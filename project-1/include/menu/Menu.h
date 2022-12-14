//
// Created by Janir on 12.12.2022.
//
#include <vector>
#include <string>
#include <bits/stdc++.h>
#ifndef PROJECT_1_MENU_H
#define PROJECT_1_MENU_H
using namespace std;

class Menu {
    vector<string> options;
public:
    Menu(vector<string> options){this->options=options;}
    int display(){
        int option;
        cout<<"--- MENU ---"<<endl;
        for(int i = 0; i<options.size(); i++){
            cout<<i<<": "<<options[i]<<endl;
        }
        cout<<options.size()<<": "<<"Exit"<<endl;
        cout<<"Your option: ";
        cin>>option;
        cout<<endl;
        return option;
    }
};


#endif //PROJECT_1_MENU_H
