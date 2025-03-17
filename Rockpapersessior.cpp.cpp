#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;
int randomNum();
int main()
{
            cout<<"<------------<WELCOM TO ROCK PAPER SESSIOR GAME>------------>"<<endl;
            cout<<endl;
    int user, comp, Upoint = 0, Cpoint = 0;
    for ( int i=1;i<=3;i++)
    {
            cout <<"--------------Rock[1] Paper[2] Sessior[3]:-";
            cin >> user;
            comp = randomNum();
            cout <<"Computer Turn Rock[1] Paper[2] Sessior[3]:-" << comp<<endl;
            if (user == comp)
            {
                cout << "  DRAW MATCH" << endl;
            }
            else if (user < comp)
            {
                cout << "COMPUTER WIN" << endl;
                Cpoint++;               
            }
            else if (user > comp)
            {
                cout << "   USER WIN" << endl;
                Upoint++;  
            }
        } 
    cout << "COMPUTER POINT:-" << Cpoint << endl;
    cout << "----USER POINT:-" << Upoint << endl;
    if(Cpoint<Upoint){
        cout<<"-FINAL RESULT-"<<endl;
        cout<<"USER WINNER:-" << Upoint << endl;
    }
    else if(Cpoint>Upoint){
        cout<<"-FINAL RESULT-"<<endl;   
        cout << "COMPUTER WINNER:-" << Cpoint << endl;
    }
    else{
        cout<<"<------------DRAW--MATCH------------>";
    }
}
int randomNum()
{
    srand(time(0));
    int random = rand() % 101;
    if (random % 3 == 0)
    {
        return 1;
    }
    if (random % 3 == 1)
    {
        return 2;
    }
    if (random % 3 == 2)
    {
        return 3;
    }
}