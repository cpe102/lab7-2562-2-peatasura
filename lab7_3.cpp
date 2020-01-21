//status = "ONE-NIGHT-STAND";
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int age , height , money ;
   /* string a,b,c,d,e;
    a = "status = UNFRIEND";
    b = "status = BEST FRIEND";
    c= "status = ONE NIGHT STAND";
    d ="status = FRIEND";
    e = "status = MARRIED";*/
    cout << "WHAT AGE? :";
    cin >> age;
    if (age<=20)
    {
        cout << "WHAT IS YOUR HEIGHT ? :";
        cin >>  height ;
        if (height >= 175)
        {
            //cout << "status = UNFRIEND";
             cout << "WHAT MONEY DO YOU HAVE?";
            cin >> money;
            if (money >69000000)
            {
                    cout << "status = MARRRIED";
            } 
            else
            {
                    cout << "status = ONE NIGHT STAND";
            } 
        }
        else if(height <175)
        {
            cout << "status = FRIEND";
        }
        else
        {
           cout << "status = UNFRIEND";
        }
    }
    else if (age <30)
    {
        cout << "WHAT MONEY DO YOU HAVE?";
            cin >> money;
            if (money >10000000) 
            {cout << "status = BEST FRIEND";}
            else {cout << "status = ONE NIGHT STAND";}
    }
    else 
    {
        cout << "status = UNFRIEND";
    }
    return 0;
}