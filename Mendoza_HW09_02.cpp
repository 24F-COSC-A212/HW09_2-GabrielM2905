// Filename: Mendoza_HW09_01
// Description: 
// Author: Gabriel Mendoza
// Date Modified: 10-21-24

#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream inFile;
    char inName[200];
    string inputLine;
    int lineNumber = 1;

    cout << "Enter the input file name ";
    cin >> inName;

    inFile.open(inName);

    if(!inFile)
    {
        cout << "Error opening file InName" << endl;
        return 1;
    }

    while (!inFile.eof())
    {
        getline(inFile, inputLine, '\n');
        cout << setw(4) << right << lineNumber << ": " << inputLine << endl;
        lineNumber++;
    }

    inFile.close();

    



    return 0;
}