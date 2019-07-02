#include <iostream.h>
#include <conio.h>
void main()
{
struct data_tanggal
{
int tanggal;
int bulan;
int tahun;
};
data_tanggal tgl1 , tg12;
tgl1.tanggal = 1;
tgl1.bulan = 9;
tgl1.tahun = 1979;
tg12 = tgl1;
// atau
tg12.tanggal = tgl1.tanggal;
tg12.bulan = tgl1.bulan;
tg12.tahun = tg12.tahun;
cout << tgl1.tanggal << "/" << tgl1.bulan << "/" << tgl1.tahun <<
endl;
cout << tg12.tanggal << "/" << tg12.bulan << "/" << tg12.tahun <<
endl;
getch();
}

typedef struct
{
char kode [5];
char nama [20];
int jml;
float harga;
} psd;
//pendefinisian nama variabel baru
psd persediaan_barang;
