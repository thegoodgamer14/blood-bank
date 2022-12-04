#ifndef RECIPIENTS_H
#define RECIPIENTS_H

#include<bits/stdc++.h>
#include<windows.h>
#include "Blood_Group.h"
#include "Contact.h"
using namespace std;

class Recipients: public BloodGroup, public Contact {
    private:
        string recipientID;
        string recipientName;
    public:
        void setRecipientName(string);
        void setRecipientID();
        string getRecipientName();
        string getRecipientID();
};

void Recipients::setRecipientName(string rName) {
    recipientName=rName;
}

void Recipients::setRecipientID() {
    static const char alphanum[] = "0123456789" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";
    int len = sizeof(alphanum) - 1, n = 10;
    string ID="";
    srand(time(0));
    for(int z = 0; z < n; z++) {
        ID+=alphanum[rand() % len];
    }
    recipientID = ID;
}
 
string Recipients::getRecipientName() {
    return recipientName;
}

string Recipients::getRecipientID() {
    return recipientID;
}

#endif
