#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ifstream inpt("test.txt");
    vector <string> testme;
    string temp;
    while (inpt >> temp)
    {
        testme.push_back(temp);
    }
    for(int i = 0; i < testme.size(); i++)
    {
        cout << testme[i] << endl;
    }
}
