#include<iostream>
#include<string>
using namespace std;

int main()
{
    int T, size, count, starting_index, ending_index;
    string word;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        size = 0,count = 0, starting_index = 0, ending_index = 0, word = "";
        cin >> size;
        cin >> word;
        for(int j = 0; j < size; j++)
        {
            if (word[j] == 'B')
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << count << endl;
        }
        else
        {
            for(int k = 0; k < size; k++)
            {
                if (word[k] == 'B')
                {
                    starting_index = k;
                    break;
                }
            }
            for(int l = (size-1); l >= 0; l--)
            {
                if (word[l] == 'B')
                {
                    ending_index = l;
                    break;
                }
            }
            cout << ((ending_index - starting_index) + 1) << endl;
        }


    }
    return 0;
}