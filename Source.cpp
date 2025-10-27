/*
* File: P8-2
* Author: Anna Keeler
* Date: 10/27/2025
*
* Description: Lab Problem 8 part two: commiting.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
//prototype

int countWords(string str);

//global variable

string input; // get correct word count for however many spaces

int main(void) {

    //DELETE EVERYTHING BEFORE FIRST COMMIT
    //DELETE THIS FOR THE GITHUB COMMIT, YOU WILL NEED IT LATER THO TO GET USER DATA
    while (true) {
        cout << "Enter a string or Q to quit: ";
        getline(cin, input);
        if (input == "Q") break;


        cout << "Word Count: " << countWords(input) << endl;
    }
       
    return 0;

}

int countWords(string str) {
    str.length();
    int count = 0;
    for (int i = 0; i < str.length(); i++) {

        if (input[i] == ' ' && input[i+1] != ' ') {
            count++;
        }
        
    }
    count += 1;

    return count;
    
}
