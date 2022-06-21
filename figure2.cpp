﻿// figure2.cpp : 90
//nazaroveg@yandex.ru

#include <iostream>
#include <string>

class triangle  //треугольник
{
public:
	triangle() {}
	triangle(int, int, int, int, int, int){}
	triangle(int, int, int, int, int){}
	triangle(int, int){}
	
	triangle* set_all(triangle* full)
	{
		this->corner_a = corner_a;
		this->corner_b = corner_b;
		this->corner_c = corner_c;
		this->Length_a = Length_a;
		this->Length_b = Length_b;
		this->Length_c = Length_c;
		return  &*full;
	}

	std::string get_name() const
	{
		return name;
	}

	void print_info(triangle* res, std::string name )
	{
		std::cout << name << std::endl;
		std::cout << "Стороны: " << Length_a << " " << Length_b << " " << Length_c << " " << std::endl;
		std::cout << "Углы: " << corner_a << " " << corner_b << " " << corner_c << "\n" << std::endl;
}

private:

protected:
	int corner_a = 50, corner_b = 60, corner_c = 70;
	int Length_a = 10, Length_b = 20, Length_c = 30;
	std::string name = { "Треугольник:" };
	
};

class Right_triangle : public triangle  // прямоугольный треугольник  один 90 гр
{
public:
	triangle* set_all(triangle* full)
	{
		this->corner_a = corner_a;
		this->corner_b = corner_b;
		this->corner_c = corner_c;
		this->Length_a = Length_a;
		this->Length_b = Length_b;
		this->Length_c = Length_c;
		return  &*full;
	}
	
	Right_triangle(int, int, int, int, int)
	{
		corner_a, corner_b, corner_c = 90, Length_a, Length_b, Length_c;
	}
	std::string const name = "прямоугольный треугольник:";
	

	std::string get_name() const
	{
		return name;
	}

private:

protected:

};
class Isosceles_triangle : public triangle  //Равнобедренный треугольник 2 ст =
{
public:
	Isosceles_triangle(int, int, int, int)
	{
		corner_c = corner_a, corner_b, Length_c = Length_a, Length_b;
	}
	triangle* set_all(triangle* full)
	{
		this->corner_a = corner_a;
		this->corner_b = corner_b;
		this->corner_c = corner_c;
		this->Length_a = Length_a;
		this->Length_b = Length_b;
		this->Length_c = Length_c;
		return  &*full;
	}
	
	 std::string const name =  "Равнобедренный треугольник:" ;
	
	
	 std::string get_name() const
	{
		 return name;
	}

	
private:

protected:

};
class Equilateral_triangle : public triangle //Равносторонний треугольник  всё равно
{
public:
	Equilateral_triangle(int, int)
	{
		corner_c = corner_b = corner_a, Length_c = Length_b = Length_a;
	}
	triangle* set_all(triangle* full)
	{
		this->corner_a = corner_a;
		this->corner_b = corner_b;
		this->corner_c = corner_c;
		this->Length_a = Length_a;
		this->Length_b = Length_b;
		this->Length_c = Length_c;
		return  &*full;
	}
	std::string name = "Равносторонний треугольник:";

	std::string get_name() const
	{
		return name;
	}

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

	triangle tr {10, 20, 30, 50, 90, 80 };
	Right_triangle Rt {10,20,90,10};
	Isosceles_triangle It {10,20,10,40,50};
	Equilateral_triangle Et{40 , 40};
	Quadrilateral Ql;
	Rectangle Re;
	Square Sq;
	Parallelogram Pl;
	Rhombus Rh;

	
	//tr.print_info(&tr, tr.get_name());
	//Rt.print_info(&Rt, *&Rt.get_name());
	//It.print_info(&It, It.get_name());
	//Et.print_info(&Et, Et.get_name());
	tr.print_info(tr.set_all(&tr), tr.get_name());
	Rt.print_info(Rt.set_all(&Rt), Rt.get_name());

}


