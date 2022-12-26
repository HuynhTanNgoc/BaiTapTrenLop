/*
Cho so nguyên duong n voi 10000 <= n <= 99999 duoc nhap tu bàn phím.
 In ra màn hình tong các ký so cua n.
vidu: nhap n = 10564, ket qua in ra màn hình: 16.
*/

#include"stdio.h"

int main(){
	//khai bao bien
	int n, tachso, tongkyso = 0;
	printf("Nhap n = ");
	scanf("%d", &n);

	//Xy ly va in ket qua
	if(n>=10000 && n<=99999){
		for(;n>0;){
			tachso = n % 10; //lay du
			tongkyso = tongkyso + tachso;
			n = n / 10; //lay phan nguyen sau do quay lai vong lap
		//	if(n/10==0){//Neu n chia lay phan nguyen bang 0 thi
		//		tongkyso = tongkyso + (n%10); // tongkyso bang tongkyso cong cho phan du cua n  
		//		break;	// Ket thuc vong lap.}
		}
		printf("Tong cac ky so la: %d", tongkyso);
	}else
		printf("\nNhap n khong dung. Vui long nhap lai!");	
}
