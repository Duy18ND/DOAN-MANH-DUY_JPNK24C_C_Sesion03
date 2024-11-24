#include<stdio.h>
int main(){
	int num, reverse, thousand, hundred, ten, unit;

	
	printf("Nhap so nguyen co 4 chu so  ");
	scanf("%d",&num);
	
	if(num >= 9999 || num <= 999){
		printf("LOI HE THONG .........nhap lai so nguyen 4 chu so");
		return 1;
	}
	thousand = num / 1000;
	hundred = (num / 100) % 10;
	ten = (num / 10) % 10;
	unit = num % 10;
	
	reverse = unit * 1000 + ten * 100 + hundred * 10 + thousand;
	printf("So dao nguoc cua so %d la: %d ",num,reverse); 
	 	return 0; 

}
