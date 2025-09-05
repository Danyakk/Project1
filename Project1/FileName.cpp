#include <iostream>
using namespace std;

class Point // создание своего ТИПА!!!
{
private: // реализация объекта
    int x; // поле объекта
    int y; // поле объекта
    char symbol; // поле объекта
public:   // интерфейс объекта
    void Print() // метод класса 
    {
        cout << symbol << "-> X: " << x << "\tY: " << y << endl;
    }
    void Init(char t, int _x, int _y) // метод класса 
    {
        symbol = t;
        x = _x;
        y = _y;
    }
    void Sum(Point b)
    {
        cout << "X: " << x + b.x << "\tY: " << y + b.y << endl;
    }
    void Min(Point b)
    {
        cout << "X: " << x - b.x << "\tY: " << y - b.y << endl;
    }
    void Mul(Point b)
    {
        cout << "X: " << x * b.x << "\tY: " << y * b.y << endl;
    }
};
int main() 
{
    Point a, b;
 

    a.Init('A', 10, -20);
    a.Print();

    b.Init('B', 5, 16);
    b.Print();

    a.Sum(b);

    a.Min(b);

    a.Mul(b);
}