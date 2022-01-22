#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Constants

int lab9() {
    // Variables
    int userNum;
    string output;
    char playAgain = 'N';

    do {
        // Input
        cout << "Enter a whole number from 1 to 12: ";
        cin >> userNum;

        output = "";

        // Calculations
        switch(userNum) {
            case 12: output = "12 drummers drumming\n";
            case 11: output = output + "11 pipers piping\n";
            case 10: output = output + "10 lords a-leaping\n";
            case 9: output = output + "9 ladies dancing\n";
            case 8: output = output + "8 maids a-milking\n";
            case 7: output = output + "7 swans a-swimming\n";
            case 6: output = output + "6 geese a-laying\n";
            case 5: output = output + "5 golden rings (five golden rings)\n";
            case 4: output = output + "4 calling birds\n";
            case 3: output = output + "3 French hens\n";
            case 2: output = output + "2 turtle-doves\n";
            case 1:
                if (userNum == 1) {
                    output = output + "A partridge in a pear tree"; break;
                }
                else {
                    output = output + "And a partridge in a pear tree"; break;
                }
            default: cout << "Invalid number!\n";
        }

        // Output
        if (userNum > 0 && userNum < 13) {
            cout << output << endl;
        }

        cout << "Play again (Y/N)? " << endl;
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

    return 0;
}