#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string inputFileName;
    string outputRoundFileName;
    string outputSquareFileName;


    cout << "Enter the name of the input file: ";
    cin >> inputFileName;


    ifstream inputFile(inputFileName);

    if (!inputFile.is_open()) {
        cerr << "Cannot open the input file: " << inputFileName << endl;
        return 1;
    }

 
    cout << "Enter the name of the round brackets output file: ";
    cin >> outputRoundFileName;
 
    cout << "Enter the name of the square brackets output file: ";
    cin >> outputSquareFileName;


    ofstream outputRoundBrackets(outputRoundFileName);
    ofstream outputSquareBrackets(outputSquareFileName);

    if (!outputRoundBrackets.is_open() || !outputSquareBrackets.is_open()) {
        cerr << "Cannot open one or both of the output files." << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        bool hasRoundBrackets = false;
        bool hasSquareBrackets = false;


        for (char c : line) {
             if (c == '(' || c == ')') {
                hasRoundBrackets = true;
             }
            if (c == '[' || c == ']') {
                hasSquareBrackets = true;
            }
        }


        if (hasRoundBrackets) {
            outputRoundBrackets << line << endl;
        }
         if (hasSquareBrackets) {
            outputSquareBrackets << line << endl;
         }
    }

    inputFile.close();
    outputRoundBrackets.close();
    outputSquareBrackets.close();


    cout << "Contents of the round brackets output file:" << endl;
    ifstream roundOutputFile(outputRoundFileName);
    if (roundOutputFile) {
        string roundLine;
        while (getline(roundOutputFile, roundLine)) {
            cout << roundLine << endl;
        }
        roundOutputFile.close();
    }
    else {
        cout << "The round brackets output file is empty." << endl;
    }

    cout << "Contents of the square brackets output file:" << endl;
    ifstream squareOutputFile(outputSquareFileName);
    if (squareOutputFile) {
        string squareLine;
        while (getline(squareOutputFile, squareLine)) {
            cout << squareLine << endl;
        }
        squareOutputFile.close();
    }
     else {
        cout << "The square brackets output file is empty." << endl;
     }
 
    return 0;
}