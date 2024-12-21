#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	// adet = Piece, numara = Number, ucret = Price, ek_ucret = Extra Price, Gecici = Temporary

	char b, esc = 27;
	int adet, numara, ucret, ek_ucret, deneme;
	do
	{
		//Main screen
		system("cls");

		system("color F1");

		printf("\n\n\t\t\t\t╔══════════════════════════════════╗");
		for (int i = 0; i < 2; i++)
		{
			printf("\n\t\t\t\t║\t\t\t\t   ║");
		}
		printf("\n\t\t\t\t║     WELCOME TO VIRTUAL CAFE      ║");
		for (int c = 0; c < 2; c++)
		{
			printf("\n\t\t\t\t║\t\t\t\t   ║");
		}
		printf("\n\t\t\t\t║      Press D or d to continue    ║\n\t\t\t\t║                           \t   ║\n\t\t\t        ║	 Press ESC to exit	   ║");
		for (int e = 0; e < 2; e++)
		{
			printf("\n\t\t\t\t║\t\t\t\t   ║");
		}
		printf("\n\t\t\t\t╚══════════════════════════════════╝");
		// Pressing ESC on main screen
		b = _getch();
		if (b == 27) {
			system("cls");
			system("color F1");
			printf("\n\t\t\t\tAre you sure you want to exit? (Y/N)");
			long telk1;
			telk1 = _getch();
			switch (telk1)
			{
			case 'y': printf("\n\t\t\t\t\t   Exiting...");
				return 27;
			case 'n':
			default:
				break;
			}
		} // Coffe menu page
		else if (b == 'D' || b == 'd')
		{
			system("cls");

			printf("\n\n\t\t\t\t\t\tCOFFEE VARIETIES\n\t\t\t\t     _____________________________________\n\n\t\t\t\t\t 1- TURKISH COFFEE       40TL\n\n\t\t\t\t\t 2- ESPRESSO             33TL\n\n\t\t\t\t\t 3- MOCHA                70TL\n\n\t\t\t\t\t 4- AMERICANO            47TL\n\n\t\t\t\t\t 5- CAPPUCINO            52TL\n\n\t\t\t\t\t 6- CAFFE LATTE          54TL\n\n\t\t\t\t\t 7- HOT CHOCOLATE        69TL\n\n\t\t\t\t\t 8- SALEP                73TL\n\n\n\n\t\t\t\t\t Please make your selection: ");
			// Pressing ESC and exiting
			long gec = _getch();
			if (gec == 27) {
				system("cls");
				system("color F1");
				printf("\n\t\t\t\tAre you sure you want to exit? (Y/N)");
				long telk;
				telk = _getch();
				switch (telk)
				{
				case 'y': printf("\n\t\t\t\t\t    Exiting...");
					return 27;
				case 'n':
				default:
					break;
				}
			}
			else if (gec == '1')
			{
				system("cls");
				system("color E0");

				printf("\n\n\n\t\t\t\t\t TURKISH COFFEE MENU\n\t\t\t\t_____________________________________\n\n\t\t\t\t1- TURKISH COFFEE WITH MILK       49TL\n\n\t\t\t\t2- TURKISH COFFEE WITH GUM MASTIC 50TL\n\n\t\t\t\t3- CHOCOLATE TURKISH COFFEE       50TL\n\n\t\t\t\t4- REGULAR TURKISH COFFEE         40TL\n\n\n\t\t\t\t   Please make your selection: ");
				// Turkish coffe(s) submenu
				long numara = _getch();
				switch (numara)
				{
				case '1': system("cls"); system("color E0"); printf("\n\n\t\t\t\t\tHow many TURKISH COFFEE WITH MILK would you like?\n\n\t\t\t\t\tEnter quantity: ");
					scanf_s("%d", &adet); printf("\n\n\t\t\t\t Total amount to be paid: %d", adet * 49); printf("\n\t\t\t\t Enter the amount you will pay: ");
					scanf_s("%d", &ucret);
					while (ucret < adet * 49) {
						system("cls");
						system("color E0");
						printf("\n\n\t\t\t\tINSUFFICIENT PAYMENT! Please add extra payment:\n\t\t\t\tTotal amount to be paid: %d\n\t\t\t\tAmount paid so far: %d\n\t\t\t\tEnter extra payment: ", adet * 49, ucret);
						scanf_s("%d", &ek_ucret);
						ucret += ek_ucret;
					} system("cls");
					system("color E0");
					printf("\n\n\n\t\t\t\tPayment received for %d TURKISH COFFEE WITH MILK totaling %d TL.\n\t\t\t\t    Refund: %d\n\t\t\t\t   ENJOY YOUR COFFEE. PLEASE VISIT AGAIN", adet, adet * 49, ucret - adet * 49);
					char gecici;
					gecici = _getch(); break;

				case '2': system("cls"); system("color E0"); printf("\n\n\t\t\t\t\tHow many TURKISH COFFEE WITH GUM MASTIC would you like?\n\n\t\t\t\t\tEnter quantity: ");
					scanf_s("%d", &adet); printf("\n\n\t\t\t\t Total amount to be paid: %d", adet * 50); printf("\n\t\t\t\t Enter the amount you will pay: ");
					scanf_s("%d", &ucret);
					while (ucret < adet * 50) {
						system("cls");
						system("color E0");
						printf("\n\n\t\t\t\tINSUFFICIENT PAYMENT! Please add extra payment:\n\t\t\t\tTotal amount to be paid: %d\n\t\t\t\tAmount paid so far: %d\n\t\t\t\tEnter extra payment: ", adet * 50, ucret);
						scanf_s("%d", &ek_ucret);
						ucret += ek_ucret;
					} system("cls");
					system("color E0");
					printf("\n\n\n\t\t\t\tPayment received for %d TURKISH COFFEE WITH GUM MASTIC totaling %d TL.\n\t\t\t\t    Refund: %d\n\t\t\t\t   ENJOY YOUR COFFEE. PLEASE VISIT AGAIN", adet, adet * 50, ucret - adet * 50);
					char gecici1;
					gecici1 = _getch(); break;
				case '3': system("cls"); system("color E0"); printf("\n\n\t\t\t\t\tHow many CHOCOLATE TURKISH COFFEE would you like?\n\n\t\t\t\t\tEnter quantity: ");
					scanf_s("%d", &adet); printf("\n\n\t\t\t\t Total amount to be paid: %d", adet * 50); printf("\n\t\t\t\t Enter the amount you will pay: ");
					scanf_s("%d", &ucret);
					while (ucret < adet * 50) {
						system("cls");
						system("color E0");
						printf("\n\n\t\t\t\tINSUFFICIENT PAYMENT! Please add extra payment:\n\t\t\t\tTotal amount to be paid: %d\n\t\t\t\tAmount paid so far: %d\n\t\t\t\tEnter extra payment: ", adet * 50, ucret);
						scanf_s("%d", &ek_ucret);
						ucret += ek_ucret;
					} system("cls");
					system("color E0");
					printf("\n\n\n\t\t\t\tPayment received for %d CHOCOLATE TURKISH COFFEE totaling %d TL.\n\t\t\t\t    Refund: %d\n\t\t\t\t   ENJOY YOUR COFFEE. PLEASE VISIT AGAIN", adet, adet * 50, ucret - adet * 50);
					char gecici2;
					gecici2 = _getch(); break;
				case '4': system("cls"); system("color E0"); printf("\n\n\t\t\t\t\tHow many	REGULAR TURKISH COFFEE would you like?\n\n\t\t\t\t\tEnter quantity: ");
					scanf_s("%d", &adet); printf("\n\n\t\t\t\t Total amount to be paid: %d", adet * 40); printf("\n\t\t\t\t Enter the amount you will pay: ");
					scanf_s("%d", &ucret);
					while (ucret < adet * 40) {
						system("cls");
						system("color E0");
						printf("\n\n\t\t\t\tINSUFFICIENT PAYMENT! Please add extra payment:\n\t\t\t\tTotal amount to be paid: %d\n\t\t\t\tAmount paid so far: %d\n\t\t\t\tEnter extra payment: ", adet * 40, ucret);
						scanf_s("%d", &ek_ucret);
						ucret += ek_ucret;
					} system("cls");
					system("color E0");
					printf("\n\n\n\t\t\t\tPayment received for %d REGULAR TURKISH COFFEE totaling %d TL.\n\t\t\t\t    Refund: %d\n\t\t\t\t   ENJOY YOUR COFFEE. PLEASE VISIT AGAIN", adet, adet * 40, ucret - adet * 40);
					char gecici3;
					gecici3 = _getch(); break;
				case 27: system("cls");
					system("color F1");
					printf("\n\t\t\t\tAre you sure you want to exit? (Y/N)");
					long telk3;
					telk3 = _getch();
					switch (telk3)
					{
					case 'y': printf("\n\t\t\t\t\t   Exiting...");
						return 27;
					case 'n': continue;
					default:
						continue;
					}
				default: // Controlling users choices
					system("cls");
					system("color F1");
					printf("\n\n\t\t\t\t\tPLASE MAKE A VALID CHOICE");
					char klm;
					klm = _getch();
					break;
				}
			}
			else if (gec == '2')
			{
				system("cls");
				system("color E0");

				printf("\n\n\n\t\t\t\t\tDOUBLE ESPRESSO MENU\n\t\t\t\t_____________________________________\n\n\t\t\t\t1- DOUBLE ESPRESSO		 43TL\n\n\t\t\t\t2- ESPRESSO MACCHIATO            40TL\n\n\t\t\t\t3- DOUBLE ESPRESSO MACCHIATO     46TL\n\n\t\t\t\t4- ESPRESSO                      33TL\n\n\n\t\t\t\t   Please make your selection: ");
				// Espresso(s) submenu
				long numara1;
				numara1 = _getch();
				switch (numara1)
				{
				case '1': system("cls"); system("color E0"); printf("\n\n\t\t\t\t\tHow many DOUBLE ESPRESSO would you like?\n\n\t\t\t\t\tEnter quantity: ");
					scanf_s("%d", &adet); printf("\n\n\t\t\t\t Total amount to be paid: %d", adet * 43); printf("\n\t\t\t\t Enter the amount you will pay: ");
					scanf_s("%d", &ucret);
					while (ucret < adet * 43) {
						system("cls");
						system("color E0");
						printf("\n\n\t\t\t\tINSUFFICIENT PAYMENT! Please add extra payment:\n\t\t\t\tTotal amount to be paid: %d\n\t\t\t\tAmount paid so far: %d\n\t\t\t\tEnter extra payment: ", adet * 43, ucret);
						scanf_s("%d", &ek_ucret);
						ucret += ek_ucret;
					} system("cls");
					system("color E0");
					printf("\n\n\n\t\t\t\tPayment received for %d DOUBLE ESPRESSO totaling %d TL.\n\t\t\t\t    Refund: %d\n\t\t\t\t   ENJOY YOUR COFFEE. PLEASE VISIT AGAIN", adet, adet * 43, ucret - adet * 43);
					char gecici4;
					gecici4 = _getch(); break;
				case '2': system("cls"); system("color E0"); printf("\n\n\t\t\t\t\tHow many ESPRESSO MACHIATO would you like?\n\n\t\t\t\t\tEnter quantity: ");
					scanf_s("%d", &adet); printf("\n\n\t\t\t\t Total amount to be paid: %d", adet * 40); printf("\n\t\t\t\t Enter the amount you will pay: ");
					scanf_s("%d", &ucret);
					while (ucret < adet * 40) {
						system("cls");
						system("color E0");
						printf("\n\n\t\t\t\tINSUFFICIENT PAYMENT! Please add extra payment:\n\t\t\t\tTotal amount to be paid: %d\n\t\t\t\tAmount paid so far: %d\n\t\t\t\tEnter extra payment: ", adet * 40, ucret);
						scanf_s("%d", &ek_ucret);
						ucret += ek_ucret;
					} system("cls");
					system("color E0");
					printf("\n\n\n\t\t\t\tPayment received for %d ESPERSSO MACCHIATO totaling %d TL.\n\t\t\t\t    Refund: %d\n\t\t\t\t   ENJOY YOUR COFFEE. PLEASE VISIT AGAIN", adet, adet * 40, ucret - adet * 40);
					char gecici5;
					gecici5 = _getch(); break;
				case '3': system("cls"); system("color E0"); printf("\n\n\t\t\t\t\tHow many DOUBLE ESPRESSO MACHIATO would you like?\n\n\t\t\t\t\tEnter quantity: ");
					scanf_s("%d", &adet); printf("\n\n\t\t\t\t Total amount to be paid: %d", adet * 46); printf("\n\t\t\t\t Enter the amount you will pay: ");
					scanf_s("%d", &ucret);
					while (ucret < adet * 46) {
						system("cls");
						system("color E0");
						printf("\n\n\t\t\t\tINSUFFICIENT PAYMENT! Please add extra payment:\n\t\t\t\tTotal amount to be paid: %d\n\t\t\t\tAmount paid so far: %d\n\t\t\t\tEnter extra payment: ", adet * 46, ucret);
						scanf_s("%d", &ek_ucret);
						ucret += ek_ucret;
					} system("cls");
					system("color E0");
					printf("\n\n\n\t\t\t\tPayment received for %d DOUBLE ESPRESSO MACHIATO totaling %d TL.\n\t\t\t\t    Refund: %d\n\t\t\t\t   ENJOY YOUR COFFEE. PLEASE VISIT AGAIN", adet, adet * 46, ucret - adet * 46);
					char gecici6;
					gecici6 = _getch(); break;
				case '4': system("cls"); system("color E0"); printf("\n\n\t\t\t\t\tHow many ESPRESSO would you like?\n\n\t\t\t\t\tEnter quantity: ");
					scanf_s("%d", &adet); printf("\n\n\t\t\t\t Total amount to be paid: %d", adet * 33); printf("\n\t\t\t\t Enter the amount you will pay: ");
					scanf_s("%d", &ucret);
					while (ucret < adet * 33) {
						system("cls");
						system("color E0");
						printf("\n\n\t\t\t\tINSUFFICIENT PAYMENT! Please add extra payment:\n\t\t\t\tTotal amount to be paid: %d\n\t\t\t\tAmount paid so far: %d\n\t\t\t\tEnter extra payment: ", adet * 33, ucret);
						scanf_s("%d", &ek_ucret);
						ucret += ek_ucret;
					} system("cls");
					system("color E0");
					printf("\n\n\n\t\t\t\tPayment received for %d ESPRESSO totaling %d TL.\n\t\t\t\t    Refund: %d\n\t\t\t\t   ENJOY YOUR COFFEE. PLEASE VISIT AGAIN", adet, adet * 33, ucret - adet * 33);
					char gecici7;
					gecici7 = _getch(); break;
				case 27:
					system("cls");
					system("color F1");
					printf("\n\t\t\t\tAre you sure you want to exit? (Y/N)");
					long telk4;
					telk4 = _getch();
					switch (telk4)
					{
					case 'y': printf("\n\t\t\t\t\t    Exiting...");
						return 27;
					case 'n': continue;
					default:
						continue;
					}
				default:
					system("cls");
					system("color F1");
					printf("\n\n\t\t\t\t\tPLEASE MAKE A VALID CHOICE");
					char klm1;
					klm1 = _getch();
					break;
				}
			}
			else if (gec == '3')
			{
				system("cls");
				system("color E0");

				printf("\n\n\n\t\t\t\t\t     MOCHA MENU\n\t\t\t\t_____________________________________\n\n\t\t\t\t1- REGULAR MOCHA	      70TL\n\n\t\t\t\t2- CHOCOLATE MOCHA            75TL\n\n\n\t\t\t\t   Please make your selection: ");
				// Mocha(s) submenu
				long numara2;
				numara2 = _getch();
				switch (numara2)
				{
				case '1': system("cls"); system("color E0"); printf("\n\n\t\t\t\t\tHow many REGULAR MOCHA would you like?\n\n\t\t\t\t\tEnter quantity: ");
					scanf_s("%d", &adet); printf("\n\n\t\t\t\t Total amount to be paid: %d", adet * 70); printf("\n\t\t\t\t Enter the amount you will pay: ");
					scanf_s("%d", &ucret);
					while (ucret < adet * 70) {
						system("cls");
						system("color E0");
						printf("\n\n\t\t\t\tINSUFFICIENT PAYMENT! Please add extra payment:\n\t\t\t\tTotal amount to be paid: %d\n\t\t\t\tAmount paid so far: %d\n\t\t\t\tEnter extra payment: ", adet * 70, ucret);
						scanf_s("%d", &ek_ucret);
						ucret += ek_ucret;
					} system("cls");
					system("color E0");
					printf("\n\n\n\t\t\t\tPayment received for %d REGULAR MOCHA totaling %d TL.\n\t\t\t\t    Refund: %d\n\t\t\t\t   ENJOY YOUR COFFEE. PLEASE VISIT AGAIN", adet, adet * 70, ucret - adet * 70);
					char gecici8;
					gecici8 = _getch(); break;
				case '2': system("cls"); system("color E0"); printf("\n\n\t\t\t\t\tHow many CHOCOLATE MOCHA would you like?\n\n\t\t\t\t\tEnter quantity: ");
					scanf_s("%d", &adet); printf("\n\n\t\t\t\t Total amount to be paid: %d", adet * 75); printf("\n\t\t\t\t Enter the amount you will pay: ");
					scanf_s("%d", &ucret);
					while (ucret < adet * 75) {
						system("cls");
						system("color E0");
						printf("\n\n\t\t\t\tINSUFFICIENT PAYMENT! Please add extra payment:\n\t\t\t\tTotal amount to be paid: %d\n\t\t\t\tAmount paid so far: %d\n\t\t\t\tEnter extra payment: ", adet * 75, ucret);
						scanf_s("%d", &ek_ucret);
						ucret += ek_ucret;
					} system("cls");
					system("color E0");
					printf("\n\n\n\t\t\t\tPayment received for %d CHOCOLATE MOCHA totaling %d TL.\n\t\t\t\t    Refund: %d\n\t\t\t\t   ENJOY YOUR COFFEE. PLEASE VISIT AGAIN", adet, adet * 75, ucret - adet * 75);
					char gecici10;
					gecici10 = _getch(); break;
				case 27: system("cls");
					system("color F1");
					printf("\n\t\t\t\tAre you sure you want to exit? (Y/N)");
					long telk5;
					telk5 = _getch();
					switch (telk5)
					{
					case 'y': printf("\n\t\t\t\t\t   Exiting...");
						return 27;
					case 'n': continue;
					default:
						continue;
					}
				default:
					system("cls");
					system("color F1");
					printf("\n\n\t\t\t\t\tPLEASE MAKE A VALID CHOICE");
					char klm2;
					klm2 = _getch();
					break;
				}
			}
			else if (gec == '4')
			{ // Americano without submenu
				system("cls"); system("color E0"); printf("\n\n\t\t\t\t\tHow many AMERICANO would you like?\n\n\t\t\t\t\tEnter quantity: ");
				scanf_s("%d", &adet); printf("\n\n\t\t\t\t Total amount to be paid: %d", adet * 47); printf("\n\t\t\t\t Enter the amount you will pay: ");
				scanf_s("%d", &ucret);
				while (ucret < adet * 47) {
					system("cls");
					system("color E0");
					printf("\n\n\t\t\t\tINSUFFICIENT PAYMENT! Please add extra payment:\n\t\t\t\tTotal amount to be paid: %d\n\t\t\t\tAmount paid so far: %d\n\t\t\t\tEnter extra payment: ", adet * 47, ucret);
					scanf_s("%d", &ek_ucret);
					ucret += ek_ucret;
				} system("cls");
				system("color E0");
				printf("\n\n\n\t\t\t\tPayment received for %d AMERICANO totaling %d TL.\n\t\t\t\t    Refund: %d\n\t\t\t\t   ENJOY YOUR COFFEE. PLEASE VISIT AGAIN", adet, adet * 47, ucret - adet * 47);
				char gecici11;
				gecici11 = _getch();
			}
			else if (gec == '5')
			{ // Cappucino without submenu
				system("cls"); system("color E0"); printf("\n\n\t\t\t\t\tHow many CAPPUCINO would you like?\n\n\t\t\t\t\tEnter quantity: ");
				scanf_s("%d", &adet); printf("\n\n\t\t\t\t Total amount to be paid: %d", adet * 52); printf("\n\t\t\t\t Enter the amount you will pay: ");
				scanf_s("%d", &ucret);
				while (ucret < adet * 52) {
					system("cls");
					system("color E0");
					printf("\n\n\t\t\t\tINSUFFICIENT PAYMENT! Please add extra payment:\n\t\t\t\tTotal amount to be paid: %d\n\t\t\t\tAmount paid so far: %d\n\t\t\t\tEnter extra payment: ", adet * 52, ucret);
					scanf_s("%d", &ek_ucret);
					ucret += ek_ucret;
				} system("cls");
				system("color E0");
				printf("\n\n\n\t\t\t\tPayment received for %d CAPPUCINO totaling %d TL.\n\t\t\t\t    Refund: %d\n\t\t\t\t   ENJOY YOUR COFFEE. PLEASE VISIT AGAIN", adet, adet * 52, ucret - adet * 52);
				char gecici12;
				gecici12 = _getch();
			}
			else if (gec == '6')
			{ // Latte without submenu
				system("cls"); system("color E0"); printf("\n\n\t\t\t\t\tHow many CAFFE LATTE would you like?\n\n\t\t\t\t\tEnter quantity: ");
				scanf_s("%d", &adet); printf("\n\n\t\t\t\t Total amount to be paid: %d", adet * 54); printf("\n\t\t\t\t Enter the amount you will pay: ");
				scanf_s("%d", &ucret);

				while (ucret < adet * 54) {
					system("cls");
					system("color E0");
					printf("\n\n\t\t\t\tINSUFFICIENT PAYMENT! Please add extra payment:\n\t\t\t\tTotal amount to be paid: %d\n\t\t\t\tAmount paid so far: %d\n\t\t\t\tEnter extra payment: ", adet * 54, ucret);
					scanf_s("%d", &ek_ucret);
					ucret += ek_ucret;
				} system("cls");
				system("color E0");
				printf("\n\n\n\t\t\t\tPayment received for %d CAFFE LATTE totaling %d TL.\n\t\t\t\t    Refund: %d\n\t\t\t\t   ENJOY YOUR COFFEE. PLEASE VISIT AGAIN", adet, adet * 54, ucret - adet * 54);
				char gecici13;
				gecici13 = _getch();

			}
			else if (gec == '7')
			{ // Hot Chocolate submenu
				system("cls");
				system("color E0");

				printf("\n\n\n\t\t\t\t\tHOT CHOCOLATE MENU\n\t\t\t\t_____________________________________\n\n\t\t\t\t1- HOT CHOCOLATE WITH COFFEE   69TL\n\n\t\t\t\t2- WHITE HOT CHOCOLATE         73TL\n\n\t\t\t\t   Please make your selection: ");

				long numara3;
				numara3 = _getch();
				switch (numara3)
				{
				case '1': system("cls"); system("color E0"); printf("\n\n\t\t\t\t\tHow many HOT CHOCOLATE WITH COFFE would you like?\n\n\t\t\t\t\tEnter quantity: ");
					scanf_s("%d", &adet); printf("\n\n\t\t\t\t Total amount to be paid: %d", adet * 69); printf("\n\t\t\t\t Enter the amount you will pay: ");
					scanf_s("%d", &ucret);
					while (ucret < adet * 69) {
						system("cls");
						system("color E0");
						printf("\n\n\t\t\t\tINSUFFICIENT PAYMENT! Please add extra payment:\n\t\t\t\tTotal amount to be paid: %d\n\t\t\t\tAmount paid so far: %d\n\t\t\t\tEnter extra payment: ", adet * 69, ucret);
						scanf_s("%d", &ek_ucret);
						ucret += ek_ucret;
					} system("cls");
					system("color E0");
					printf("\n\n\n\t\t\t\tPayment received for %d HOT CHOCOLATE WITH COFFE totaling %d TL.\n\t\t\t\t    Refund: %d\n\t\t\t\t   ENJOY YOUR COFFEE. PLEASE VISIT AGAIN", adet, adet * 69, ucret - adet * 69);
					char gecici14;
					gecici14 = _getch(); break;
				case '2': system("cls"); system("color E0"); printf("\n\n\t\t\t\t\tHow many WHITE HOT CHOCOLATE would you like?\n\n\t\t\t\t\tEnter quantity: ");
					scanf_s("%d", &adet); printf("\n\n\t\t\t\t Total amount to be paid: %d", adet * 73); printf("\n\t\t\t\t Enter the amount you will pay: ");
					scanf_s("%d", &ucret);
					while (ucret < adet * 73) {
						system("cls");
						system("color E0");
						printf("\n\n\t\t\t\tINSUFFICIENT PAYMENT! Please add extra payment:\n\t\t\t\tTotal amount to be paid: %d\n\t\t\t\tAmount paid so far: %d\n\t\t\t\tEnter extra payment: ", adet * 73, ucret);
						scanf_s("%d", &ek_ucret);
						ucret += ek_ucret;
					} system("cls");
					system("color E0");
					printf("\n\n\n\t\t\t\tPayment received for %d WHITE HOT CHOCOLATE totaling %d TL.\n\t\t\t\t    Refund: %d\n\t\t\t\t   ENJOY YOUR COFFEE. PLEASE VISIT AGAIN", adet, adet * 73, ucret - adet * 73);
					char gecici15;
					gecici15 = _getch(); break;
				case 27: system("cls");
					system("color F1");
					printf("\n\t\t\t\tAre you sure you want to exit? (Y/N)");
					long telk6;
					telk6 = _getch();
					switch (telk6)
					{
					case 'y': printf("\n\t\t\t\t\t   Exiting...");
						return 27;
					case 'n': continue;
					default:
						continue;
					}
				default:
					system("cls");
					system("color F1");
					printf("\n\n\t\t\t\t\tPLEASE MAKE A VALID CHOICE");
					char klm3;
					klm3 = _getch();
					break;
				}
			}
			else if (gec == '8')
			{ // Salep submenu with sugar option
				system("cls");
				system("color E0");

				printf("\n\n\n\t\t\t\t\tSALEP SUGAR CHOICE (sugar is free)\n\t\t\t\t____________________________________________________\n\n\t\t\t\t1- WITH SUGAR\n\n\t\t\t\t2- SUGARLESS\n\n\t\t\t\t   Please make your selection: ");

				long numara4;
				numara4 = _getch();
				switch (numara4)
				{
				case '1': system("cls"); system("color E0"); printf("\n\n\t\t\t\t\tHow many Salep would you like with sugar?\n\n\t\t\t\t\tEnter quantity: ");
					scanf_s("%d", &adet); printf("\n\n\t\t\t\t Total amount to be paid: %d", adet * 73); printf("\n\t\t\t\t Enter the amount you will pay: ");
					scanf_s("%d", &ucret);
					while (ucret < adet * 73) {
						system("cls");
						system("color E0");
						printf("\n\n\t\t\t\tINSUFFICIENT PAYMENT! Please add extra payment:\n\t\t\t\tTotal amount to be paid: %d\n\t\t\t\tAmount paid so far: %d\n\t\t\t\tEnter extra payment: ", adet * 73, ucret);
						scanf_s("%d", &ek_ucret);
						ucret += ek_ucret;
					} system("cls");
					system("color E0");
					printf("\n\n\n\t\t\t\tPayment received for %d SALEP WITH SUGAR totaling %d TL.\n\t\t\t\t    Refund: %d\n\t\t\t\t   ENJOY YOUR COFFEE. PLEASE VISIT AGAIN", adet, adet * 73, ucret - adet * 73);
					char gecici16;
					gecici16 = _getch(); break;
				case '2': system("cls"); system("color E0"); printf("\n\n\t\t\t\t\tHow many Salep would you like without sugar?\n\n\t\t\t\t\tEnter quantity: ");
					scanf_s("%d", &adet); printf("\n\n\t\t\t\t Total amount to be paid: %d", adet * 73); printf("\n\t\t\t\t Enter the amount you will pay: ");
					scanf_s("%d", &ucret);
					while (ucret < adet * 73) {
						system("cls");
						system("color E0");
						printf("\n\n\t\t\t\tINSUFFICIENT PAYMENT! Please add extra payment:\n\t\t\t\tTotal amount to be paid: %d\n\t\t\t\tAmount paid so far: %d\n\t\t\t\tEnter extra payment: ", adet * 73, ucret);
						scanf_s("%d", &ek_ucret);
						ucret += ek_ucret;
					} system("cls");
					system("color E0");
					printf("\n\n\n\t\t\t\tPayment received for %d SALEP WITHOUT SUGAR totaling %d TL.\n\t\t\t\t    Refund: %d\n\t\t\t\t   ENJOY YOUR COFFEE. PLEASE VISIT AGAIN", adet, adet * 73, ucret - adet * 73);
					char gecici17;
					gecici17 = _getch(); break;
				case 27: system("cls");
					system("color F1");
					printf("\n\t\t\t\tAre you sure you want to exit? (Y/N)");
					long telk7;
					telk7 = _getch();
					switch (telk7)
					{
					case 'y': printf("\n\t\t\t\t\t   Exiting...");
						return 27;
					case 'n': continue;
					default:
						continue;
					}
				default:
					system("cls");
					system("color F1");
					printf("\n\n\t\t\t\t\tPLEASE MAKE A VALID CHOICE");
					char klm4;
					klm4 = _getch();
					break;
				}
			}
			else if (gec == 27)
			{
				break;
			}
			else
			{ // Main screen choice controlling
				system("cls");
				system("color F1");
				printf("\n\n\t\t\t\t\tPLEASE MAKE A VALID CHOICE");
				char klm5;
				klm5 = _getch();
			}
		}
		else if (b == 27) {
			break;
		}

	} while (789 == 789);

	return 1;
}