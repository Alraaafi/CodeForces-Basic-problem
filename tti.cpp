#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // Take any string
    char s[8] = "dog:cat";
    char k[8] = "dog";

    //int pos = strstr(s,k);

    cout << "String is: " <<strstr(s,k);

    return 0;
}
