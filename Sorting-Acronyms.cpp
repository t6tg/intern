#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> v_word;
void input_word(int n)
{
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        v_word.push_back(word);
    }
}
void print_word(int n)
{
    for (int i = 0; i < n; i++)
    {
        string sub = v_word[i].find(' ');
        // for (int j = 0; j < (v_word[i].split(' ')).size(); j++)
        {
            char x = v_word[i][0];
            if (x >= 65 && x <= 90)
            {
                cout << v_word[i][0];
            }
        }
        // }
        cout << endl;
    }
    int main()
    {
        int n;
        cin >> n;
        input_word(n);
        print_word(n);
    }