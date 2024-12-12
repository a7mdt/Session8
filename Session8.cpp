#include <iostream>
using namespace std;

int main() {

    // ----------------------[Randoms]------------------------
    //int n = 15, n2 = 2;
    //double nn = static_cast<double>(n) / n2;

    //cout << nn << endl;
     
    // --------------------
 
    //int arr[3][4] = { 
    //    {1, 2, 3, 4},
    //    {4,-5,50, 22},
    //    {96,19,100, 0}
    //};

    //arr[1][1] = 5;
    //cout << arr[1][1] << endl;

    //int arr[3][4];

    //for (int i = 0; i < 3;i++) {
    //    for (int j = 0; j < 4;j++) {
    //        cin >> arr[i][j];
    //    }
    //    cout << endl;
    //}

    //cout << "----------------\n";

    //for (int i = 0; i < 3;i++) {
    //    for (int j = 0; j < 4;j++) {
    //        cout << arr[i][j] <<" ";
    //    }
    //    cout << endl;
    //}

    // -------------------------------------------------------

    // -------------------[Applications]----------------------

    /*
        1-  With Arrays and Loops Create a program that stores the ages of the
            attendees (save them in array) then with loop get all these ages from users
                Then, Output the Summation & Average of the ages
    */

    /* 
    int number; 
    cout << "Enter the number of attendees: ";
    cin >> number;

    int agesArray[15];

    int Summation=0;
    double Average;
    for (int i = 0; i < number; i++) {
        cout << "Enter the Age of attendee " << i + 1 << ": ";
        cin >> agesArray[i];
        Summation += agesArray[i]; // Summation = Summation + array[]
    }

    Average = static_cast<double>(Summation) / number;

    cout << "- The Summation OF Attendee = " << Summation << endl;
    cout << "- The Average Age OF Attendee = " << Average << endl;
    */

    /*
        2-  Create a program that has 3 SEQUENCEs and put an unknown number and ask the user to enter
            then show him His Score.
    */

    

    /*
        3-  Create a classroom program that has 3x4 Seats each Seat should Have a value (1 for taken) and (0 for free)
            make the user enters testcases till he stop the code.
    */

    int seats[4][4] = {
        {1,0,0,1},
        {0,1,1,1},
        {1,0,0,0},
        {0,1,1,0}
    };

    cout << "The Range of Rows from 0 to 3, The Same for Columns" << endl;

    char choice='y';
    while (choice == 'y' || choice == 'Y') {
        int row, column;
        cout << "What is the row u want to seat in: ";
        cin >> row;
        cout << "What is the column u want to seat in: ";
        cin >> column;

        if (row >= 0 && row < 4 && column >= 0 && column < 4) {
            if (seats[row][column] == 0)
                cout << "You can Seat here.." << endl;
            else
                cout << "You can't Seat here!" << endl;
        }
        else
            cout << "Pls, Enter Valid Positions.." << endl;

        cout << "Do u want to continue? (y/n): ";
        cin >> choice;
    }

    return 0;
}
