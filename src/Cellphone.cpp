#include<iostream>
using namespace std;

class Cell
{
    string year;
    public:
        string Get_Data()
        {
            cin >> year;
            string lastTwoCharacters = year.substr(year.length() - 2);
            string result = "K" + lastTwoCharacters;
            return result;
        }
};
int main() 
{
	Cell obj;
    string Name_of_Phone = obj.Get_Data();
    cout << Name_of_Phone << endl;
    return 0;
}
