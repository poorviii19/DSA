#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// split a string by whitespace

void tokenise(string sentence)
{
    stringstream ss(sentence);

    string word;

    cout << "Tokens are:\n";

    while (ss >> word)
    {
        cout << word << endl;
    }
}

// parse different data types

void parseMixed()
{
    string data = "Alice 25 9.5";

    stringstream ss(data);

    string name;
    int age;
    double gpa;

    ss >> name >> age >> gpa;

    cout << "\nParsed Data\n";
    cout << "Name  : " << name << endl;
    cout << "Age   : " << age << endl;
    cout << "GPA   : " << gpa << endl;
}

// build a string 
string buildString(int id, string name, double score)
{
    stringstream ss;

    ss << "ID: " << id
       << " Name: " << name
       << " Score: " << score;

    return ss.str();
}

// custom delimeter split
void splitCSV(string line, char delimiter)
{
    stringstream ss(line);

    string token;

    cout << "\nCSV Tokens\n";

    while (getline(ss, token, delimiter))
    {
        cout << token << endl;
    }
}

int main()
{
  

    string sentence = "Hello 42 world";
    tokenise(sentence);


    parseMixed();

 

    string result = buildString(101, "ABC", 98.75);

    cout << result << endl;


    string csv = "Apple,Banana,Mango,Grapes,Orange";

    splitCSV(csv, ',');

    return 0;
}