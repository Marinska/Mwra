#include <iostream>
using namespace std;
int main()
{
      int baris, a, b, c;
      cout << "Masukkan jumlah baris: ";
      cin >> baris;
      for (b = 0; b <= baris; b++)
      {
            for (a = baris; a > b; a--)
                  cout << " ";
            for (c = 0; c < b; c++)
                  cout << "* ";
            cout << "\n";
      }
      for (b = 1; b < baris; b++)
      {
            for (a = 0; a < b; a++)
                  cout << " ";
            for (c = baris; c > b; c--)
                  cout << "* ";
            cout << "\n";
      }
      return 0;
}
