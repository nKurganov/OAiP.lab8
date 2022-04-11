#include <string>
#include "Human.h"

Human::Human(void)
{
    name = "";
    age = 0;
}

Human::Human(string n, int a)
{
    name = n;
    age = a;
}

Human::Human(const Human&h)
{
    name = h.name;
    age = h.age;
}

Human::~Human(void)
{
}

void Human::Show()
{
    cout << "\nName : " << name;
    cout << "\nAge : " << age;
    cout << "\n";
}

void Human::Input()
{ 
    cout << "\nName : "; cin>> name;
    cout << "\nAge : "; cin >> age;
}

void Human::Set_name(string n)
{
    name = n;
}

void Human::Set_age(int a)
{
    age = a;
}

Human& Human::operator=(const Human&h)
{ 
    if (&h == this) return *this;
    name = h.name;
    age = h.age;
    return *this;
}
void Human::HandleEvent(const TEvent& e)
{
    if (e.what == evMessage)//событие-сообщение
    {
        switch (e.command)
        {
        case cmGet:cout << "name=" << Get_name() << endl;
            break;
        }
    }
}
