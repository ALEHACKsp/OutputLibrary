/*

Information:

	OUTPUT C++ CONSOLE LIBRARY
	VERSION: 1.0.0
	DEVELOPER: github.com/xo1337

Note:
	Enjoy using my library with what ever you want lol
	Just make sure all the libraries below are included!
	Otherwise it will not work :/

*/

#include <iostream>

#include <Windows.h>
#include <random>
#include <vector>

const int COLOR_BLUE = 1;
const int COLOR_GREEN = 2;
const int COLOR_AQUA = 3;
const int COLOR_RED = 4;
const int COLOR_PURPLE = 5;
const int COLOR_YELLOW = 6;
const int COLOR_WHITE = 7;
const int COLOR_GREY = 8;
const int COLOR_LIGHTBLUE = 9;
const int COLOR_BLACK = 0;

namespace Output {

	void SetConsoleTextColor(const int ColorCode)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorCode);
	}

	void SetTitle(LPCSTR Title)
	{
		SetConsoleTitleA(Title);
	}

	void ConsolePause()
	{
		std::cout << std::endl;
		std::cout << "Press ENTER to continue . . ." << std::endl;
		getchar();
	}

	std::string Print(std::string Text, bool NewLine = true)
	{
		if (!NewLine)
		{
			std::cout << Text;
		}
		else if (NewLine)
		{
			std::cout << Text << '\n';
		}
		return Text;
	}

	void Newline()
	{
		std::cout << '\n';
	}

	void PrintCH(const char* Text, bool NewLine = true)
	{
		if (!NewLine)
		{
			std::cout << Text;
		}
		else if (NewLine)
		{
			std::cout << Text << '\n';
		}
	}

	void PrintInt(int Number, bool NewLine = true)
	{
		if (!NewLine)
		{
			std::cout << Number;
		}
		else if (NewLine)
		{
			std::cout << Number << '\n';
		}
	}

	void PrintFloat(float Number, bool NewLine = true)
	{
		if (!NewLine)
		{
			std::cout << Number;
		}
		else if (NewLine)
		{
			std::cout << Number << '\n';
		}
	}

	////////////////////////////////////////////////////////////////////////
	/* READ THE COLOR CODES! ABOVE! */

	void PrintExclamation(const int Color = 4, bool NewLine = false)
	{
		if (!NewLine)
		{
			std::cout << "[";
			Output::SetConsoleTextColor(Color);
			std::cout << "!";
			Output::SetConsoleTextColor(7);
			std::cout << "] ";
		}
		else if (NewLine)
		{
			std::cout << "[";
			Output::SetConsoleTextColor(Color);
			std::cout << "!";
			Output::SetConsoleTextColor(7);
			std::cout << "] " << std::endl;
		}
		
	}

	void PrintMinus(const int Color = 7, bool NewLine = false)
	{
		if (!NewLine)
		{
			std::cout << "[";
			Output::SetConsoleTextColor(Color);
			std::cout << "-";
			Output::SetConsoleTextColor(7);
			std::cout << "] ";
		}
		else if (NewLine)
		{
			std::cout << "[";
			Output::SetConsoleTextColor(Color);
			std::cout << "-";
			Output::SetConsoleTextColor(7);
			std::cout << "] " << std::endl;
		}

	}

	void PrintPlus(const int Color = 3, bool NewLine = false)
	{
		if (!NewLine)
		{
			std::cout << "[";
			Output::SetConsoleTextColor(Color);
			std::cout << "+";
			Output::SetConsoleTextColor(7);
			std::cout << "] ";
		}
		else if (NewLine)
		{
			std::cout << "[";
			Output::SetConsoleTextColor(Color);
			std::cout << "+";
			Output::SetConsoleTextColor(7);
			std::cout << "] " << std::endl;
		}

	}

	void PrintHashTag(const int Color = 2, bool NewLine = false)
	{
		if (!NewLine)
		{
			std::cout << "[";
			Output::SetConsoleTextColor(Color);
			std::cout << "#";
			Output::SetConsoleTextColor(7);
			std::cout << "] ";
		}
		else if (NewLine)
		{
			std::cout << "[";
			Output::SetConsoleTextColor(Color);
			std::cout << "#";
			Output::SetConsoleTextColor(7);
			std::cout << "] " << std::endl;
		}

	}

	void PrintDollarSign(const int Color = 7, bool NewLine = false)
	{
		if (!NewLine)
		{
			std::cout << "[";
			Output::SetConsoleTextColor(Color);
			std::cout << "$";
			Output::SetConsoleTextColor(7);
			std::cout << "] ";
		}
		else if (NewLine)
		{
			std::cout << "[";
			Output::SetConsoleTextColor(Color);
			std::cout << "$";
			Output::SetConsoleTextColor(7);
			std::cout << "] " << std::endl;
		}

	}

	void PrintPercent(const int Color = 7, bool NewLine = false)
	{
		if (!NewLine)
		{
			std::cout << "[";
			Output::SetConsoleTextColor(Color);
			std::cout << "%";
			Output::SetConsoleTextColor(Color);
			std::cout << "] ";
		}
		else if (NewLine)
		{
			std::cout << "[";
			Output::SetConsoleTextColor(Color);
			std::cout << "%";
			Output::SetConsoleTextColor(Color);
			std::cout << "] " << std::endl;
		}

	}

	void PrintAsterisk(const int Color = 7, bool NewLine = false)
	{
		if (!NewLine)
		{
			std::cout << "[";
			Output::SetConsoleTextColor(Color);
			std::cout << "*";
			Output::SetConsoleTextColor(7);
			std::cout << "] ";
		}
		else if (NewLine)
		{
			std::cout << "[";
			Output::SetConsoleTextColor(Color);
			std::cout << "*";
			Output::SetConsoleTextColor(7);
			std::cout << "] " << std::endl;
		}

	}

	void PrintBrackets(const int Color = 7, bool NewLine = false)
	{
		if (!NewLine)
		{
			std::cout << "[";
			Output::SetConsoleTextColor(Color);
			std::cout << "()";
			Output::SetConsoleTextColor(7);
			std::cout << "] ";
		}
		else if (NewLine)
		{
			std::cout << "[";
			Output::SetConsoleTextColor(Color);
			std::cout << "()";
			Output::SetConsoleTextColor(7);
			std::cout << "] " << std::endl;
		}

	}

	std::string PrintRandomString(const unsigned int Length)
	{
		std::string GeneratedString;
		static const char Alphabet[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
		srand((unsigned)time(NULL) * 5);
		for (int i = 0; i < Length; i++)
			GeneratedString += Alphabet[rand() % (sizeof(Alphabet) - 1)];
		return GeneratedString;
	}
}
