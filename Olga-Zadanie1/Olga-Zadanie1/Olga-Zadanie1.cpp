/*ZADANIE 1*/
/*TEMAT: podstawowe operacje arytmetyczne i wykorzystanie zmiennych w celach praktycznych*/

//Podwójny slash oznacza komentarz liniowy. Komentarze nie s¹ przetwarzane na program.

/*
Slash i gwiazdka oznacza komentarz blokowy.
Zamyka siê go gwiazdk¹ i slashem.
Wykurwiœcie estetyczny
*/

#include <iostream> //Do³¹czenie biblioteki iostream odpowiedzialnej za podstawow¹ obs³ugê wejœcia i wyjœcia.

int main() //Funckja main. Punkt pocz¹tkowy ka¿dego programu w C++.
{
	/*PRZYK£AD 1*/
	/*obliczanie wartoœci funkcji kwadratowej dla podanego argumentu*/
	{
		//Wzór ogólny funkcji kwadratowej: f(x) = ax^2+bx+c
		int parameter_a = 0; //Stworzenie zmiennej typu liczba ca³kowita, o nazwie "parameter_a" i wartoœci pocz¹tkowej równej 0.
		int parameter_b = 0; //Stworzenie zmiennej typu liczba ca³kowita, o nazwie "parameter_b" i wartoœci pocz¹tkowej równej 0.
		int parameter_c = 0; //Stworzenie zmiennej typu liczba ca³kowita, o nazwie "parameter_c" i wartoœci pocz¹tkowej równej 0.
		int x = 0; //Stworzenie zmiennej typu liczba ca³kowita, o nazwie "x" i wartoœci pocz¹tkowej równej 0.
		int y = 0; //Stworzenie zmiennej typu liczba ca³kowita, o nazwie "y" i wartoœci pocz¹tkowej równej 0.

		std::cout << "Wprowadz wartosc wspolczynnika a funckji kwadratowej:\n"; //Wypisanie wiadomoœci o podanej treœci na konsolê programu.
		std::cin >> parameter_a; //Oczekiwanie na podanie przez u¿ytkownika w konsoli wartoœci, która zostaje wpisana do podanej zmiennej.

		std::cout << "Wprowadz wartosc wspolczynnika b funckji kwadratowej:" << "\n";
		std::cin >> parameter_b;

		std::cout << "Wprowadz wartosc wspolczynnika c funckji kwadratowej:" << std::endl;
		std::cin >> parameter_c;

		//Przy okazji pokaza³em wy¿ej trzy ró¿ne sposoby na informowanie konsoli o tym, ¿eby przy nastêpnej rzeczy jak¹ bêdzie pokazywaæ przejœæ do nastêpnej linijki
		//1. "\n"
		//2. << "\n"
		//3. << std::endl
		//S¹ one funkcjonalnie takie same i to jakiego u¿ywasz zale¿y od Ciebie. 1. jest najszybsze, ale czasami czytelnoœæ jest wa¿niejsza od wydajnoœæi.

		if (parameter_a != 0) //Funckja warunkowa "je¿eli". Warunek konieczny do istnienia funkcji kwadratowej. Operator "!=" to nierównoœæ logiczna.
		{ //Otwarcie bloku.
			//Ten blok wykona siê jeœli warunek jest spe³niony.

			std::cout << "Wzor Twojej funkcji kwadratowej to:" << "\n";
			std::cout << "f(x) = " << parameter_a << "x^2 + " << parameter_b << "x + " << parameter_c << "\n"; //L¹czenie kilku ró¿nych fragmentów tekstu w jeden strumieñ przy pomocy symbolu kierunku strumienia <<.
			//Zmienne typu int s¹ a³tomatycznie konwertowane na ci¹g tekstu przy wypisywaniu ich albo ³¹czeniu ich z tekstem.
			//Warto zapamiêtaæ na przysz³oœæ, ¿e wiele typów zmiennych tak nie robi, ale tym zajmiemy siê póŸniej.

			std::cout << "Podaj argument dla ktorego chcesz otrzymac wartosc:" << "\n";
			std::cin >> x;

			y = (parameter_a * x * x) + (parameter_b * x) + parameter_c; //Oblicznie wartoœci funkcji dla podanych wspó³czynników i argumentu. Wartoœæ zapisujemy do zmiennej y.

			std::cout << "Wartosc tej funkcji dla argumentu " << x << " wynosi: " << y << "\n"; //Wypisujemy wynik.

		} //Zamkniêcie bloku.
		else //W przeciwnym wypadku
		{
			//Ten blok wykona siê jeœli warunek nie jest spe³niony.
			std::cout << "Wspolczynnik a funckji kwadratowej nie moze byc rowny 0!" << "\n";
		}
		//Ta czêœæ kodu, bo funcji warunkowej wykona siê, gdy zostanie wykonany dowolny z jej bloków.
		std::cout << "##########" << "KONIEC" << "##########" << "\n";
	}
	/*Program siê wysypie jeœli u¿ytkownik poda gdziekolwiek u³amek albo cokolwiek innego co nie jest liczb¹ ca³kowit¹, idiotoodpornoœci¹ zajmniemy siê potem*/
	/*KONIEC PRZYK£AD 1*/

	//ZADANIE 1
	//Stwórz podobn¹ funckjonalnoœæ dla funkcji liniowej NIE STA£EJ:
	//1. stwórz potrzebne zmienne (operujemy tylko na liczbach ca³kowitych)
	//2. stwórz funkcjonalnoœæ pozwalaj¹c¹ na wprowadzanie wspó³czynników liczbowych
	//3. sprawdŸ warunek konieczny do tego, ¿eby funkcja liniowa nie by³a sta³a
	//4. stwórz funkcjonalnoœæ pozwalaj¹c¹ na podanie argumentu
	//5. oblicz i wypisz na konsolê wartoœæ funkcji dla podanego argumentu
	//Rozwi¹zanie zrób w poni¿szym pustym bloku (bêdzie mi ³atwiej sprawdziæ jak bêdzie porz¹dek ;) )
	{

	}
}
