/*Cho 2 s? nguyęn duong a, b v?i a <= b du?c nh?p t? bŕn phím. 
Vi?t chuong trěnh hi?n th? s? nguyęn (n) thu?c [a, b] v?i yęu c?u:
- Hi?n th? ra mŕn hěnh t? ti?ng Anh vi?t thu?ng tuong ?ng n?u 1<= n <= 9.
- Hi?n th? ra mŕn hěnh even n?u n lŕ s? ch?n vŕ n > 9.
- Hi?n th? ra mŕn hěnh odd n?u n lŕ s? l? vŕ n > 9.
*/
#include"stdio.h"
//Khai báo bi?n
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
