#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <cmath>

using namespace std;

void add();
void subtract();
void balance();
void panel();

double savings = 0.00;

int main()
{
    int choice;
    string str;

    ifstream file;
    file.open("savings.dat");
    getline (file, str);
    file.close();
    savings = atof(str.c_str());



    do {
            system("cls");
            panel();
            choice = 0;
            cout << setw(36) << " ";
            cin >> choice;
            cout << endl;

            if (choice == 1)
            {
                add();
            }
            else if (choice == 2)
            {
                subtract();
            }
            else if (choice == 3)
            {
                cout << setw(36) << " " << "Exiting system";
            }
            else
            {
                cout << setw(36) << " " << "Please choose correctly!";
                Sleep(1000);
            }

    }   while (choice != 3);

    ofstream outfile;
    outfile.open("savings.dat");
    outfile << savings;
    outfile.close();
}

void add()
{
    double choice;
    cout << setw(36) << " " << "How much would you like to add to your savings? ";
    cin >> choice;
    cout << endl;
    cout << setw(36) << " " <<  "$ "<< fixed << showpoint << setprecision(2) << choice << " added to your savings!";
    savings += choice;

    Sleep(2000);
}
void subtract()
{
    double choice;
    cout << setw(36) << " " << "How much would you like to subtract from your";
    cout << " savings? ";
    cin >> choice;
    cout << setw(36) << " " <<  "$ "<< fixed << showpoint << setprecision(2);
    cout << choice << " subtracted from your savings!";
    savings -= choice;


    Sleep(2000);
}
void balance()
{

}
void panel()
{
    int decimals, tenths, ones, tens, hundreds, thousands, tenThousands;
    double thousandths;


    tenThousands = savings / 10000;
    thousands = (savings - (tenThousands * 10000)) / 1000;
    hundreds = (savings - (tenThousands * 10000) - (thousands * 1000)) /100;
    tens = (savings - (tenThousands * 10000) - (thousands * 1000) - (hundreds * 100)) / 10;
    ones = (savings - (tenThousands * 10000) - (thousands * 1000) - (hundreds * 100) - (tens*10)) / 1;
    tenths = (savings - (tenThousands * 10000) - (thousands * 1000) - (hundreds * 100) - (tens*10) - (ones * 1)) / .1;
    thousandths = (savings - (tenThousands * 10000) - (thousands * 1000) - (hundreds * 100) - (tens*10) - (ones * 1) - (tenths * .1)) / .01;

   cout << "\n\n\n";
   cout << setw(36) << " " << "*********************************************" << endl;
   cout << setw(36) << " " << "*                                           *" << endl;
   cout << setw(36) << " " << "*   $$$$$$$      PERSONAL                   *" << endl;
   cout << setw(36) << " " << "*   $  |  $      BANKING                    *" << endl;
   cout << setw(36) << " " << "*   $ $$$ $      SOLUTIONS                  *" << endl;
   cout << setw(36) << " " << "*   $ $|  $                                 *" << endl;
   cout << setw(36) << " " << "*   $ $$$ $                                 *" << endl;
   cout << setw(36) << " " << "*   $  |$ $                                 *" << endl;
   cout << setw(36) << " " << "*   $ $$$ $                                 *" << endl;
   cout << setw(36) << " " << "*   $  |  $                                 *" << endl;
   cout << setw(36) << " " << "*   $$$$$$$                                 *" << endl;
   cout << setw(36) << " " << "*                                           *" << endl;
   cout << setw(36) << " " << "*                                           *" << endl;
   cout << setw(36) << " " << "*                                           *" << endl;
   cout << setw(36) << " " << "*       TOTAL SAVINGS BALANCE: $ ";
   cout << tenThousands << thousands << hundreds << tens;
   cout << ones << ".";
   cout << tenths << fixed << showpoint << setprecision(0) << thousandths << "  *" << endl;
   cout << setw(36) << " " << "*                                           *" << endl;
   cout << setw(36) << " " << "*       1. ADD MONEY TO SAVINGS             *" << endl;
   cout << setw(36) << " " << "*       2. TAKE OUT MONEY FROM SAVINGS      *" << endl;
   cout << setw(36) << " " << "*       3. QUIT APPLICATION                 *" << endl;
   cout << setw(36) << " " << "*                                           *" << endl;
   cout << setw(36) << " " << "*                                           *" << endl;
   cout << setw(36) << " " << "*********************************************" << endl;
}
