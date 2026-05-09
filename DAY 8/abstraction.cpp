#include <iostream> 
using namespace std;
class Atm
{
    private:
    int balance;
    
    public:
    Atm()
    {
        balance = 1000;
}
void withdraw(int amount)
{
    if (amount > balance)
    {
        cout <<"Insufficient balance" << endl;
    }
    else
    {
        balance -= amount;
        cout <<"Successfully withdrawn"<< amount << endl;
    }
}
void showBalance ()
{
    cout <<"Current balane:" << balance << endl;
}
};
int main()
{
    Atm a;
    a.withdraw(100000);
    a.showBalance();
    return 0;
}