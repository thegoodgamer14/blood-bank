#ifndef BLOOD_GROUP_H
#define BLOOD_GROUP_H

#include<iostream>
using namespace std;

class BloodGroup {
    private:
        string bloodType;
    public:
        void setBloodGroup(string BT);
        string getBloodGroup();
};

void BloodGroup::setBloodGroup(string BT) {
    bloodType = BT;
}

string BloodGroup::getBloodGroup() {
    return bloodType;
}

#endif
