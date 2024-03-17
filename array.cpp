//--------Single Dimention array--------//

#include<iostream>
using namespace std;

int main(){
int array[6];

for (int i=1; i<=6; i++)
{
    cout<<"Enter Marks of "<<i<<"th student "<<endl;
    cin>>array[i];
}

for (int i=1; i<=6; i++)
{
    cout<<"Marks of "<<i<<"th student is "<<array[i]<<endl;
}
return 0;
}