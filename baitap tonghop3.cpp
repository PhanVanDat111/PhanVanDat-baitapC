#include<stdio.h>
#include<iostream>
int show_menu();

int main()
{
	long long tien_vnd;
	while(true)
	{
		int chose = show_menu();
		system("cls");
		switch(chose)
		{
			int usd;
			int eur;
			int gbp;
			int jpy;
			case 1:
				printf("Nhap so tien USD muon doi: ");
				scanf("%d", &usd);
				tien_vnd = usd * 23000;
				printf("%d\n", tien_vnd);
				break;
			case 2:
				printf("Nhap so tien EUR muon doi: ");
				scanf("%d", &eur);
				tien_vnd = eur * 26000;
				printf("%d\n", tien_vnd);
				break;
			case 3:
				printf("Nhap so tien GBP muon doi: ");
				scanf("%d", &gbp);
				tien_vnd = gbp * 32000;
				printf("%d\n", tien_vnd);
				break;
			case 4:
				printf("Nhap so tien JPY muon doi: ");
				scanf("%d", &jpy);
				tien_vnd = jpy * 167000;
				printf("%d\n", tien_vnd);
				break;
			case 5:
				//
				break;
			case 6:
				//
				break;
			case 7:
				//
				break;
			case 8:
				//
				break;
			
			
		}
	}
	
	
	return 0;
}

int show_menu()
{
	int chose;
	printf("============CHUONG TRINH CHUYEN DOI TIEN TE================\n");
	printf("1. USD to VND\n");
	printf("2. EUR to VND\n");
	printf("3. GBP to VND\n");
	printf("4. JPY to VND\n");
	printf("5. VND to USD\n");
	printf("6. VND to EUR\n");
	printf("7. VND to GBP\n");
	printf("8. VND to JPY\n");
	printf("\n");
	printf("Nhap don vi tien te ban muon chuyen doi(1-8): ");
	
	scanf("%d", &chose);
	return chose;
}

