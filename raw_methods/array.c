/* Lengkapi dengan identitas */

#include <stdio.h>

/* deklarasi type boolean */
#define boolean unsigned char
#define true 1
#define false 0

/* Konstanta. Lengkapi di bawah ini, harus menggunakan macro define. */


/* Deklarasi Type TabInt. Lengkapi di bawah ini. */



/* *** PROTOTYPE FUNGSI DAN PROSEDUR */
/* *** Membuat tabel kosong *** */
void MakeEmpty(TabInt * T);
/* I.S. sembarang */
/* F.S. Terbentuk tabel T kosong dengan ukuran maksimum NMax */
/* *** Test tabel kosong *** */
boolean IsEmpty (TabInt T);
/* Mengirimkan true jika tabel T kosong, mengirimkan false jika tidak */
/* *** Test tabel penuh *** */
boolean IsFull (TabInt T);
/* Mengirimkan true jika tabel T penuh, mengirimkan false jika tidak */
/* *** Baca/Tulis *** */
void BacaIsi (TabInt * T);
/* I.S. T sembarang */
/* F.S. tabel T terdefinisi */
/* Proses : membaca isi elemen T sampai pengguna mengetikkan angka -999. 
   Ada kemungkinan menghasilkan T kosong, jika nilai pertama yang diketikkan pengguna adalah -999. */
void TulisIsi (TabInt T);
/* Proses : Menuliskan isi tabel dengan traversal */
/* I.S. T boleh kosong */
/* F.S. Jika T tidak kosong : indeks dan elemen tabel ditulis berderet ke bawah
       Contoh: isi tabel T = {1,2,3,4}, ditulis ke layar: 
               [0]1
               [1]2
               [2]3
               [3]4
       Jika T kosong : Menulis "Tabel kosong" */
/* *** Operasi Lain *** */
int SumTabel (TabInt T); 
/* Menghasilkan hasil penjumlahan semua elemen tabel T */
float AvgTabel (TabInt T); 
/* Prekondisi : T tidak kosong */
/* Menghasilkan nilai rata-rata dari tabel T */
int CountX (TabInt T, int X);
/* Menghasilkan kemunculan X di tabel T */
int SearchIdx (TabInt T, int X);
/* Search apakah ada elemen tabel T yang bernilai X. */
/* Jika ada, menghasilkan indeks i terkecil, dengan elemen ke-i = X. */
/* Jika tidak ada, mengirimkan IdxUndef. */
/* Menghasilkan IdxUndef jika tabel T kosong. */
int ValMax (TabInt T);
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan nilai maksimum tabel */
int ValMin (TabInt T); 
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan nilai minimum tabel */
/* *** Mengirimkan indeks elemen bernilai ekstrem *** */
TabInt InverseTab (TabInt T);
/* Menghasilkan tabel dengan urutan tempat yang terbalik, yaitu : */
/* elemen pertama menjadi terakhir, */
/* elemen kedua menjadi elemen sebelum terakhir, dst.. */
/* Tabel kosong menghasilkan tabel kosong */
boolean IsSimetris (TabInt T);
/* Menghasilkan true jika tabel simetrik */
/* Tabel disebut simetrik jika: */
/*      elemen pertama = elemen terakhir, */
/*      elemen kedua = elemen sebelum terakhir, dan seterusnya */
/* Tabel kosong adalah tabel simetris */
void Sort (TabInt * T, boolean asc);
/* I.S. T boleh kosong */
/* F.S. T elemennya terurut menaik/membesar jika asc = true. */
/*      Jika asc = false, elemen T terurut menurun/mengecil. */
/* Algoritma yang digunakan bebas */

/* PROGRAM UTAMA. Jangan diutak-atik!! */
int main ()  {
	/* KAMUS */
	TabInt T1, T2;
	int pil;
	
	/* ALGORITMA */
	BacaIsi(&T1);
	TulisIsi(T1);
	scanf("%d",&pil);	
	switch(pil) {
		case 1 : {	/* Cek IsEmpty */
					if (IsEmpty(T1)) {
						printf("Tabel kosong\n");
					} else {
						printf("Tabel tidak kosong\n");
					}
					break;
		         }
		case 2 : {  /* Cek IsFull */
					if (IsFull(T1)) {
						printf("Tabel penuh\n");
					} else {
						printf("Tabel tidak penuh\n");
					}
					break;
		         }
		case 3 : {  /* Cek SumTabel */
					printf("%d\n",SumTabel(T1));
					break;
		         }
		case 4 : {  /* Cek AvgTabel */
					if (IsEmpty(T1)) {
						printf("AvgTabel tidak bisa dicek\n");
					} else {
						printf("%.2f\n",AvgTabel(T1));
					}
					break;
		         }
		case 5 : {  /* Cek CountX */
					printf("%d\n",CountX(T1,5));
					break;
		         }	
		case 6 : {  /* Cek SearchIdx */
					printf("%d\n",SearchIdx(T1,5));
					break;
		         }
		case 7 : {  /* Cek ValMax */
				    if (IsEmpty(T1)) {
						printf("ValMax tidak bisa dicek\n");
					} else {
						printf("%d\n",ValMax(T1));
					}
					break;
		         }
		case 8 : {  /* Cek ValMin */
					if (IsEmpty(T1)) {
						printf("ValMin tidak bisa dicek\n");
					} else {
						printf("%d\n",ValMin(T1));
					}
					break;
		         }
		case 9 : {  /* Cek InverseTab */
					T2 = InverseTab(T1);
					TulisIsi(T2);
					break;
		         }
		case 10 : {  /* Cek IsSimetris */
					if (IsSimetris(T1)) {
						printf("Tabel simetris\n");
					} else {
						printf("Tabel tidak simetris\n");
					}
					break;
		          }
		case 11 : { /* Cek Sort */
					Sort(&T1,true);
					TulisIsi(T1);
					Sort(&T1,false);
					TulisIsi(T1);
					break;
		          }
		default : { /* pil salah */
					printf("Pilihan salah\n");
		          }
	}
	return 0; 
}

/* REALISASI FUNGSI & PROSEDUR. Lengkapi di bawah ini. */
