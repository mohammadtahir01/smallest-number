#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout<<"Enter the number:";
    cin>>num1>>num2>>num3;
    if(num1 <= num2 && num2 <= num3){
        cout<<num1<<" Number is smaller";
    }else if(num2 <= num1 && num2 <= num3){
        cout<<num2<<" Number is smaller";
    }else{
         cout<<num3<< "Number is smaller";
    }

    return 0;
}