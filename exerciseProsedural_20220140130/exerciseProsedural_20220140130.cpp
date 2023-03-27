// exerciseProsedural_20220140130.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double rerata(double a, double b) {
    (a + b)/2;
}

string status1(double rata) {
    if 
        (rata >= 70)
        return "diterima";
    else
        return "tidak diterima";
}

int main() {
    double nilM, nilBI, rerata;
    string status; 
    cout << "masukkan nilai matematika = ";
    cin >> nilM;
    cout << "masukkan nilai bahasa inggris = ";
    cin >> nilBI;
    rerata = (nilM + nilBI) / 2;
    if (rerata >= 70)
        status = "diterima";
    else
        status = "tidak diterima";
    cout << "status kelulusan = " << status;
    
}






// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
