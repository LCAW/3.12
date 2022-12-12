#include<stdio.h>
int main (){
// Getränke-Automat Version 1.0
//Test änderung

int einwurf=0;
	printf("Getränke Automat --- Bitte werfen Sie 1 Euro  ");
	scanf("%d",&einwurf);

if(einwurf==1) {
	printf("\nVielen Dank, bitte entnehmen Sie ihr Getränk");
}else{
	printf("\nSie haben kein 1 Euro Stueck eingeworfen.\n");}
return 0;
}
