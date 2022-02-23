#include "Hello.h"
#include <iostream>
#include <string.h>
using namespace System::Windows::Forms;
using namespace std;
using namespace System;

void Hello::draw(Graphics^ graphics, int width, int height)
{
	String^ str = ("Hello World"); // ?
	Font font("Arial", 30);
	
	SolidBrush brush(Color::Black);
	
	StringFormat format; // создаём обьект
	format.Alignment = StringAlignment::Center; // центруем строку

	


	for (int i= 0;  i  < str->Length; i++) { // создаем цикл для проверки кажого элемента в строке
		int x = 0;
		int y = height / 2; // расположение по y
		x = i * 30; // считаем координаты нахождение каждого элемента
		brush.Color = Color::FromArgb(rand() % 256, rand() % 256, rand() % 256);
		

		RectangleF drawRect(x, y, width/2, height); // указываем расположение строки
	
		graphics->DrawString(str[i].ToString() , % font, %brush, drawRect, %format); // выводим строку 
		// toString - служит для представления данных обьекта в виде строки
	}
	
}
	
	
	

