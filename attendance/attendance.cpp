#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    float a,t;
    int n,res=0;
    cout << "total : ";
    cin >> t;
    cout << "attended : ";
    cin >> a;
    res=3*t-4*a;
    if(res<0){
        res=0;
    }
    cout << res << " more classes to 75%\n";
    getch();
}