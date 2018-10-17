/*
File: main.cpp
Description: A function takes in a string as input and returns how many
             times 'a' or 'A' is seen in the string as an integer 
Author: Colby Hillers
Email: hillersc144964@student.vvc.edu
Date: 10/16/18
*/

#include<iostream>
#include<string>

using namespace std;

// Function counts how many times the letter a is in string str
int count_a(string str)
{
    // Counter variable for the letter a
    int count = 0;

    // Loop iterates through string str
    for(int i = 0; i < str.length(); i++)
    {
        // Every iteration checks if indexed value is 'a' or 'A'
        if(str.at(i) == 'a' || str.at(i) == 'A')
            // Everytime letter a is found 1 is added to count
            count++;
    }
    // Return count which is how many times the letter a was seen in str
    return count;
}

int main()
{
    string input_str;
    cout << "Enter a string: ";
    cin >> input_str;

    cout << "The letter a was in your string " << count_a(input_str) 
    << " time(s)." << endl; 

    return 0;
}
