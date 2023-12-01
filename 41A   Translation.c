#include<iostream>
#include<string> //use for class string
using namespace std;
int main()
{
    string s1 = "Tanvir ";
    string s2 = "Ahmed";
    string s3;

    s3 = s1;
    cout << "String 3 is: " <<s3<<endl;

    s3 = s1 + s2;
    cout << "String 3 is: " <<s3<<endl;
}
