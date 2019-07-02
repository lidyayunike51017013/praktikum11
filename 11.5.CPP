#include <iostream.h>
#include <conio.h>
#include <iostream.h>
main ()
{
 struct lingkaran
 {
   float jari;
   float keliling;
   float luas;
 }

 lingkaran;
 cout<<"Masukkan Jari - Jari Lingkaran : ";
 cin>>lingkaran.jari;
 lingkaran.keliling=2*3.14259*lingkaran.jari;
 lingkaran.luas=3.14259*lingkaran.jari*lingkaran.jari;
 cout<<"keliling Lingkaran = "<<lingkaran.keliling;
 cout<<"Luas lingkaran = "<<lingkaran.luas;
 getch();
}