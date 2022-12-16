#ifndef BLOOD_BANK_DONOR_H
#define BLOOD_BANK_DONOR_H

#include<iostream>
#include<iomanip>
#include<string>
#include<windows.h>
#include "Donor_Card.h"
#include "Recipients.h"

using namespace std;

class BloodBank {
    private:
        Donorcard dc[100];
        Recipients rec[100];
    public:
        void bloodBank(string);
        void showDetails(int);
        void showDetails(int, string);
};

void BloodBank::showDetails(int j) {
    cout<<"Donor ID: "<<dc[j].getDonorID()<<endl;
    cout<<"Donor name: "<<dc[j].getOwnerName()<<endl;
    cout<<"Donation date: "<<dc[j].getDonationDate()<<endl;
    cout<<"Aadhar number: "<<dc[j].getAadhar()<<endl;
    cout<<"Blood group: "<<dc[j].getBloodGroup()<<endl;
    cout<<"Phone number: "<<dc[j].getPhone()<<endl;
    cout<<"Email-ID: "<<dc[j].getEmail()<<endl<<endl;
}

void BloodBank::showDetails(int j, string bt) {
    cout<<"Donor name: "<<dc[j].getOwnerName()<<endl;
    cout<<"Donation date: "<<dc[j].getDonationDate()<<endl;
    cout<<"Blood group: "<<dc[j].getBloodGroup()<<endl;
    cout<<"Phone number: "<<dc[j].getPhone()<<endl;
    cout<<"Email-ID: "<<dc[j].getEmail()<<endl<<endl;
}

