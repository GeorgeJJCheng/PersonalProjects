#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    int line = 0;
    int wrap = 25;
    while (cin >> word)
    {
        if(word.length() + line > wrap)
        {
            if(word.length() > wrap)
            {
                //int len = word.length();
                int point = 0;
                cout << word.substr(point, wrap-line) << " " << endl;
                point += wrap-line;
                line = 0;
                while(point < word.length() - wrap)
                {
                    cout << word.substr(point, wrap) << " " << endl;
                    line = 0;
                    point += wrap;
                }
                cout << word.substr(point) << " " << endl;
                line = wrap - word.substr(point).length() + 1;
            }
            else
            {
                cout << endl;
                cout << word << " ";
                line = word.length() + 1;
            }
        }
        else
        {
            line = line + word.length() + 1;
            cout << word << " ";
        }
    }
}
