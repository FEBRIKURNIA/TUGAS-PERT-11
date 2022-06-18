#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <iomanip.h>
#include <windows.h>

main()
{
	 char nama[10][20],nip[10][10],jbt[10][10];
    int a,jp;
    a=1;
    system("color 0B");
    cout<<endl<<"Febri Kurniawan (21101152620068)"<<endl<<endl;

    cout<<"=================================="<<endl;
    cout<<"=      Program Tabel Pegawai     ="<<endl;
    cout<<"=================================="<<endl;
    cout<<"Masukkan Jumlah Pegawai : ";
    cin>>jp;
    cout<<"=================================="<<endl;
    clrscr();
    

    for (a=1; a<=jp; a++)
    {
    	cout<<"Masukkan Nama Pegawai     : ";
      gets(nama[a]);

      cout<<"Masukkan Nip Pegawai      : ";
      gets(nip[a]);

      cout<<"Masukkan Jabatan Pegawai  : ";
      gets(jbt[a]);
      cout<<"=================================="<<endl;
    }
      system("color 0E");
      clrscr();
    	cout<<"======================================================"<<endl;
		cout<<"|No|Nama            |Nip            |Jabatan         |"<<endl;
		cout<<"======================================================"<<endl;
    for (a=1; a<=jp; a++)
    {
		cout<<"|"<<setiosflags(ios::left)<<setw(2)<<a<<"|";

      cout<<setiosflags(ios::left)<<setw(16)<<nama[a]<<"|";

      cout<<setiosflags(ios::left)<<setw(15)<<nip[a]<<"|";

      cout<<setiosflags(ios::left)<<setw(16)<<jbt[a]<<"|"<<endl;

    }
      cout<<"======================================================"<<endl;
    getch();
}
