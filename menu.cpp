#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    cout<<"1) Start The Game "<<endl;
    cout<<"2) Score Board "<<endl;
    cout<<"3) Exit "<<endl;
    int n;
    cin>>n;
    switch (n)
    {
    case 1:
        system("g++ -o Gameplay Gameplay.cpp && ./Gameplay");
        break;
            case 2:
        cout<<"zendegi sakht shodh";
        break;
            case 3:
        exit(0);
        break;

    }



}