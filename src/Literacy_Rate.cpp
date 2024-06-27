#include<iostream>
using namespace std;

class LR
{
    double literacy_rate;
    public:
        string process_Data(double P, double L)
        {
            literacy_rate = (L / P) * 100;
            if (literacy_rate >= 75)
            {
                return "YES";
            }
            else
            {
                return "NO";
            }
        }
};
int main()
{
    LR obj;
    int T;
    double population, literate_population;
    string result = "";
    cin >> T ;
    while(T--)
    {
        cin >> population >> literate_population;
        result = obj.process_Data(population, literate_population);
        cout << result << endl;
    }
    return 0;
}