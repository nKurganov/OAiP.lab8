#pragma once
#include "Human.h"
 
using namespace std;
class Student :
    public Human
{
public:
    Student(void);
public:
    ~Student(void);
    void Show();
    void Input();
    Student(string, int, float);
    Student(const Student&);
    float Get_rate() { return rate; }
 
    void Set_rate(float);
 
    Student& operator=(const Student&);
protected:
    float rate;
};

