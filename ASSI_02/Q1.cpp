/*
Q1. Write a menu driven program
to calculate volume of the box(length * width * height).
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
Create the local objects in respective case and call the function to caluclate area.
Menu options -> 1. Calculate Volume with default values
                2. Calculate Volume with length,breadth and height with same value
                3. Calculate Volume with different length,breadth and height values
*/

#include <iostream>
using namespace std;

class Box
{
private:
    int length, width, height;

public:
    Box(void) : length(0), width(0), height(0) {}
    Box(int length, int width, int height) : length(length), width(width), height(height) {}
    Box(int val) : length(val), width(val), height(val) {}

    void getVolume()
    {
        cout << "Volume :" << length * width * height << endl;
    }
};

int main()
{
    Box b1;
    Box b2(2, 4, 5);
    Box b3(2);

    int ch;

    do
    {
        cout << "menu : " << endl;
        cout << "1. Calculate Volume with default values" << endl;
        cout << "2. Calculate Volume with length,breadth and height with same value" << endl;
        cout << "3. Calculate Volume with different length,breadth and height values" << endl;
        cout << "0. Exit" << endl;
        cout << "------------------------------------" << endl;
        cout << "Enter your choise : " ;
        cin >> ch;

        switch (ch)
        {
        case 1:
            b1.getVolume();
            break;
        case 2:
            b3.getVolume();

            break;
        case 3:
            b2.getVolume();
            break;
        case 0:
            cout << "Exiting....." << endl;
            break;
        }

    } while (ch != 0);
    return 0;
}
