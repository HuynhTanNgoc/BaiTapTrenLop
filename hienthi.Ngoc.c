/*Cho 2 s? nguy�n duong a, b v?i a <= b du?c nh?p t? b�n ph�m. 
Vi?t chuong tr�nh hi?n th? s? nguy�n (n) thu?c [a, b] v?i y�u c?u:
- Hi?n th? ra m�n h�nh t? ti?ng Anh vi?t thu?ng tuong ?ng n?u 1<= n <= 9.
- Hi?n th? ra m�n h�nh even n?u n l� s? ch?n v� n > 9.
- Hi?n th? ra m�n h�nh odd n?u n l� s? l? v� n > 9.
*/
#include"stdio.h"
//Khai b�o bi?n
int main(){
	int a, b, n;
	printf( "Nhap a va b (a<=b): ");
	scanf("%d%d", &a, &b);
	for(n=a ; n<=b; n++){
		if(n>=1 && n<=9){
			switch(n)
			{
				case  1: 
					printf("\none");break; 
				case  2:
					printf("\ntwo");break;
				case  3:
					printf("\nthree");break;
				case  4:
					printf("\nfour");break;
				case  5:
					printf("\nfive");break;
				case  6:
					printf("\nsix");break;
				case  7:
					printf("\nseven");break;
				case  8:	
					printf("\neight");break;
				case  9:
					printf("\nnine");break; 
					
			}
			
		}
		if (n>9 && n%2==0) printf("\neven");
	
	    if (n>9 && n%2!=0) printf("\nodd"); 	
	}
}  
