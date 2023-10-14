#include <stdio.h>


int main(){
    int jumlahHarga, jumlahBayar, jumlahKembali;
    int jenisKembali[8]={100000,50000,20000,10000,5000,2000,1000,500};
    
    printf("\n");
    printf("Masukkan Jumlah Bayar: ");
    scanf("%d", &jumlahBayar);
    printf("Masukkan Jumlah Harga: ");
    scanf("%d", &jumlahHarga);
    printf("\n");

    jumlahKembali=jumlahBayar-jumlahHarga;

    if(jumlahKembali<0){
        printf("UANG PEMBAYARAN TIDAK CUKUP!!!\n");
    } else if(jumlahKembali==0){
        printf("Uang Pembayaran Pas, tidak ada kembalian!!!\n");
    } else{
        while(jumlahKembali != 0){
            for(int i=0; i<8; i++){
                if(jenisKembali[i]<=jumlahKembali){
                    printf("%d", jenisKembali[i]);
                    printf("\n");
                    jumlahKembali = jumlahKembali - jenisKembali[i];
                    break;
                }
            }
        }
    }

    return 0;
}