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
	
	StringFormat format; // ������ ������
	format.Alignment = StringAlignment::Center; // �������� ������

	


	for (int i= 0;  i  < str->Length; i++) { // ������� ���� ��� �������� ������ �������� � ������
		int x = 0;
		int y = height / 2; // ������������ �� y
		x = i * 30; // ������� ���������� ���������� ������� ��������
		brush.Color = Color::FromArgb(rand() % 256, rand() % 256, rand() % 256);
		

		RectangleF drawRect(x, y, width/2, height); // ��������� ������������ ������
	
		graphics->DrawString(str[i].ToString() , % font, %brush, drawRect, %format); // ������� ������ 
		// toString - ������ ��� ������������� ������ ������� � ���� ������
	}
	
}
	
	
	

