#include<iostream>
using namespace std;

class JS
{
    int count = 0;
    int newarr[];
    public:
        int process_Data(int ar[], int min, int n)
        {
            for(int i = 0; i < n; i++)
            {
                if (ar[i] >= min)
                {
                    newarr[] = ar[i];
                    count++;
                }
                else
                {
                    
                    ar[i] = ar[i] + ar[i + 1];
                    newarr[] = ar[i];
                    count++;
                    i++;
                }
            }
            return sizeof(newarr);
        }
};
int main()
{
    JS obj;

    int T, no_of_states, min_literate_people, arr[];
    int result;
    
    while(T--)
    {
        cin >> no_of_states >> min_literate_people;
        for(int i = 0; i < no_of_states; i++)
        {
            cin >> arr[i];
        }
        result = obj.process_Data(arr[], min_literate_people, no_of_states)
    }

    return 0;
}