//this program passes a string into a function and returns each letter of the string as an element in a vector.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> namePerson (string value) 
//argument has to be a string.
//note: this is a value passing function.
{
    vector<string> result; //empty vector
    string index; //temp holds the letter of the string.
    for (int counter = 0; counter < value.length(); counter++) //iterates based on length of string argument.
    {
        index = value[counter]; //get letter from string.
        result.push_back(index); //push back that letter into the result vector.
    }
    return result;
}

int main ()
{
    vector<string> fullName = namePerson("Moris");
    //the final vector will be identified as fullName and its value will be that of the returned value result.
    //our argument is a string: Moris in this case study.
    cout << fullName[0] << fullName[1] << fullName[2] << fullName[3] << fullName[4];
    return 0;
}
