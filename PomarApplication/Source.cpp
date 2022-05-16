#include "derivative.h"
#include <vector>
#include <windows.h>
#include <random>

using namespace std;

std::random_device rd;
std::mt19937 gen(rd());

double division(int a, int b); //przyklad kontroli b³êdu
double generateNumber(int minRange, int maxRange); //tworzy liczbe losowa na zdefiniowanym przedziale
double matrixDeterminantSarrus(double ** arr); //wyznacznik macierzy metoda sarrusa
void showMatrix(double ** arr, int X, int Y); //pokazuje zawartosc tablicy wielowymiarowej, X i Y to odpowienio liczba rzêdów i kolumn
int operator+(const string& a, const int& b); //przeci¹¿anie operatora dodawania tak aby dodawanie stringa i inta zwracalo liczbe znakow stringa i zadany integer
int operator+(const int& a, const string& b); //jak wy¿ej ale w sytuacji kiedy lewy argument to integer a prawy to s³owo


int main()
{


	//obiektowosc**********************************************************************************************************************************************************
	//base someObject(2,4,6); //obiekt statyczny 
	//base* dynamicObject = new base; //obiekty dynamiczny
	//base copy(*dynamicObject); //kopia obiektu inicjalizowanego dynamicznie, zdefiniowana konstruktorem kopiuj¹cym

	//wywo³anie metody dla obiektu statycznego i dynamicznego
	//someObject.sayHello(); 
	//dynamicObject->sayHello();


	//base* yetAnotherObject = new derivative(7, 8); //obiekt klasy dziedzicz¹cej
	//yetAnotherObject->sayHello();
	//yetAnotherObject->status();
	//*********************************************************************************************************************************************************************
	//


	//cout << division(10, 0) << endl;
	

	
	////tworze tablice wielowymiarowa 3x3, wypelniam ja liczbami pseudolosowymi u¿ywaj¹c generatora mt19937, obliczam wyznacznik metod¹ Sarusa
	////*********************************************************************************************************************************************************************
	//double** matrix = new double * [3]; //tablica wielowymiarowa 3x3
	//for (int i = 0; i < 3; i++)
	//{
	//	matrix[i] = new double[3];

	//	for (int j = 0; j < 3; j++)
	//	{
	//		matrix[i][j] = generateNumber(1,30); //wypelnia macierz liczbami losowymi
	//	}
	//}

	//showMatrix(matrix,3,3);
	//cout << "wyznacznik badanej macierzy to "<< matrixDeterminantSarrus(matrix) << endl;// obliczanie wyznacznika macierzy 3x3
 //  //**************************************************************************************************************************************************************************
	


	//PRZECI¥¯ANIE OPERATORA**********************************
	/*string a = "ala";
	string b = "ma";
	int c = 4;
	int d = 5;
	cout << a + c + d + b << endl;*/
	//********************************************************

	
	return 0;
}

double division(int a, int b)
{
	try 
	{
		if (b == 0)
		{
			int error = 69;
			throw error;
		}
		double result = a / b;
		return result;
	}

	catch (int error)
	{
		MessageBox(NULL, L"Error 69, you cannot divide by 0", L"Error 69", MB_OK); //messagebox, windows.h
		return 0;
	}
	
}

double generateNumber(int minRange, int maxRange)
{
	std::uniform_int_distribution<> dist(minRange, maxRange);
	return dist(gen);
	
}

double matrixDeterminantSarrus(double** arr)
{
	double sarrus1 = (arr[0][0] * arr[1][1] * arr[2][2]) + (arr[0][1] * arr[1][2] * arr[2][0]) + (arr[0][2] * arr[1][0] * arr[2][1]);
	double sarrus2 = (arr[0][2] * arr[1][1] * arr[2][0]) + (arr[0][0] * arr[1][2] * arr[2][1]) + (arr[0][1] * arr[1][0] * arr[2][2]);
	double result = sarrus1 - sarrus2;
	return result;
}

void showMatrix(double ** arr, int X, int Y)
{
	for (int i = 0; i < X; i++)
	{
		for (int j = 0; j < Y; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout<<endl;
	}
}

int operator+(const string& a, const int& b)
{
	return a.length() + b;
}

int operator+(const int& a, const string& b)
{
	return a + b.length();
}