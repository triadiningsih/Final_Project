#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

	int input;
	do {
		system("cls");
		printf("              Selamat Datang di Buku Telepon            \n");
		printf("           Silahkan input menu yang Anda sukai!!        \n");
		printf("========================================================\n");
		printf("\n");
		printf("--------------------------------------------------------\n");
		printf("|                      MENU PROGRAM                    |\n");
		printf("--------------------------------------------------------\n");
		printf("|                  1. Tambah Kontak                    |\n");
		printf("|                  2. Edit Kontak                      |\n");
		printf("|                  3. Hapus Kontak                     |\n");
		printf("|                  4. Lihat Kontak                     |\n");
		printf("|                  5. Cari Kontak                      |\n");
		printf("|                  0. Keluar                           |\n");
		printf("--------------------------------------------------------\n");
		printf("Input pilihan yang Anda inginkan : ");
		scanf("%d", &input);
		system("cls");

		switch(input){

			case 1:
                printf("Halo");
				break;
			case 2:
                printf("Halo");
				break;

			case 3:
                printf("Halo");
				break;

			case 4:
                printf("Halo");
				break;

			case 5 :
                printf("Halo");
                break;


			case 0 :
				printf("Anda Telah Keluar Dari Program, Terima Kasih!!");
				break;

			default:{
				printf("Input Menu Salah");
				break;
			}
		}
	} while(input!=0);


	return 0;
}
