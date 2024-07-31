#include <stdio.h>

int jumlahPecahan = 0;

void minPecahan(int jumlah){
	//Deklarasikan uang pecahan yang dimiliki dalam satu array
	int uang[10] = {100,200,500,1000,2000,5000,10000,20000,50000,100000};
	int i;
	for(i = 9;i>=0;i--){
		while(jumlah >= uang[i]){
			jumlah = jumlah-uang[i];
			printf("%d ",uang[i]);
			jumlahPecahan = jumlahPecahan+1;
		}
	}
	
	
}
int main(){
		int jlhUang;
		printf("Masukan jumlah uang ");
		scanf("%d",&jlhUang);
		minPecahan(jlhUang);
		printf("Pecahan yang disediakan: %d\n",jumlahPecahan);
		return 0;
	}
