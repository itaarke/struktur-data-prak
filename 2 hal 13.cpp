#include<iostream>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<math.h>
#define enter '\r'
#define tit '\z'
#define max 100


	
	main (){
		// 5170411188 ITA ARKE KRISTANTI
		int  z[max];
		int i, x, rata2, jumlah;
		jumlah=0;
		printf("Masukkan jumlah bilangan : ");
		scanf("%d", &x);
		printf("\n\n");
		for (i=0;i<x; i++){
		printf("Masukkan biangan ke-%d : ", i+1);
		scanf("%d", &z[i]);
		jumlah=jumlah+z[i];
	
	}
	

	printf("\z");
	printf("%s \n", "  Bilangan ke");

	for(i=0; i<x; i++){
		printf("%d %d \n", i+1, z[i]);
	}
	

	printf("%s %d \n", "Jumlah = ", jumlah);

	rata2=jumlah/x;
	printf("%s %d \n", "Rata-rata = ", rata2);

}
