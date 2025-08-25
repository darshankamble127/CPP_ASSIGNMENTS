/*
Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();
*/

#include <iostream>
using namespace std;    

struct Date{
    int day;
    int month;
    int year;

    void initDate() {
        day = 1;
        month = 1;
        year = 2000;
    }

    void printDateOnConsole() {
        cout << "Date : " << day << "/" << month << "/" << year << endl;
    }

    void acceptDateFromConsole() {
        cout << "Enter date (dd mm yyyy): ";
        cin >> day >> month >> year;
    }

    bool isLeapYear() {
        if (year % 4 == 0) {
            return true;
        }
        return false;
    }

};

int main() {
    Date d1;
    
    // Menu driven program
    int ch; 
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Initialize date\n";
        cout << "2. Print date on Console\n";
        cout << "3. Accept date from Console\n";
        cout << "4. Check if Year is Leap Year\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            d1.initDate();
            break;
        case 2:
            d1.printDateOnConsole();   
            break;
        case 3:
            d1.acceptDateFromConsole();
            break;
        case 4:
            if (d1.isLeapYear()) {
                cout << d1.year << " is a leap year." << endl;
            } else {
                cout << d1.year << " is not a leap year." << endl;
            }
            break;
        case 0:
            cout << "Exiting...." << endl; 
            break;
        }
    } while (ch!= 0);
    
    


    return 0;
}