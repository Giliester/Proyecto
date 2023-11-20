#include<iostream>
#include<strings.h>
#include<cstdlib>
#include<ctime>

using namespace std;

int seleccion = -1;
int random = -1;
int estado = 0;
int mision = 0;

void resetear();
void limpiar();
void color(string estilo, string color, string fondo);
void menuSeleccion();
void juego();
void escenario1();
void escenario2();

int main()
{
	menuSeleccion();
	return 0;
}

void resetear()
{
	cin.clear();
	cin.ignore(100,'\n');
}

void limpiar()
{
	cout.flush();
	system("cls||clear");
}

void color(string estilo, string color, string fondo)
{
	cout.flush();
	string comando = "\033[" + estilo + ";" + color + ";" + fondo + "m";
	cout << comando;
	cout.flush();
}

void menuSeleccion()
{
	limpiar();
	color("4","37","40");
	cout << "\t\t     Menu     " << endl << endl;
	cout << "Seleccione una opcion acorde el numero: " << endl << endl;
	color("0","32","40");
	cout << " *(1)Jugar" << endl;
	color("0","33","40");
	cout << " *(2)Acerca de" << endl;
	color("0","34","40");
	cout << " *(3)Seleccionar Escenario" << endl;
	color("0","35","40");
	cout << " *(4)Prologo y Personajes" << endl;
	color("0","31","40");
	cout << " *(5)Salir" << endl;
	color("0","37","40");
	cin >> seleccion;
	
	if(!cin.fail())
	{
		switch(seleccion)
		{
			case 1:
				juego();
			break;
			case 2:
				limpiar();
				color("0","37","40");	
				cout << "" << endl;
				cout << "Presiona Enter para regresar al Menu...";
				resetear();
   	 			cin.get();
   	 			menuSeleccion();
			break;
			case 3:
				
			break;
			case 4:
				
			break;
			case 5:
				system("exit");
			break;
			default:
				limpiar();
				color("0","31","40");	
				cout << "Error: No hay una opcion segun el numero: (" << seleccion << ") intentelo nuevamente"<< endl << endl;	
				cout << "Presiona Enter para continuar...";
				resetear();
   	 			cin.get();
				menuSeleccion();
		}
	}
	else
	{
		limpiar();
		color("0","31","40");
		cout << "Error: Ingrese un dato que se pida"<< endl << endl;
		cout << "Presiona Enter para continuar...";
		resetear();
   	 	cin.get();
		menuSeleccion();
	}
}

void juego()
{
	limpiar();
	color("0","37","40");
	switch(estado)
	{
		case 0:
			escenario1();
		break;
		case 1:
			escenario2();
		break;
	}
}

void escenario1()
{
	cout << "En un futuro lejano la tierra ha sufrido una contaminacion generada por el ser humano" << endl;
	cout << "Eres el atronauta Robert Larson, fuiste asignado a una mision en la Nasa" << endl;
	cout << "Datos de la mision: " << endl;
	srand(time(NULL));
	random = rand()%3;
	switch(random)
	{
		case 0:
			mision = random;
			color("7","37","40");
			cout << "\tMision: Kep168" << endl;
			color("0","37","40");
			cout << "\t*Nesesitamos obtener datos de un planeta que se ha encontrado un planeta posiblemente habitable" << endl;
			cout << "\t*Viaja hacia ese planeta y obten una muestra para evaluar la sustentabilidad" << endl;
		break;
		case 1:
			mision = random;
			color("7","37","40");
			cout << "\tMision: Forg326" << endl;
			color("0","37","40");
			cout << "\t*Encuentra una civilizacion en un planeta que parece que hay vida" << endl;
			cout << "\t*Intenta comunicarte e informar nuestra situacion, si funciona esto seria nuestra unica esperanza" << endl;
		break;
		case 2:
			mision = random;
			color("7","37","40");
			cout << "\tMision: Urn548" << endl;
			color("0","37","40");
			cout << "\t*Ubica y trae la nave Mark2005, esto nos ayudara a evacuar a la poca poblacion que reside en la tierra" << endl;
			cout << "\t*Cuando la ubiques llevala a la estacion espacial para poder empezar a abordar a la gente" << endl;
			
		break;
		default:
			mision = 0;
			color("7","37","40");
			cout << "\tMision: Kep168" << endl;
			color("0","37","40");
			cout << "\t*Nesesitamos obtener datos de un planeta que se ha encontrado un planeta posiblemente habitable" << endl;
			cout << "\t*Viaja hacia ese planeta y obten una muestra para evaluar la sustentabilidad" << endl;
	}
	color("0","31","40");
	cout << endl << "Presiona Enter cuando haya comprendido la mision..." << endl;
	resetear();
   	cin.get();
   	estado = 1;
   	juego();
}

void escenario2()
{
	cout << "GFHF";
}
