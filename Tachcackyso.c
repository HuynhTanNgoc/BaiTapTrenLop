#include<stdio.h>
// 
int main() {
    // Khai báo bien 
    // Bien S = 16
    // Bien n = 10564
   int S, n, tts;
   
   n = 10564;
   
   // In ra 1
  	tts = n/10000;
  	printf("%d", tts);
  	
   // In ra 0
  int sodu = n%10000;
   	tts = sodu/1000;
   	printf("\n%d", tts);
   	
    // In ra 5
  	sodu = n%1000;
   	tts = sodu/100;
   	printf("\n%d", tts);
   

    // In ra 6
 	sodu = n%100;
   	tts = sodu/10;
   	printf("\n%d", tts);
   	
    // In ra 4
	tts = n%10;
   	printf("\n%d", tts);

}
