#include <iostream>
using namespace std;
 
int main()
{
    int spasi, baris;
 
    cout <<"Masukan jumlah baris: ";
    cin >> baris;
 
    for(int i = 1, k = 0; i <= baris; i++, k = 0)
    {
        for(spasi = 1; spasi <= baris-i; spasi++)
        {
            cout <<" ";
        }
 
        while(k != 2*i-1)
        {
            cout << "*";
            k++;
        }
        cout << endl;
    }    
    return 0;
}