void BloodBank::bloodBank(string s) {
    static int i = 0, j = 0;

    if (s == "Add Donor") {
        string n,m;
        dc[i].setDonorID();

        
        cout<<"Enter name: ";
        getline(cin>>n,m);
        dc[i].setOwnerName(n+m);


        cout<<"Enter donation date: ";
        cin>>n;
        dc[i].setDonationDate(n);

        cout<<"Enter Aadhar number: ";
        cin>>n;
        dc[i].setAadhar(n);

        cout<<"Enter Blood Group: ";
        cin>>n;
        dc[i].setBloodGroup(n);
        
        cout<<"Enter Phone number: ";
        cin>>n;
        dc[i].setPhone(n);

        cout<<"Enter Email-ID: ";
        cin>>n;
        dc[i].setEmail(n);

        i++;
        cout<<"Donor details added successfully!";
        
        system("cls");
    }

    else if (s == "Display Donor List") {
        system("cls");
        int j;
        for (j=0; j<i; j++){
            showDetails(j);
            cout<<"-----------------------------"<<endl;
        }
        system("pause");
        system("cls");
        if(j<1)
            cout<<"Directory is empty!";
    }

    else if (s == "Search Donors List") {
        string sea;
        system("cls");
        cout<<"Enter blood group to search for Donor"<<endl;
        cin>>sea;
        for (int j=0; j<i; j++) {
            if (sea==dc[j].getBloodGroup()) {
                showDetails(j);
                system("pause");
                system("cls");
            }
        }
    }

    else if (s=="Update Donor Details") {
        string upd;
        int ch;
        system("cls");
        cout<<"Enter Donor ID to update details"<<endl;
        cin>>upd;
        for (int j=0; j<i; j++)
        {
            if (upd==dc[j].getDonorID()) {
                cout<<"Which detail do you want to update?"<<endl;
                cout<<"1-Phone number"<<endl;
                cout<<"2-Email ID"<<endl;
                cout<<"Enter choice: ";
                cin>>ch;
                if (ch==1)
                {
                    string newPhn;
                    cout<<"Enter new phone number: ";
                    cin>>newPhn;
                    dc[j].setPhone(newPhn);
                    cout<<"New Phone number: "<<dc[j].getPhone()<<endl;
                    cout<<"Donor details updated successfully!"<<endl;
                }
                else if (ch==2)
                {
                    string newEmail;
                    cout<<"Enter new email: ";
                    cin>>newEmail;
                    dc[j].setEmail(newEmail);
                    cout<<"New Email-ID: "<<dc[j].getEmail()<<endl;
                    cout<<"Donor details updated successfully!"<<endl;
                }
            }
        }
        system("pause");
        system("cls");
    }

    if (s=="Add Recipient") {
        string n, m;
        rec[j].setRecipientID();

        
        cout<<"Enter name: ";
        getline(cin>>n,m);
        rec[j].setRecipientName(n+m);

        cout<<"Enter Aadhar number: ";
        cin>>n;
        rec[j].setAadhar(n);

        cout<<"Enter Blood Group: ";
        cin>>n;
        rec[j].setBloodGroup(n);
        
        cout<<"Enter Phone number: ";
        cin>>n;
        rec[j].setPhone(n);

        cout<<"Enter Email-ID: ";
        cin>>n;
        rec[j].setEmail(n);

        j++;
        cout<<"Recipient details added successfully!";
        
        system("cls");
    }

    if (s=="Search for Donor") {
        string recID, recBT, donBT;
        cout<<"Enter Recipient ID: ";
        cin>>recID;

        for (int k = 0; k<j; k++) {
            if (recID == rec[k].getRecipientID())
                recBT = rec[k].getBloodGroup();
            break;
        }

        for (int k = 0; k<i; k++) {
            donBT = dc[k].getBloodGroup();
            if (recBT == "A+" && (donBT == "A+" || donBT == "A-" || donBT == "O+" || donBT == "O-"))
                showDetails(k, recBT);
            else if (recBT == "A-" && (donBT == "A-" || donBT == "O-"))
                showDetails(k, recBT);
            else if (recBT == "B+" && (donBT == "B+" || donBT == "B-" || donBT == "O+" || donBT == "O-"))
                showDetails(k, recBT);
            else if (recBT == "B-" && (donBT == "B-" || donBT == "O-"))
                showDetails(k, recBT);
            else if (recBT == "AB+")
                showDetails(k, recBT);
            else if (recBT == "AB-" && (donBT == "A-" || donBT == "B-" || donBT == "O-" || donBT == "AB-"))
                showDetails(k, recBT);
            else if (recBT == "O+" && (donBT == "O+" || donBT == "O-"))
                showDetails(k, recBT);
            else if (recBT == "O-" && (donBT == "O-"))
                showDetails(k, recBT);            
        }
    }

    if (s=="Display Recipients") {
        system("cls");
        int j;
        for (j=0; j<i; j++){
            cout<<"Donor ID: "<<rec[j].getRecipientID()<<endl;
            cout<<"Donor name: "<<rec[j].getRecipientName()<<endl;
            cout<<"Blood group: "<<rec[j].getBloodGroup()<<endl;
            cout<<"Phone number: "<<rec[j].getPhone()<<endl;
            cout<<"Email-ID: "<<rec[j].getEmail()<<endl<<endl;
            cout<<"-----------------------------"<<endl;
        }
        system("pause");
        system("cls");
        if(j<1)
            cout<<"Directory is empty!";
    }

    if (s=="Update Recipient Details") {
        string upd;
        int ch;
        system("cls");
        cout<<"Enter Recipient ID to update details"<<endl;
        cin>>upd;
        for (int j=0; j<i; j++)
        {
            if (upd==rec[j].getRecipientID()) {
                cout<<"Which detail do you want to update?"<<endl;
                cout<<"1-Phone number"<<endl;
                cout<<"2-Email ID"<<endl;
                cout<<"Enter choice: ";
                cin>>ch;
                if (ch==1)
                {
                    string newPhn;
                    cout<<"Enter new phone number: ";
                    cin>>newPhn;
                    dc[j].setPhone(newPhn);
                    cout<<"New Phone number: "<<dc[j].getPhone()<<endl;
                    cout<<"Recipient details updated successfully!"<<endl;
                }
                else if (ch==2)
                {
                    string newEmail;
                    cout<<"Enter new email: ";
                    cin>>newEmail;
                    dc[j].setEmail(newEmail);
                    cout<<"New Email-ID: "<<dc[j].getEmail()<<endl;
                    cout<<"Recipient details updated successfully!"<<endl;
                }
            }
        }
        system("pause");
        system("cls");
    }
}

#endif
