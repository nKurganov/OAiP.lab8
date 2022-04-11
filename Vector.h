#pragma once
#include "Student.h"
 
class Vector
{
public:
	Vector(); 
	Vector(int);//конструктор с параметрами
public:
	~Vector(void);//деструктор
	void Add();//добавление элемента в вектор
	void Del();
	void Show();
	void Show(int);
	int operator()();//размер вектора
	virtual void HandleEvent(const TEvent& e);
protected:
	Object** beg;//указатель на первый элемент вектора
	int size;//размер
	int cur;//текущая позиция
};

