#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,k=0;
    cin >> t;
    char abc[4] = "abc";
    char cba[4] = "cba";
    char ch,test[4],tmp[4];


    while(t--)
    {
        cin >> test;
        if(strcmp(abc,test)==0 || strcmp(cba,test)==0)
            {
                cout << "YES" <<  endl;
                //k++;
            }
            //cout << test[4];
        else{
            strcpy(tmp,test);
            ch = test[0];
            test[0] = test[1];
            test[1] = ch;
            if(strcmp(abc,test)==0)
            {
                cout << "YES" <<  endl;
                //k++;
            }
            else{
             ch = tmp[1];
             tmp[1] = tmp[2];
             tmp[2] = ch;
             if(strcmp(abc,tmp)==0)
             {
                 cout << "YES" <<  endl;
                 //k++;
             }
             else{
                 cout << "NO" <<  endl;
             }

            }
        }

    }

}
