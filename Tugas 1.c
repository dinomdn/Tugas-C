#include <stdio.h>

int main ()
{
    int w,x;
	char a,b;
	int p;
	printf("Dino Ramadhan\n");
	printf("14.111.2249");
	printf("Demo Struktur Kondisi\n");
	printf("----------------------\n");
	printf("Masukkan bilangan asli 1 : ");
	scanf("%s",&a);
	x =a;
	switch(w)
    		{
    		case 48:
				w = 0;
			break;
			case 49:
				w = 1;
			break;
			case 50:
				w = 2;
			break;
			case 51:
				w = 3;
			break;
			case 52:
				w = 4;
			break;
			case 53:
				w = 5;
			break;
			case 54:
				w = 6;
			break;
			case 55:
				w = 7;
			break;
			case 56:
				w = 8;
			break;
			case 57:
				w = 9;
			break;
			default:
				w = 0;
			}
	printf("Masukkan bilangan asli 2 : ");
	scanf("%s",&b);
	y =b;
			switch (x)
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
				x= 0;
			}
					if(w!=0 && x!=0)
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
									printf("Penjumlahan \t: %d + %d = %d \n",w,x,w+x);
									printf("Perkalian \t: %d x %d = %d \n",w,x,w*x);
								break;

									case 2:
									printf("\nContoh Operator Relasional\n");
									printf("-----------------------------\n");
									printf("Persamaan \t: %d == %d = ",w,x);
										if(w==x)
											printf("True\n");
										else
											printf("false\n");

									printf("Pertidaksamaan \t: %d != %d = ",w,x);
										if(w!=x)
											printf("True");
										else
											printf("false");
								break;
									case 3:
										printf("\nContoh Operator Logika\n");
										printf("Logika AND \t= %d && %d = %d\n",w,x,w&&x);
										printf("Logika OR \t= %d || %d = %d\n",w,x,w||x);
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
