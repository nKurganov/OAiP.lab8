#pragma once
#include "Object.h"
#include<iostream>
#include "TEvent.h"
using namespace std;
class Human: 
	public Object
{
public:
	//конструкторы
	Human(void);
	Human(string, int);
	Human(const Human&);
	//деструктор
	~Human(void);
	//функции класса Object
	void Show();//вывод
	void Input();//ввод
	//"геттеры"
	string Get_name() { return name; }
	int Get_age() { return age; }
	//"сэттеры"
	void Set_name(string);
	void Set_age(int);
	Human& operator=(const Human&);
	void HandleEvent(const TEvent& e);
protected:
	string name;
	int age;
};

