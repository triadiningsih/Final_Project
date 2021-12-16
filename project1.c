#include<stdio.h>
#include<stdlib.h>
struct data_telepon{
    int no_telepon;
    char nama[50];
    char alamat[50];
    char email[50];
    char note[50];
    int indexing;
}
struct data_telepon hash_table[100];
int domain_hashing(int n);
void init(int n);
int main(){
    int n;
    printf("Jumlah domain kontak :");scanf("%d",&n);
    init(n);

    domain_hashing(n);
    return 0;
}
void init(int n){
    for(int i=0;i<n;i++){
        hash_table[i]=NULL;
    }
}
int domain_hashing(int n){
    for(int i=0;i<n;i++){
        
    }
}
