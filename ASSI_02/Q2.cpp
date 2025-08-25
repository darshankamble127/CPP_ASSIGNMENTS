/*
Q2. Imagine a tollbooth at a bridge. 
Cars passing by the booth are expected to pay a fifty-cent toll. 
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to hold the total amount of money collected.
A constructor initializes all data members to 0. 
A member function called payingCar() increments the car total and adds 0.50 to the cash total. 
An other function, called nopayCar()increments the car total but adds nothing to the cash total. 
Finally, a member function called printOnConsole() displays the two totals and number of paying as well as non paying cars total
*/

#include<iostream>
using namespace std;

static int payingCarCount =0;
static int nonPayingCarCount =0;

class Tollbooth{
    private:
    unsigned int totalCarsPassed;
    double totalAmountCollected;

    public:
    Tollbooth (): totalCarsPassed(0), totalAmountCollected(0){}
    
    void payingCar(){
        totalCarsPassed++;
        totalAmountCollected += 0.5;
        payingCarCount++;
    }

    void nopayCar(){
        totalCarsPassed++;
        nonPayingCarCount++;
    }
    
    void printOnConsole(){
        cout<<"--------------------------------------------"<<endl;
        cout<<"totalAmountCollected : "<<totalAmountCollected<<endl;
        cout<<"totalCarsPassed : "<<totalCarsPassed<<endl;
        cout<<"payingCarCount : "<<payingCarCount<<endl;
        cout<<"nonPayingCarCount : "<<totalAmountCollected<<endl;
        cout<<"--------------------------------------------"<<endl;

    }

};

int main(){
    Tollbooth t1;
    int ch;
    do {
        cout << "\n1. Paying Car \n2. Non-Paying Car \n3. Show Totals \n4. Exit \nEnter choice: ";
        cin >> ch;
        switch(ch) {
            case 1:
                t1.payingCar();
                break;
            case 2:
                t1.nopayCar();
                break;
            case 3:
                t1.printOnConsole();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
        }
    } while(ch != 4);
    return 0;
}