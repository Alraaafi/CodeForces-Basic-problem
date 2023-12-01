#include<iostream>
using namespace std;
int main(){
    int y,d1,d2,d3,d4;
    cin >> y;
    y++;
    while(1){
        d1 = y/1000;
        d2 = (y/100)%10;
        d3 = (y/10)%10;
        d4 = y%10;

        //cout << d1<<endl << d2 << endl << d3 << endl << d4 <<endl;
        if( (d1!=d2) && (d2!=d3) && (d3!=d4)&& (d2!=d4) && (d1!=d4) && (d1!=d3)){
            cout << y <<endl;
            break;
        }
        y++;
    }

}
