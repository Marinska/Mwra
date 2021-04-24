#include <stdio.h>
#include <iostream>
#include <conio.h>
#define MAX 8   //jumlah maksimal index pada antrian

using namespace std;

typedef struct{
               int data[MAX];
               int head;
               int tail;
   }Queue;
   Queue antrian;

void Create(){
   antrian.head=antrian.tail=-1;
   }
int IsEmpty(){
   if(antrian.tail==-1)
       return 1;
   else
       return 0;
   }
int IsFull(){
    if(antrian.tail==MAX-1)
        return 1;
    else
        return 0;
}

Enqueue(int data)
{
        if(IsEmpty()==1)
        {
            antrian.head=antrian.tail=0;
            antrian.data[antrian.tail]=data;
            printf("%d masuk",antrian.data[antrian.tail]);
        } else
        if(IsFull()==0)
        {
            antrian.tail++;
            antrian.data[antrian.tail]=data;
            printf("%d masuk",antrian.data[antrian.tail]);
        }
}

int Dequeue()
{
        int i;
        int e = antrian.data[antrian.head];
        for(i=antrian.head; i<=antrian.tail-1;i++)
        {
            antrian.data[i]=antrian.data[i+1];
        }
        antrian.tail--;
        return e;
}

void Clear()
{
    antrian.head=antrian.tail=-1;
    printf("CLEAR");
}

void Tampil()
{
    if(IsEmpty()==0)
    {
        for(int i=antrian.head;i<=antrian.tail;i++)
        {
            printf(" %d",antrian.data[i]);
        }
    }else {
	printf("Data antrian kosong!\n");
	}
}

void Total()
{
    if(IsEmpty()==0)
    {
    	int sum;
    	sum = 0;
        for(int i=antrian.head;i<=antrian.tail;i++)
        {
        	sum = sum + antrian.data[i];   //disini kita taro nilai data dari antrian pada variable sum dan dijumlahkan pada tiap pengunalangan, seperti deret aritmatika
        }
        printf("Jumlah nilai total dari data antrian adalah %d", sum);
    }else printf("Nilai jumlah adalah 0 atau tidak ada karena data antrian kosong!\n");
}

void Rata()
{
    if(IsEmpty()==0)
    {
    	float r, r1, n;  //dibikin tipe data float biar nanti jika jumlah data dan jumlah nilai tidak genap atau menghasilkan nilai desimal, tetap dapat ditampilkan
    	r = 0;
    	r1 = 0;
    	n = 0;
        for(int i=antrian.head;i<=antrian.tail;i++)
        {
        	r = r + antrian.data[i];
        	n++;    //variable n untuk menghitung jumlah index yang tersedia pada antrian
        	r1= r/n;   //nilai dari jumlah data dibagi jumlah index
        }
        printf("Nilai rata-rata data antrian adalah %.2f", r1);  //Jangan lupa format %.nf , n adalah jumlah angka dibelakang koma yang akan ditampilkan
    }else printf("Nilai rata-rata adalah 0 atau tidak ada karena data antrian kosong!\n");
}

void XMin(){
	if(IsEmpty()==0)
    {
    	int min;
    	min = antrian.data[0];  //nilai antrian pada index ke-1 dibuat sebagai default buat jaga-jaga misal nanti ada proses Dequeue setelahnya
        for(int i=antrian.head;i<=antrian.tail;i++)
        {
        	if(antrian.data[i]<min)    //jika nilai data pada index setelah index ke-1 pada antrian lebih kecil dari sebelumnya maka nilai min akan mengikuti nilai terkecil tersebut
        	{
        		min = antrian.data[i];
			}
        }
        printf("Nilai data paling kecil pada antrian adalah %d", min);
    }else printf("data antrian kosong!\n");
}

void XMax(){
	if(IsEmpty()==0)
    {
    	int max = antrian.data[0];
        for(int i=antrian.head;i<=antrian.tail;i++)
        {
        	if(antrian.data[i]>max)    //jika nilai data pada index setelah index ke-1 pada antrian lebih kecil dari sebelumnya maka nilai min akan mengikuti nilai terkecil tersebut
        	{
        		max = antrian.data[i];
			}
        }
        printf("Nilai data paling besar pada antrian adalah %d", max);
    }else printf("data antrian kosong!\n");
	
}

void Fd(){
    if(IsEmpty()==0)
    {
    	int cari, ind;
    	ind = 0;
    	printf("Masukan nilai yang ingin dicari : ");
    	scanf("%d", &cari);    //memasukan nilai data yang ingin dicari
        for(int i=antrian.head;i<=antrian.tail;i++)
        {
            if(antrian.data[i]==cari){     //kondisi jika data ditemukan
            	ind++;    //menghitung jumlah data yang ditemukan
			}
        }
        if(ind==0)   //Kondisi jika ditemukan maupun tidaknya data
        {
        	printf("Tidak ditemukan data sesuai dengan nilai yang anda cari");  //Jika tidak ditemukan
		}else{
			printf("Ditemukan %d data yang sesuai dengan nilai yang anda cari", ind);  //Jika ditemukan
		}
    }else {
	printf("data antrian kosong!\n");
	}
}

void Edit(){
	if(IsEmpty()==0)
	{
		int index, edit;
		for(int i=antrian.head;i<=antrian.tail;i++)
        {
            printf("Berikut antrian yang tersedia %d",antrian.data[i]);
        }
        printf("\nPada index ke berapa data yang ingin anda ubah : ");
        scanf("%d", &index);
        printf("Nilai data antrian pada index ke-%d adalah %d", index, antrian.data[index-1]);
        printf("\nMasukan nilai data baru sebagai pengganti : ");
        scanf("%d", &edit);
        antrian.data[index-1] = edit;   //pengubahan data dengan nilai yang baru
        printf("Nilai data baru telah diinputkan! Antrian telah diupdate!");
	}else{
		
	}
}

main()
{
    int m;
    int data;
    Create();
    do{
      cout<<endl<<endl;
        cout<<"  =============================="<<endl;
        cout<<"  =\t  PROGRAM QUEUE        ="<<endl;
        cout<<"  =============================="<<endl;
        cout<<"  =  1. ENQUEUE                = "<<endl;
        cout<<"  =  2. DEQUEUE                = "<<endl;
        cout<<"  =  3. TAMPIL                 = "<<endl;
        cout<<"  =  4. CLEAR                  = "<<endl;
        cout<<"  =  5. JUMLAH                 = "<<endl;
        cout<<"  =  6. RATA-RATA              = "<<endl;
        cout<<"  =  7. NILAI TERKECIL         = "<<endl;
        cout<<"  =  8. NILAI TERBESAR         = "<<endl;
        cout<<"  =  9. CARI DATA              = "<<endl;
        cout<<"  =  10. EDIT DATA             = "<<endl;
        cout<<"  =  11. EXIT                  ="<<endl;
      cout<<"  =============================="<<endl;
        cout<<"  Masukan Pilihan : ";cin>>m;
        switch(m)
        {
                case 1:
                cout<<"Masukan Data : ";cin>>data;
                Enqueue(data);
                break;

                case 2:
                Dequeue();
                break;

                case 3:
                Tampil();
                break;

                case 4:
                Clear();
                break;
                
                case 5:
                Total();
                break;
                
                case 6:
                Rata();
                break;
                
                case 7:
                XMin();
                break;
                
                case 8:
                XMax();
                break;
                
                case 9:
                Fd();
                break;
                
                case 10:
                Edit();
                break;

                case 11:

                break;
        }

        getch();

    }
   while(m!=12);
}
