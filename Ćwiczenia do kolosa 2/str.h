#pragma once

using text = char[50];

enum class Plec { kobieta, mezczyzna };
enum class StanCywilny { wolny, wZwiazku, rozwodnik, wdowiec };


struct Osoba
{
	text imie, nazwisko;
	int wiek;
	Plec plec;
	StanCywilny stan;
};
