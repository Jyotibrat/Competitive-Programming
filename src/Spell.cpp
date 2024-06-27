#include<iostream>
using namespace std;

class Spell
{   
    int test;
    string spell;
    public:
        string Get_Data()
        {
            cin >> test >> endl;
            for(int i = 0; i < test; i++)
            {
                cin >> spell >> endl;
            }
            return ;
        }
};
int main()
{   
    Spell obj;
    string reduced_spell = obj.Get_Data();
    cout << reduced_spell;
    return 0;
}