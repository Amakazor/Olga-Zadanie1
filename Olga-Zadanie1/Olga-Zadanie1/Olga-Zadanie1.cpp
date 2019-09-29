/*ZADANIE 1*/
/*TEMAT: podstawowe operacje arytmetyczne i wykorzystanie zmiennych w celach praktycznych*/

//Podw�jny slash oznacza komentarz liniowy. Komentarze nie s� przetwarzane na program.

/*
Slash i gwiazdka oznacza komentarz blokowy.
Zamyka si� go gwiazdk� i slashem.
Wykurwi�cie estetyczny
*/

#include <iostream> //Do��czenie biblioteki iostream odpowiedzialnej za podstawow� obs�ug� wej�cia i wyj�cia.

int main() //Funckja main. Punkt pocz�tkowy ka�dego programu w C++.
{
	/*PRZYK�AD 1*/
	/*obliczanie warto�ci funkcji kwadratowej dla podanego argumentu*/
	{
		//Wz�r og�lny funkcji kwadratowej: f(x) = ax^2+bx+c
		int parameter_a = 0; //Stworzenie zmiennej typu liczba ca�kowita, o nazwie "parameter_a" i warto�ci pocz�tkowej r�wnej 0.
		int parameter_b = 0; //Stworzenie zmiennej typu liczba ca�kowita, o nazwie "parameter_b" i warto�ci pocz�tkowej r�wnej 0.
		int parameter_c = 0; //Stworzenie zmiennej typu liczba ca�kowita, o nazwie "parameter_c" i warto�ci pocz�tkowej r�wnej 0.
		int x = 0; //Stworzenie zmiennej typu liczba ca�kowita, o nazwie "x" i warto�ci pocz�tkowej r�wnej 0.
		int y = 0; //Stworzenie zmiennej typu liczba ca�kowita, o nazwie "y" i warto�ci pocz�tkowej r�wnej 0.

		std::cout << "Wprowadz wartosc wspolczynnika a funckji kwadratowej:\n"; //Wypisanie wiadomo�ci o podanej tre�ci na konsol� programu.
		std::cin >> parameter_a; //Oczekiwanie na podanie przez u�ytkownika w konsoli warto�ci, kt�ra zostaje wpisana do podanej zmiennej.

		std::cout << "Wprowadz wartosc wspolczynnika b funckji kwadratowej:" << "\n";
		std::cin >> parameter_b;

		std::cout << "Wprowadz wartosc wspolczynnika c funckji kwadratowej:" << std::endl;
		std::cin >> parameter_c;

		//Przy okazji pokaza�em wy�ej trzy r�ne sposoby na informowanie konsoli o tym, �eby przy nast�pnej rzeczy jak� b�dzie pokazywa� przej�� do nast�pnej linijki
		//1. "\n"
		//2. << "\n"
		//3. << std::endl
		//S� one funkcjonalnie takie same i to jakiego u�ywasz zale�y od Ciebie. 1. jest najszybsze, ale czasami czytelno�� jest wa�niejsza od wydajno��i.

		if (parameter_a != 0) //Funckja warunkowa "je�eli". Warunek konieczny do istnienia funkcji kwadratowej. Operator "!=" to nier�wno�� logiczna.
		{ //Otwarcie bloku.
			//Ten blok wykona si� je�li warunek jest spe�niony.

			std::cout << "Wzor Twojej funkcji kwadratowej to:" << "\n";
			std::cout << "f(x) = " << parameter_a << "x^2 + " << parameter_b << "x + " << parameter_c << "\n"; //L�czenie kilku r�nych fragment�w tekstu w jeden strumie� przy pomocy symbolu kierunku strumienia <<.
			//Zmienne typu int s� a�tomatycznie konwertowane na ci�g tekstu przy wypisywaniu ich albo ��czeniu ich z tekstem.
			//Warto zapami�ta� na przysz�o��, �e wiele typ�w zmiennych tak nie robi, ale tym zajmiemy si� p�niej.

			std::cout << "Podaj argument dla ktorego chcesz otrzymac wartosc:" << "\n";
			std::cin >> x;

			y = (parameter_a * x * x) + (parameter_b * x) + parameter_c; //Oblicznie warto�ci funkcji dla podanych wsp�czynnik�w i argumentu. Warto�� zapisujemy do zmiennej y.

			std::cout << "Wartosc tej funkcji dla argumentu " << x << " wynosi: " << y << "\n"; //Wypisujemy wynik.

		} //Zamkni�cie bloku.
		else //W przeciwnym wypadku
		{
			//Ten blok wykona si� je�li warunek nie jest spe�niony.
			std::cout << "Wspolczynnik a funckji kwadratowej nie moze byc rowny 0!" << "\n";
		}
		//Ta cz�� kodu, bo funcji warunkowej wykona si�, gdy zostanie wykonany dowolny z jej blok�w.
		std::cout << "##########" << "KONIEC" << "##########" << "\n";
	}
	/*Program si� wysypie je�li u�ytkownik poda gdziekolwiek u�amek albo cokolwiek innego co nie jest liczb� ca�kowit�, idiotoodporno�ci� zajmniemy si� potem*/
	/*KONIEC PRZYK�AD 1*/

	//ZADANIE 1
	//Stw�rz podobn� funckjonalno�� dla funkcji liniowej NIE STA�EJ:
	//1. stw�rz potrzebne zmienne (operujemy tylko na liczbach ca�kowitych)
	//2. stw�rz funkcjonalno�� pozwalaj�c� na wprowadzanie wsp�czynnik�w liczbowych
	//3. sprawd� warunek konieczny do tego, �eby funkcja liniowa nie by�a sta�a
	//4. stw�rz funkcjonalno�� pozwalaj�c� na podanie argumentu
	//5. oblicz i wypisz na konsol� warto�� funkcji dla podanego argumentu
	//Rozwi�zanie zr�b w poni�szym pustym bloku (b�dzie mi �atwiej sprawdzi� jak b�dzie porz�dek ;) )
	{

	}
}
