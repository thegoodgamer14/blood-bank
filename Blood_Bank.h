#ifndef BLOOD_BANK_DONOR_H
#define BLOOD_BANK_DONOR_H

#include<iostream>
#include<iomanip>
#include<string>
#include<windows.h>
#include "Donor_Card.h"

using namespace std;

class BloodBank {
    protected:
        Donorcard dc[100];
    public:
        void bloodBank(string s);
};

void BloodBank::bloodBank(string s) {
    static int i = 0;
    if (s == "Add Donor") {
        string n;
        dc[i].setDonorID();

        cout<<"Enter name: ";
        getchar();
        getline(cin>>n,n);
        dc[i].setOwnerName(n);

        cout<<"Enter donation date: ";
        cin>>n;
        dc[i].setDonationDate(n);

        cout<<"Enter Aadhar number: ";
        cin>>n;
        dc[i].setAadhar(n);

        cout<<"Enter Blood Group: ";
        cin>>n;
        dc[i].setBloodGroup(n);
        i++;

        cout<<"Donor details added successfully!";
        system("cls");
    }

    else if (s == "Display Donor List") {
        system("cls");
        int j;
        for (j=0; j<i; j++){
            cout<<"Donor ID: "<<dc[j].getDonorID()<<endl;
            cout<<"Donor name: "<<dc[j].getOwnerName()<<endl;
            cout<<"Donation date: "<<dc[j].getDonationDate()<<endl;
            cout<<"Aadhar number: "<<dc[j].getAadhar()<<endl;
            cout<<"Blood group: "<<dc[j].getBloodGroup()<<endl<<endl;
            system("pause");
            system("cls");
        }
        if(j<1)
            cout<<"Directory is empty!";
    }

    else if (s == "Search for Donor") {
        string sea;
        system("cls");
        cout<<"Enter blood group to search for Donor"<<endl;
        cin>>sea;
        for (int j=0; j<i; j++) {
            if (sea==dc[j].getBloodGroup()) {
                cout<<"Donor ID: "<<dc[j].getDonorID()<<endl;
                cout<<"Donor name: "<<dc[j].getOwnerName()<<endl;
                cout<<"Donation date: "<<dc[j].getDonationDate()<<endl;
                cout<<"Aadhar number: "<<dc[j].getAadhar()<<endl;
                cout<<"Blood group: "<<dc[j].getBloodGroup()<<endl<<endl;
                system("pause");
                system("cls");
            }
            else {
                cout<<"Not found."<<endl;
            }
        }
    }
}

#endif