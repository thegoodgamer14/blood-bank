#include<iostream>
#include<iomanip>
#include<windows.h>
#include "Blood_Bank.h"
using namespace std;

int main() {
    BloodBank bb;
    while(1) {
        int ch1, ch2, ch3;

        cout<<"--------------------------------------"<<endl;
        cout<<"|    Blood Bank Management System    |"<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"\n\t1. Donor Menu\n\t2. Recipient Menu\n\t3. Exit"<<endl;
        cin>>ch1;
        system("cls");
        switch (ch1) {
            case 1:
            {
                cout<<"--------------------------------------"<<endl;
                cout<<"|            Donor Menu              |"<<endl;
                cout<<"--------------------------------------"<<endl;
                cout<<"\nEnter your choice:\n\t1. Add New Donor\n\t2. Display Donor List\n\t3. Search Donors List\n\t4. Update Donor Details\n\t5. Exit"<<endl;
                cin>>ch2;
                switch(ch2) {
                    case 1:
                    {
                        system("cls");
                        bb.bloodBank("Add Donor");
                    }
                    break;
                    case 2:
                    {
                        system("cls");
                        bb.bloodBank("Display Donor List");
                    }
                    break;
                    case 3:
                    {
                        system("cls");
                        bb.bloodBank("Search Donors List");
                    }
                    break;

                    case 4:
                    {
                        system("cls");
                        bb.bloodBank("Update Donor Details");
                    }
                    break;
                
                    case 5:
                    {
                        return 0;
                    }
                    break;
                    default:
                    {
                        system("cls");
                        cout<<"Enter valid choice!"<<endl;
                    }  
                    break;
                }
            }
            break;
            case 2:
            {
                cout<<"--------------------------------------"<<endl;
                cout<<"|           Recipient Menu           |"<<endl;
                cout<<"--------------------------------------"<<endl;
                cout<<"\nEnter your choice:\n\t1. Add Recipient\n\t2. Search for Donor\n\t3. Display Recipients\n\t4. Update Recipient Details\n\t5. Exit"<<endl;
                cin>>ch3;
                switch (ch3)
                {
                    case 1:
                    {
                        system("cls");
                        bb.bloodBank("Add Recipient");
                    }
                    break;
                    case 2:
                    {
                        system("cls");
                        bb.bloodBank("Search for Donor");
                    }
                    break;
                    case 3:
                    {
                        system("cls");
                        bb.bloodBank("Display Recipients");
                    }
                    break;
                    case 4:
                    {
                        system("cls");
                        bb.bloodBank("Update Recipient Details");
                    }
                    break;
                    case 5:
                    {
                        return 0;
                    }
                    break;
                    default:
                    {
                        system("cls");
                        cout<<"Enter valid choice!"<<endl;
                    }
                }
            }
            break;
            case 3:
            {
                return 0;
            }
            break;
            default:
            {
                system("cls");
                cout<<"Enter valid choice!"<<endl;
            }
        }
    }
    
    return 0;
}
