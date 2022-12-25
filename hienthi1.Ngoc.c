/*1. Cho s? nguyên n >=1 du?c nh?p t? bàn phím. Vi?t chuong trình:
- Hi?n th? ra màn hình t? ti?ng Anh vi?t thu?ng tuong ?ng v?i
n n?u 1<= n <= 9.
- Hi?n th? ra màn hình Greater than 9 tru?ng h?p ngu?c l?i.
*/

#include"stdio.h"
int main(){
	//Khai bao bien:
	int n;
	printf( "Nhap n (n>=1): ");
	scanf("%d", &n);
	//Xu ly va in ket qua:
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
			default:
				printf("Greater than 9");
			}
					
		}
		
		
