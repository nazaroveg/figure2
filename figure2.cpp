﻿// figure2.cpp : 
//nazaroveg@yandex.ru

#include <iostream>
#include <string>

class triangle  //треугольник
{
public:
	triangle(const std::string& name) { }
	triangle(int A, int B, int C, int a, int b, int c) : corner_a(A), corner_b(B), corner_c(C), Length_a(a), Length_b(b), Length_c(c) {  }
	triangle(int A, int B, int C, int D, int a, int b, int c, int d) : corner_a(A), corner_b(B), corner_c(C), corner_d(D), Length_a(a), Length_b(b), Length_c(c), Length_d(d) {}



	std::string get_name() const
	{
		return name;
	}

	void print_info(triangle* res, std::string name) const
	{
		if (corner_d == 0 && Length_d == 0)
		{
			std::cout << name << std::endl;
			std::cout << "Стороны: " << "a=" << Length_a << " " << "b=" << Length_b << " " << "c=" << Length_c << " " << std::endl;
			std::cout << "Углы: " << "A=" << corner_a << " " << "B=" << corner_b << " " << "C=" << corner_c << "\n" << std::endl;
		}
		else
		{
			std::cout << name << std::endl;
			std::cout << "Стороны: " << "a=" << Length_a << " " << "b=" << Length_b << " " << "c=" << Length_c << " " << "d=" << Length_d << std::endl;
			std::cout << "Углы: " << "A=" << corner_a << " " << "B=" << corner_b << " " << "C=" << corner_c << " " << "D=" << corner_d << "\n" << std::endl;
		}
	}


private:

protected:
	int corner_a = 0, corner_b = 0, corner_c = 0, corner_d = 0;
	int Length_a = 0, Length_b = 0, Length_c = 0, Length_d = 0;
	std::string name = { "Треугольник:" };

};

class Right_triangle : public triangle  // прямоугольный треугольник  один 90 гр
{
public:

	Right_triangle(const int A, int B, int a, int b, int c) : triangle(corner_a = A, corner_b = B, corner_c = 90, Length_a = a, Length_b = b, Length_c = c) {}
	Right_triangle(const std::string& name) : triangle(name) {}

	std::string name = { "прямоугольный треугольник:" };

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
	Isosceles_triangle(const int A, int B, int a, int b) : triangle(corner_a = A, corner_b = B, corner_c = A, Length_a = a, Length_b = b, Length_c = a) {}
	Isosceles_triangle(const std::string& name) : triangle(name) {}


	std::string name = { "Равнобедренный треугольник:" };

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
	Equilateral_triangle(const int A, int a) : triangle(corner_a = A, corner_b = A, corner_c = A, Length_a = a, Length_b = a, Length_c = a) {}
	Equilateral_triangle(const std::string& name) : triangle(name) {}


	std::string name = { "Равносторонний треугольник:" };

	std::string get_name() const
	{
		return name;
	}

private:

protected:

};

class Quadrilateral : public triangle //Четырёхугольник  все !=
{
public:
	Quadrilateral(const int A, int B, int C, int D, int a, int b, int c, int d) : triangle(corner_a = A, corner_b = B, corner_c = C, corner_d = D,
		Length_a = a, Length_b = b, Length_c = c, Length_d = d) {}
	Quadrilateral(const std::string& name) : triangle(name) {}
	






	std::string name = { "Четырёхугольник:" };

	std::string get_name() const
	{
		return name;
	}


private:

protected:

};

class Rectangle : public Parallelogram //Прямоугольник  углы равны
{
public:
	Rectangle(const int a, int b) :Parallelogram(corner_a = 90, corner_b = 90, Length_a = a, Length_b = b) {} //--

	Rectangle(const std::string& name) :Parallelogram(name) {}


	std::string name = { "Прямоугольник:" };

	std::string get_name() const
	{
		return name;
	}

private:

protected:

};

class Square  //Квадрат  рано всё
{
public:

private:

protected:

};
class Parallelogram : public Quadrilateral //Параллелограмм четугол попарно равны кривой от 4 уол
{
public:

	Parallelogram(const int A, int B, int a, int b) : Quadrilateral(corner_a = A, corner_b = B, corner_c = A, corner_d = B,
		Length_a = a, Length_b = b, Length_c = a, Length_d = b) {}

	Parallelogram(const std::string& name) : Quadrilateral(name) {}


	std::string name = { "Параллелограмм:" };

	std::string get_name() const
	{
		return name;
	}


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

	triangle tr{ 50,60,70,10,20,30 };
	Right_triangle Rt{ 50, 60, 10, 20, 30 };
	Isosceles_triangle It{ 50, 60, 10, 20 };
	Equilateral_triangle Et{ 60,30 };
	Quadrilateral Ql{ 50,60,70,80,10,20,30,40 };
	Rectangle Re{ 20,30 };
	Square Sq;
	Parallelogram Pl{ 30, 40, 20, 30 };
	Rhombus Rh;


	tr.print_info(&tr, tr.get_name());
	Rt.print_info(&Rt, Rt.get_name());
	It.print_info(&It, It.get_name());
	Et.print_info(&Et, Et.get_name());
	Ql.print_info(&Ql, Ql.get_name());
	Pl.print_info(&Pl, Pl.get_name());
	Re.print_info(&Re, Re.get_name());

	
}


