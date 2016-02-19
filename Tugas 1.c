#include <stdio.h>

int main(){
	printf("Dino Ramadhan\n");
	printf("14.111.2249\n");
	int x,y;
	char a,b;
	int p;
	printf("Demo Struktur Kondisi\n");
	printf("----------------------\n");
	printf("Masukkan bilangan asli 1 : ");
	scanf("%s",&a);
	x =a;
	switch(x)
    		{
    		case 48:
				x = 0;
			break;
			case 49:
				x = 1;
			break;
			case 50:
				x = 2;
			break;
			case 51:
				x = 3;
			break;
			case 52:
				x = 4;
			break;
			case 53:
				x = 5;
			break;
			case 54:
				x = 6;
			break;
			case 55:
				x = 7;
			break;
			case 56:
				x = 8;
			break;
			case 57:
				x = 9;
			break;
			default:
				x = 0;
			}
	printf("Masukkan bilangan asli 2 : ");
	scanf("%s",&b);
	y =b;
			switch (y)
			{
			case 48:
				y = 0;
			break;
			case 49:
				y = 1;
			break;
			case 50:
				y = 2;
			break;
			case 51:
				y = 3;
			break;
			case 52:
				y = 4;
			break;
			case 53:
				y = 5;
			break;
			case 54:
				y = 6;
			break;
			case 55:
				y = 7;
			break;
			case 56:
				y = 8;
			break;
			case 57:
				y = 9;
			break;
			default:
				y= 0;
			}
					if(x!=0 && y!=0)
						{
						printf("\n\nJenis Operator\n");
						printf("--------------------\n");
						printf("1. Contoh Operator Aritmatika\n");
						printf("2. Contoh Operator Relasional\n");
						printf("3. Contoh Operator Logical\n");
						printf("Masukkan pilihan = ");
						scanf("%d",&p);
							switch(p)
							{
								case 1:
									printf("\nContoh Operator Aritmatika\n");
									printf("-----------------------------\n");
									printf("Penjumlahan \t: %d + %d = %d \n",x,y,x+y);
									printf("Perkalian \t: %d x %d = %d \n",x,y,x*y);	
								break;
								
									case 2:
									printf("\nContoh Operator Relasional\n");
									printf("-----------------------------\n");
									printf("Persamaan \t: %d == %d = ",x,y);
										if(x==y)
											printf("True\n");
										else
											printf("false\n");
											
									printf("Pertidaksamaan \t: %d != %d = ",x,y);
										if(x!=y)
											printf("True");
										else
											printf("false");	
								break;
									case 3:
										printf("\nContoh Operator Logika\n");
										printf("Logika AND \t= %d && %d = %d\n",x,y,x&&y);
										printf("Logika OR \t= %d || %d = %d\n",x,y,x||y);
									break;
								
								default:
									printf("pilihan tidak valid");
							}
						
						}
					else
						printf("\nmasukan tidak valid");
	getch();
	return 0;

}
