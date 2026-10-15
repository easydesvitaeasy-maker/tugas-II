#include <iostream>
using namespace std;
int main() {
    string menu[2]={"soto", "rawon"};
    int harga[2]={10000, 15000};
    int porsi[2];
    int total[2];
    int i;
    for(i=0;i<2;i++)
        {
            cout<<"menu ";
            cout<<menu[i]<<endl;
            cout<<"harga ";
            cout<<harga[i]<<endl;
            cout<<" berapa porsi ";
            cin>>porsi[i];
            total[i]=porsi[i]*harga[i];
                cout<<total[i]<<endl;
            cout<<"_____________" <<endl;
        }
    return 0;
}
