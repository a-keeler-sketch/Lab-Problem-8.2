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
using namespace std;
//prototype

int countWords(string str);

//global variable

string input = "string string string"; 
int main(void) {

    
   

        cout << "Word Count: " << countWords(input) << endl;
    
       
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
