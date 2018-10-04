#include<iostream>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<math.h>
#define enter '\r'
#define tit '\a'
#define maks 100

garis (){
	
	// 5170411188 ITA ARKE KRISTANTI
	for (int a=1; a<=28;a++){
	
	printf("%s", "*");
	}
	printf("\n");
	}
	
	main (){
		int  a[maks];
		int i, varian, deviasi, x, j, tot1, tot2, rata2;
		tot1=0;
		tot2=0;
		printf("masukkan jumlah biangan : ");
		scanf("%d", &x);
		printf("\n\n");
		for (i=0;i<x; i++){
		printf("masukkan biangan ke-%d : ", i+1);
		scanf("%d", &a[i]);
		
		tot1=tot1+a[i];
		tot2=tot2+(a[i]*a[i]);
	}
	

	printf("\a");
	printf("%-15s|%-5s|%-5s|\n", "Bilangan ke", "x", "x.x");
	garis();
	for(i=0; i<x; i++){
		printf("%-15d|%-5d|%-5d|\n", i+1, a[i], a[i]*a[i]);
	}
	
	garis();
	printf("%-15s|%-5d|%-5d|\n", "total", tot1, tot2);
	garis();
	rata2 = tot1/x;
	varian = (tot2-tot1*tot1/x)/x-1;
	deviasi = sqrt(varian);
	printf("%-15s|%-11d|\n", "Rata-rata", rata2);
	garis();
	printf("%-15s|%-11d|\n", "Varian", varian);
	garis();
	printf("%-15s|%-11d|\n", "Standar deviasi", deviasi);
	garis();
	getch();
}
