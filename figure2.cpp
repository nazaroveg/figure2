// figure2.cpp : 
//nazaroveg@yandex.ru

#include <iostream>
#include <string>

class triangle  //треугольник
{
public:
	triangle(int,int,int,int,int,int)
	{
		
	}
	triangle(){}
	std::string get_name() const
	{
		return name;
	}

	void print_info(triangle* res, std::string name)
	{
		std::cout << name << std::endl;
		std::cout << "Стороны: " << Length_a << " " << Length_b << " " << Length_c << " " << std::endl;
		std::cout << "Углы: " << corner_a << " " << corner_b << " " << corner_c << "\n" << std::endl;
}

private:

protected:
	int corner_a = 50, corner_b = 60, corner_c = 70;
	int Length_a = 10, Length_b = 20, Length_c = 30;
	std::string name = {"Треугольник:"};
	
};

class Right_triangle : protected triangle  // прямоугольный треугольник  один 90 гр
{
public:
	Right_triangle(){}

private:

protected:

};
class Isosceles_triangle : protected triangle  //Равнобедренный треугольник 2 ст =
{
public:
	Isosceles_triangle(int, int,int ,int,int,int){ }
	Isosceles_triangle(){}
private:

protected:

};
class Equilateral_triangle : protected triangle //Равносторонний треугольник  всё равно
{
public:

private:

protected:

};

class Quadrilateral  //Четырёхугольник  все !=
{
public:

private:

protected:

};

class Rectangle  //Прямоугольник  углы равны
{
public:

private:

protected:

};

class Square  //Квадрат  рано всё
{
public:

private:

protected:

};
class Parallelogram  //Параллелограмм четугол попарно равны кривой
{
public:

private:

protected:

};

class Rhombus  //Ромб   пар все стороны равны
{
public:

private:

protected:

};






int main()
{
	setlocale(LC_ALL, "RUS");

	triangle tr {50,60,70,10,20,30};
	Isosceles_triangle It {50,60,90,10,20,30};
	Equilateral_triangle Et{};
	Quadrilateral Ql;
	Rectangle Re;
	Square Sq;
	Parallelogram Pl;
	Rhombus Rh;

	
	tr.print_info(&tr, tr.get_name());
	

	


}


