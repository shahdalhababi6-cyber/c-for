#include <iostream>
using namespace std;
int main()
{
    int n , total = 0 , even = 0 , odd = 0 ;
    cout<<"enter num";
    cin>>n;
    for(iny i = 1; i <= n; i++)
    {
            total += i;
            if(i % 2 == 0)
            even += i;
            odd += i;
            }
            cout<<"total sum"<<total;
            cout<<"even sum";<<even;
            cout<<"odd sum";<<odd;
    }
