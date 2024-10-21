#include <stdio.h>

int id_transaksi;
char tanggal_transaksi[11];
int jenis_transaksi, jumlah_bayar, total_belanja;
char nama_customer[100];

int pakaian(){
	int total;
	int long_dress = 350000, blous = 280000, celana = 250000, jilbab = 75000;
	int drs,bls,cln,jlb;
	printf("Jumlah beli dress  : ");
	scanf("%d",&drs);
	printf("Jumlah beli blous  : ");
	scanf("%d",&bls);
	printf("Jumlah beli celana : ");
	scanf("%d",&cln);
	printf("Jumlah beli jilbab : ");
	scanf("%d",&jlb);
	
	total = (long_dress*drs)+(blous*bls)+(celana*cln)+(jilbab*jlb);
	total_belanja = total;
	printf("\nTotal Belanja Anda Rp.%d",total);
}

int transaksi(){
	if(jenis_transaksi == 1){
		int cash;
		printf("Setor Uang\t  : ");
		scanf("%d",&cash);
		cash -= total_belanja;
		printf("\nPembayaran cash sukses dengan total belanja Rp.%d\n",total_belanja);
		printf("Kembalian anda Rp.%d\n",cash);
	}
	else if(jenis_transaksi = 2){
		printf("\nPembayaran via card sukses dengan total belanja Rp.%d",total_belanja);
	}
	else if(jenis_transaksi = 3){
		printf("\nPembayaran via QRIS sukses dengan total belanja Rp.%d",total_belanja);
	}
}

int main(){
	printf("|------------------------------|\n");
	printf("|  SELAMAT DATANG DI TOKO UMI  |\n");
	printf("|------------------------------|\n");
	
    printf("\nID Transaksi\t : ");
    scanf("%d", &id_transaksi);
    getchar();

    printf("Tanggal Transaksi\n(dd/mm/yyyy)\t : ");
    fgets(tanggal_transaksi, sizeof(tanggal_transaksi), stdin);

    printf("\nMetode Pembayaran\n1. Cash\n2. Debit Card\n3. QRIS\nPilih (1/2/3)\t : ");
    scanf("%d", &jenis_transaksi);
    getchar();
    
    printf("\nNama Customer\t : ");
    fgets(nama_customer, sizeof(nama_customer), stdin);
    
    printf("\nKatentuan Harga Barang\n");
    printf("|-------------------------------|\n");
    printf("|  Nama Barang  |  Harga Barang |\n");
    printf("|-------------------------------|\n");
	printf("|  Long dress   |  Rp.350.000,- |\n");
	printf("|  Blous        |  Rp.280.000,- |\n");
	printf("|  Celana       |  Rp.250.000,- |\n");
	printf("|  Jilbab       |  Rp. 75.000,- |\n");
    printf("|-------------------------------|\n");
    pakaian();
    
    printf("\n\n# Data Transaksi #\n");
    printf("ID Transaksi\t  : %d\n", id_transaksi);
    printf("Nama Customer\t  : %s", nama_customer);
    printf("Tanggal Transaksi : %s\n", tanggal_transaksi);
    if(jenis_transaksi == 1){
    	printf("Jenis Transaksi\t  : Cash\n");
	}
    else if(jenis_transaksi == 2){
    	printf("Jenis Transaksi\t  : Debit Card\n");
	}
    else if(jenis_transaksi == 3){
    	printf("Jenis Transaksi\t  : QRIS\n");
	}
    transaksi();
    
    printf("\nTerima Kasih sudah berbelanja di Toko Umi!\n");
    return 0;
}