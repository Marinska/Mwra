#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
  int p = 255;  //variable p dengan nilai awal 255
  cin>>p;  //input nilai p (di flowchart ada Read p soalnya, kalo gak disuruh ywdh apus aja :v)
  if(p>=0 && p>=255) //kondisi buat operasi logika yang maksudnya adalah, "jika p >= 0 DAN p>=255" adalah benar maka hasilnya adalah TRUE (1), jika tidak berarti FALSE (0)
  {
	cout<<"True = 1"; //nah ini buat perintah print kalo hasil logikanya TRUE
  }else{
  	cout<<"False = 0"; //ini perintah print kalo hasilnya FALSE
  }
  if(p<=0 || p<=255) //ini sama kaya yang atas tapi beda logika, tanda "||" itu artinya OR (atau), jadi maksudnya "jika p<=0 ATAU p<=255"
  {
  	cout<<"\nTrue = 1"; //output logika OR jika hasilnya TRUE
  }else{
  	cout<<"\nFalse = 0"; //output logika OR jika hasilnya FALSE
  }
  return 0;
}
