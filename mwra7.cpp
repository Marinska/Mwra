#include<stdio.h>

int main ()
{
    float angka[10]; //variable array dengan tipe float berjumlah 10 index
    int jumlah; //variable integer buat jumlah pengulangan
    printf("Masukan jumlah data : ");
    scanf("%d", &jumlah);
    
	for(int i=0;i<jumlah;i++) // i itu variable buat pengulangan sampai kondisi terpenuhi sesuai variable jumlah
	{
    printf("Masukkan Angka ke-%d : ",i+1); //disini variable i+1 karna buat nyesuain index dari array, karna array tidak dimulai dari 1 tapi dari 0, jadi index pertama array data itu data[0], nah ditambah 1 biar mulai dari 1
    scanf("%f", &angka[i]); // disini angka[i] maksudnya nilai dari index array, misal si i saat ini penggunalan pertama berarti nilai si i adalah 0, dan index data array yang akan diisi adalah data[0].
	}
	for(int z=0;z<jumlah;z++)
	{
    printf("Nilai angka ke-%d adalah %.2f\n", z, angka[z]); //disni penggunaan format baru dari %f yaitu %.xf, .x disni adalah jumlah angka setelah (,) koma buat angka desimal si float, karna disni .2f jadi maksudnya variable float dengan 2 angka dibelakang koma
	}

    return 0;
}
