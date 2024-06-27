#include<iostream>
using namespace std;

class IED
{
    int price_of_chef, price_of_chefina, Total_items_sold, total_amount_of_chef, total_amount_of_chefina;
    public:
        void get_Data()
        {
            cin >> price_of_chef >> price_of_chefina >> Total_items_sold;
        }
        int process_Data()
        {
            total_amount_of_chef = price_of_chef * Total_items_sold;
            total_amount_of_chefina = price_of_chefina * Total_items_sold;
            if (total_amount_of_chef > total_amount_of_chefina)
            {
                return total_amount_of_chef;
            }
            else 
            {
                return total_amount_of_chefina;
            }
        }
};
int main()
{
    IED obj;

    obj.get_Data();
    int result = obj.process_Data();
    cout << result << endl;    
    return 0;
}