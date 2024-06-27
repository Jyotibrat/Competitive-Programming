#include<iostream>
using namespace std;

class Hattrick
{
    int T, count;
    char arr[6];
    public:
        void Get_Data()
        {
            cin >> T;
            for(int i = 1; i <= T; i++)
            {
                for(int j = 0; j < 6; j++)
                {
                    cin >> arr[j];
                    if (arr[j] > 6)
                    {
                        continue;
                        j--;
                    }
                    else
                    {

                    }
                }
                count = 0;
                for(int k = 0; k < 6; k++)
                {
                    if (arr[k] == 'W' & arr[k+1] == 'W' & arr[k+2] == 'W')
                    {
                        count ++;
                    }
                }
                if (count > 0)
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    cout << "No" << endl;
                }       
            }
        }
};
int main()
{
    Hattrick obj;
    obj.Get_Data();
    return 0;
}