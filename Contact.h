#ifndef CONTACT_H
#define CONTACT_H

#include<bits/stdc++.h>
using namespace std;

class Contact {
    private:
        string AadharNo;
        string phnNo;
        string email;
    public:
        void setPhone(string);
        void setEmail(string);
        void setAadhar(string);
        string getPhone();
        string getEmail();
        string getAadhar();
};

void Contact::setPhone(string phn) {
    phnNo=phn;
}

void Contact::setAadhar(string adhr) {
    AadharNo = adhr;
}

void Contact::setEmail(string e) {
    email = e;
}

string Contact::getPhone() {
    return phnNo;
}

string Contact::getAadhar() {
    return AadharNo;
}

string Contact::getEmail() {
    return email;
}

#endif
