#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<unistd.h>
struct data{
	char nama[100];
	char domain[50];
	char nomber[12];
	struct data *next;
};
struct data *buku_telepon[50];
//null exception hash_table
void init(int);
//list telepon
void *list(int);
int item=0;
int main() {
	int input,n_domain,full;
	char konfim;
	printf("              Selamat Datang di Buku Telepon            \n");
	printf("Jumlah Domain Telepon:");scanf("%d",&n_domain);
	init(n_domain);
	do {
	sleep(5);
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
                do{
					printf("|                  Domain Kontak                    |\n");
					struct data *sub, *empty;
					sub=malloc(sizeof(struct data));
					sub->next=NULL;//Petanda Sudah Ada Domain
					printf("\nAlokasi Domain Barang:\n");
					fflush(stdin);
					printf("Domain Barang ke %i:",item+1);scanf("%[^\n]",&sub->domain);fflush(stdin);
					buku_telepon[item]=sub;
					++item;
					full=item;
					empty=malloc(sizeof(struct data));
					empty=NULL;
					buku_telepon[full]=empty;//Tidak Ada Domain
					printf("Lagi(y|t) :");scanf("%c",&konfim);
				}while(konfim=='y');
				list(full);
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
void init(int n_domain){
	for(int i=0;i<n_domain;i++){
		buku_telepon[i]=NULL;
	}
}
void *list(int full){
	int pilihan;
	printf("|                  Domain Kontak                    |\n");
	printf("List Domain:\n");
	for(int i=0;i<full;i++){
		printf("%d.%s\n",i+1,buku_telepon[i]->domain);
	}
	printf("Pilih Domain:");scanf("")
}
