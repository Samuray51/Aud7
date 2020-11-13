#include "MyForm.h"

using namespace Project8;

void MyForm::PaintTangle()
{

	static int X = 100, Y = 200;

	Graphics^ g = CreateGraphics();
	int r, gr, b;

	for (X; X <= 1100; X++)
	{
		r = 1 + rand() % 255;
		gr = 1 + rand() % 255;
		b = 1 + rand() % 255;
		Pen^ pero = gcnew Pen(Color::FromArgb(r, gr, b));
		pero->Width = 7;

		g->DrawLine(pero, 100, 200, X, 200); //Линия
	}



	for (Y; Y <= 600; Y++)
	{
		r = 1 + rand() % 255;
		gr = 1 + rand() % 255;
		b = 1 + rand() % 255;
		Pen^ pero = gcnew Pen(Color::FromArgb(r, gr, b));
		pero->Width = 7;

		g->DrawLine(pero, 1100, 200, 1100, Y); //Линия
	}



	for (X = 1100; X >= 100; X--)
	{
		r = 1 + rand() % 255;
		gr = 1 + rand() % 255;
		b = 1 + rand() % 255;
		Pen^ pero = gcnew Pen(Color::FromArgb(r, gr, b));
		pero->Width = 7;

		g->DrawLine(pero, 1100, 600, X, 600); //Линия
	}



	for (Y = 600; Y >= 200; Y--)
	{
		r = 1 + rand() % 255;
		gr = 1 + rand() % 255;
		b = 1 + rand() % 255;
		Pen^ pero = gcnew Pen(Color::FromArgb(r, gr, b));
		pero->Width = 7;

		g->DrawLine(pero, 100, 600, 100, Y); //Линия

	}
}
