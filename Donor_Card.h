#ifndef DONORCARD_H
#define DONORCARD_H

#include<iostream>
#include<string>
#include<ctime>
#include "Blood_Group.h"
#include "Contact.h"
using namespace std;

class Donorcard: public BloodGroup, public Contact {
private:
    string donorID;
    string ownerName;
    string donationDate;
public:
    void setOwnerName(string oName);
    void setDonationDate(string d);
    void setDonorID();
    string getOwnerName();
    string getDonationDate();
    string getDonorID();
};

void Donorcard::setOwnerName(string oName) {
    ownerName=oName;
}

void Donorcard::setDonationDate(string d) {
    donationDate=d;
}

void Donorcard::setDonorID() {
    static const char alphanum[] = "0123456789" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";
    int len = sizeof(alphanum) - 1, n = 10;
    string ID="";
    srand(time(0));
    for(int z = 0; z < n; z++) {
        ID+=alphanum[rand() % len];
    }
    donorID = ID;
}

string Donorcard::getDonationDate() {
    return donationDate;
}

string Donorcard::getOwnerName() {
    return ownerName;
}

string Donorcard::getDonorID() {
    return donorID;
}

#endif
