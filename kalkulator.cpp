#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*NAMA	: Anton Saputra
  NIM	: 3411151080
  Kelas	: SIE-B*/

void tambah();
void kurang();
void kali();
void pangkat();
void fungsi();


int main(){
system("cls");
  int a,x,y,z,i;
  char coba;
  
  menu:
  system("cls");
  printf ("Silakan Pilih\n");
  printf ("\t1. Menghitung x+y\n");
  printf ("\t2. Menghitung x-y\n");
  printf ("\t3. Menghitung x*y\n");
  printf ("\t4. Menghitung x^y\n");
  printf ("\t5. Menghitung f(x)=2x^2-3y+1\n");
  printf ("\t6. Keluar\n");
  printf ("=====================================\n");
  printf ("Masukkan Pilihan : ");
  scanf("%d",&a);
  
  switch (a){
	 case 1: 
	 	system("cls");
	 	tambah();
	 	getch();
	 	goto menu;
	 	break;
	case 2: 
	 	system("cls");
	 	kurang();
	 	getch();
	 	goto menu;
	 	break;
	case 3: 
	 	system("cls");
	 	kali();
	 	getch();
	 	goto menu;
		break;	
	case 4: 
	 	system("cls");
	 	pangkat();
	 	getch();
	 	goto menu;
		break;	
	case 5: 
	 	system("cls");
	 	fungsi();
        getch();
	 	goto menu;
		break;
	case 6:
		system("cls");
		printf("Terimakasih.");
		break;
	 default:
	 	system("cls");
	 	printf ("Pilihan Anda Salah");
	 	getch();
		 goto menu;
	 	break;
  }
  return 0;
}

void tambah(){
	int x,y,z;
	printf ("Masukkan Nilai x : ");
	scanf ("%i",&x);
	printf ("Masukkan Nilai y : ");
	scanf ("%i",&y);
	z=x+y;
	printf("Hasilnya Adalah : %i",z);
}

void kurang(){
	int x,y,z;
	printf ("Masukkan Nilai x : ");
	 	scanf ("%i",&x);
	 	printf ("Masukkan Nilai y : ");
	 	scanf ("%i",&y);
	 	z=x-y;
	 	printf("Hasilnya Adalah : %i",z);
}

void kali(){
	int x,y,z;
	printf ("Masukkan Nilai x : ");
	 	scanf ("%i",&x);
	 	printf ("Masukkan Nilai y : ");
	 	scanf ("%i",&y);
	 	z=x*y;
	 	printf("Hasilnya Adalah : %i",z); 
}

void pangkat(){
	int i,x,y,z;
	printf ("Masukkan Nilai x : ");
	 	scanf ("%i",&x);
	 	printf ("Masukkan Nilai y : ");
	 	scanf ("%i",&y);
	 	z=1;
	 	 for (i=1; i<=y;i++){
            z = z * x;
        }
	 	printf("Hasilnya Adalah : %i",z);
}

void fungsi(){
	int x,y,z,i;
	printf ("Masukkan Nilai x : ");
	 	scanf ("%i",&x);
	 	printf ("Masukkan Nilai y : ");
	 	scanf ("%i",&y);
	 	z=1;
	 	 for (i=x; i<=y;i++){
            z = (2*(i*i))-((3*i)+1);
            printf("Hasil : %i\n",z);
        }
}
