#include <iostream>
#include <string>
#include "lambda.hh"
#include "concur_2_3.hh"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    /*char ch[] = {'a','b','c','d','f','\0'};
    char* ch1 = ch;
    std::string st1(ch1);
    cout<<st1<<endl;
    cout<<st1.size()<<endl;

    char c2[3];
    std::size_t stSize = st1.copy(c2,3,1);
    c2[stSize]='\0';
    cout<<c2<<endl;*/

    tGaurd();
    return 0;
}
