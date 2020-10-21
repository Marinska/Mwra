#include <stdio.h>
int main()
{
	char nama[10], alamat[100]; //ini pengenalan variable 'nama' sama 'alamat' dengan jumlah karakter yang ditampung tiap variable, jadi variable nama nampung 10 karakter trus alamat 100 karakter
	printf("Masukan nama anda = "); //ini buat tampilan input nama nanti
	gets(nama); //ini code buat mengambil data dari apa yang dimasukan beserta spasinya, kenapa gak pake scanf? kalo scanf dia cuma ngambil data sampai ketemu spasi, bisa diakalin pake [^\n] tapi ribet, mending pake gets aja, dia (gets) ngambil apapun yg ditulis sama user.
	printf("Masukan alamat anda = ");
	gets(alamat); 
	printf("\n--------------------\n"); //ini cuma buat pembates :v
	printf("Nama = %s", nama); //ini beda kaya bahasa sebelumnya, sekarang kita bisa langsung manggil variable dengan formatnya, contoh baris ini kita panggil variable nama, variablenya nanti bakal ditaro sesuai dimana format (%s) berada
	printf("\nAlamat = %s", alamat);
}
