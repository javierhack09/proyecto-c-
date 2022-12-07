#include<conio>
#include<stdio>
#include<iostream>

main()
{         textbackground(14);
	  clrscr();
	  int a=80,i=0,b=0,entsal=0,m2=0,potencia=0,uso=0;
	  float resultado1=0,resultado2=0,intencidad=0,calculador=0,resistencia=0,voltaje=0;
	  char g[80];
	  int estrato=0;
	  double resultado=0;
	  gotoxy(1,1);
	  for(i=1;i<=80;i++)
	  {

	     printf("²");
	  }
	  gotoxy(1,14);
	  for(i=1;i<=a;i++)
	  {
	     cout<<"²";
	  }
	    gotoxy(4,4);
	    textcolor(7);
	    cprintf("Programa Creado Por:");
	    gotoxy(10,6);
	    printf(" Javier Camacho\n");
	    gotoxy(10,7);
	    printf(" Yesid sanchez \n");
	    gotoxy(10,8);
	    printf(" Andres Caceres\n");
	    gotoxy(10,10);
	    printf("Ingenieria Electronica");
	    gotoxy(45,4);
	    cprintf("   Û  Û  Û  Û  Û \n");
	    gotoxy(45,5);
	    cprintf("   Û  Û  Û  Û  Û \n");
	    gotoxy(45,6);
	    cprintf("   ÛÜÜÛÜÜÛÜÜÛÜÜÛ \n");
	    gotoxy(45,7);
	    cprintf("   Û þ         Û \n");
	    gotoxy(45,8);
	    cprintf("   Û þ  N555   Û \n");
	    gotoxy(45,9);
	    cprintf("   ÛÜÜÜÜÜÜÜÜÜÜÜÛ \n");
	    gotoxy(45,10);
	    cprintf("   Û  Û  Û  Û  Û \n");
	    gotoxy(45,11);
	    cprintf("   Û  Û  Û	 Û  Û \n");
	    gotoxy(45,12);
	    cprintf("  ÜÛ           ÛÜ\n");

  do
  {	    gotoxy(15,18);
	    printf("      preciona 1 para comenzar 0 para salir ");
	    scanf("%d",&entsal);

	    if(entsal==1)
	    {
		 clrscr();
		 gotoxy(34,4);
		 printf("MENU PRINCIPAL");
		 gotoxy(20,6);
		 printf("1)Circuitos de Corriente Directa");
		 gotoxy(20,8);
		 printf("2)Algoritmos de Programacion");
		 gotoxy(20,10);
		 printf("3)Medidas e Instrumentos");
		 gotoxy(20,14);
		 printf("0)Salir\n");
		 scanf("%d",&entsal);
		 if(entsal==1)
		 {

		     clrscr();
		     gotoxy(24,4);
		     printf("Menu Circuitos de Corriente Directa");
		     gotoxy(18,6);
		     printf("1)Medicion de Consumo Electrico");
		     gotoxy(18,8);
		     printf("2)Medicion De Consumo Electrico De Electrodomesticos");
		     gotoxy(18,10);
		     printf("3)Calculos en un Circuito");
		     gotoxy(18,12);
		     printf("4)Energias Renovables");
		     gotoxy(18,14);
		     printf("4)Regresar al Menu Principal\n");
		     scanf("%d",&m2);

		      switch(m2)
		      {
			case 1:
			    printf("medicion consumo electri");
			break;
			case 2:
		       clrscr();
			gotoxy(20,1);
		       printf("Esta opcion te permite calcular");
		       gotoxy(16,2);
		       printf("el costo electrico de tus electrodomesticos\n");
		       for(i=1;i<=1;i++)
		       {
			 printf("ingresa la potencia en watts:  ");
			 scanf("%d",&potencia);
			 printf("ingresa el uso diario en horas de tu electrodomestico: ");
			 scanf("%d",&uso);
			 printf("ingresa tu estrato: ");
			 scanf("%d",&estrato);
			 resultado=potencia*uso;
			 resultado1=resultado*30;
			 resultado2=resultado1*447.23;
			 printf("El cobro mensual es de: %f ",resultado2);

		       }
		       break;
			 case 3:


			 clrscr ();
			 printf("Esta Opcion Te permite Hacer Calculos De Circuitos Electricos\n");
			 cout<< "Indique que magnitud electrica desea calcular siendo: "<<endl;
			 cout<< "1: para calcular resistencia"<<endl, cout<<"2: para calcular intencidad"<<endl, cout <<"3: para calcular voltaje"<<endl;
			 cin >>calculador;
			  if (calculador==1)
			  {
			  cout <<"dijite el voltaje:"<< endl;
			  cin>> voltaje;
			  cout <<"dijite la intencidad:"<< endl;
			  cin>> intencidad;
			  resistencia= voltaje/intencidad;
			  cout << "el valor de la resistencia es: ", cout << resistencia, cout<<" ê";
			  }
			  if (calculador==2)
			  {
			 cout <<"dijite el voltaje:" <<endl;
			 cin >> voltaje;
			 cout <<"dijite la resistencia:"<< endl;
			 cin >> resistencia;
			 intencidad= voltaje/resistencia;
			 cout <<"la intencidad es de: ", cout<<intencidad, cout<<" A";
			  }
			  if (calculador==3)
			  {
			 cout <<"dijite la intencidad:"<< endl;
			 cin >> intencidad;
			 cout <<"dijite la resistencia:"<< endl;
			 cin >> resistencia;
			 voltaje= intencidad*resistencia;
			 cout <<"el voltaje es de: ", cout << voltaje, cout<< " V";
			  }
			  if (calculador>=4)
			  {
			 cout <<"esta no es una opcion para calcular";
			  }
			 break;
			 case 4:

printf("                          ENERGIAS RENOVABLES                                                                                                                                                                                                                                                                                                                                                                                   ");

printf("Energía hidráulica: Es la producida por la caída del agua. Las centrales hidroeléctricas en represas utilizan el agua retenida en embalses o pantanos a gran altura. El agua en su caída pasa por turbinas hidráulicas, que trasmiten la energía a un alternador, el cual la convierte en energía eléctrica.                                                                                                                    ");
printf("Energía eólica: Es la energía cinética producida por el viento. A través de los aerogeneradores o molinos de viento se aprovechan las corrientes de aire y se transforman en electricidad. Dentro de la energía eólica, podemos encontrar la eólica marina, cuyos parques eólicos se encuentran mar adentro.                                                                                                                    ");
printf("Energía solar: Este tipo de energía nos la proporciona el sol en forma de radiación electromagnética (luz, calor y rayos ultravioleta principalmente). El uso de la energía del sol se puede derivar en energía solar térmica (usada para producir agua caliente de baja temperatura para uso sanitario y calefacción) solar fotovoltaica (a través de placas de semiconductores que se alteran con la radiación solar), etc.   ");
printf("Energía geotérmica: Es una de las fuentes de energía renovable menos conocidas y se encuentra almacenada bajo la superficie terrestre en forma de calor y ligada a volcanes, aguas termales, fumarolas y géiseres. Por tanto, es la que proviene del interior de la Tierra.                                                                                                                                                     ");
printf("Energía mareomotriz: El movimiento de las mareas y las corrientes marinas son capaces de generar energía eléctrica de una forma limpia. Si hablamos concretamente de la energía producida por las olas, estaríamos produciendo energía undimotriz. Otro tipo de energía que aprovecha la energía térmica del mar basado en la diferencia de temperaturas entre la superficie y las aguas profundas se conoce como maremotérmica.");
printf("Análisis circuito                                                                                                                                                                                                                                                                                                                                                                                                               ");
printf("Materiales                                                                                                                                                                                                                                                                                                                                                                                                                      ");
printf("1.	Diodo rectificador (4)                                                                                                                                                                                                                                                                                                                                                                                                  ");
printf("2.	Capacitor o condensador de 5 v (condensador electrolítico)                                                                                                                                                                                                                                                                                                                                                              ");
printf("3.	Led                                                                                                                                                                                                                                                                                                                                                                                                                     ");
printf("4.	Motor                                                                                                                                                                                                                                                                                                                                                                                                                   ");
printf("5.	Manivela                                                                                                                                                                                                                                                                                                                                                                                                                ");
printf("Proceso                                                                                                                                                                                                                                                                                                                                                                                                                         ");
printf("1.	Se ubica la polaridad correspondiente a cada condensador, dos de ellos se soldán en sus polos positivos y los otros dos se soldarán en sus polos negativos, posteriormente a este proceso de soldadura, se procede a soldar ambas parejas, formando algo así como un rombo donde su parte superior será el positivo de nuestro puente y la parte inferior será el negativo                                              ");
printf("2.	Se toma el condensador electrolítico el cual será soldado correspondiente mente a los polos. Primero identificamos el negativo de nuestro condensador, y después lo soldamos en la parte negativa de nuestro puente de diodos y la parte positiva con la parte positiva.                                                                                                                                                ");
printf("3.	Las puntas laterales de nuestro puente van hacer la entrada de corriente alterna de nuestro motor, las cuales le soldaremos cable para una conexión más segura y más fácil de establecer.                                                                                                                                                                                                                               ");
printf("4.	Una vez se defina la polaridad del puente se conecta el led como corresponde (positivo con positivo y negativo con negativo)                                                                                                                                                                                                                                                                                            ");
printf("5.	La entrada de voltaje que nos genere el motor (energía mecánica), será entregada al puente y será transformada y polarizada para que se pueda encender el led sin que este se llegue a quemar                                                                                                                                                                                                                           ");



			 break;


		      }
		 }
		 if(entsal==2)
		 {
		   clrscr();
		   gotoxy(20,2);
		   printf("Menu Algoritmos de programacion\n");
		   gotoxy(20,4);
		   printf("Docente: Mary Luz Reyes Corredor\n");
		   gotoxy(20,6);
		   printf("1)programas basicos (suma,resta etc)");
		   gotoxy(20,8);
		   printf("2)programas de condiciones ");
		   gotoxy(20,10);
		   printf("3)programa de repeticiones (bubles o ciclos)");
		   gotoxy(20,6);
		 }
		 if(entsal==3)
		 {
		   cout<<"medidas e instrumentos";
		 }

	    }
  }while(entsal!=0);
getch();
}
