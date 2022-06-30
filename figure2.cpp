// figure2.cpp : 
//nazaroveg@yandex.ru

#include <iostream>
#include <string>


class figure
{
	public:
		figure(int _sides_count = 0, std::string _name = "Фигура") : sides_count(_sides_count), name(_name) { }
		
				
		void print_info( ) const
		{

			std::cout << name << std::endl;
			std::cout <<"число сторон: " << sides_count << std::endl;
			
		}

private:

protected:
	std::string name = { };
	int sides_count = 0;
	
};


//////////////////////////////////////////////////////////////////////////////////////////


class triangle : public figure //треугольник
{
public:
	triangle(int A, int B, int C, int a, int b, int c, std::string name = "Треугольник") : figure(3, name), corner_a(A), corner_b(B), corner_c(C), Length_a(a), Length_b(b), Length_c(c) {}
	
	void print_info() const
	{

		std::cout << name << std::endl;
		std::cout << "число сторон: " << sides_count << std::endl;
		std::cout << "Стороны: " << "a=" << Length_a << " " << "b=" << Length_b << " " << "c=" << Length_c << " " << std::endl;
		std::cout << "Углы: " << "A=" << corner_a << " " << "B=" << corner_b << " " << "C=" << corner_c << "\n" << std::endl;
	}
	
	
private:

protected:
	int corner_a = 0, corner_b = 0, corner_c = 0;
	int Length_a = 0, Length_b = 0, Length_c = 0;
	
};

class Right_triangle : public triangle  // прямоугольный треугольник  один 90 гр
{
public:
	Right_triangle(int A, int B, int a, int b, int c) : triangle   (A, B, 90, a, b, c, "Прямоугольный треугольник") { }
	
private:

protected:

};
class Isosceles_triangle : public triangle  //Равнобедренный треугольник 2 ст =
{
public:
	Isosceles_triangle(int A, int B, int a, int b) : triangle( A,  B,  A,  a,  b,  a, "Равнобедренный треугольник") {}
	

private:

protected:

};
class Equilateral_triangle : public triangle //Равносторонний треугольник  всё равно
{
public:
	Equilateral_triangle( int A, int a) : triangle( A,  A,  A,  a,  a,  a, "Равносторонний треугольник") {  }
	

	std::string name = { "Равносторонний треугольник:" };

	std::string get_name() const
	{
		return name;
	}

private:

protected:

};


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Quadrilateral : public figure  //Четырёхугольник  все !=
{
public:
	
	Quadrilateral(int A, int B, int C, int D, int a, int b, int c, int d, std::string name = "Четырёхугольник") : 
		figure (4, name), corner_a(A), corner_b(B), corner_c(C), corner_d(D), 
		Length_a(a), Length_b(b), Length_c(c), Length_d(d)  {}
	
	
	void print_info() const
	{
		std::cout << name << std::endl;
		std::cout << "число сторон: " << sides_count << std::endl;
		std::cout << "Стороны: " << "a=" << Length_a << " " << "b=" << Length_b << " " << "c=" << Length_c << " " << "d=" << Length_d << std::endl;
		std::cout << "Углы: " << "A=" << corner_a << " " << "B=" << corner_b << " " << "C=" << corner_c << " " << "D=" << corner_d << "\n" << std::endl;
	}
	
	

private:

protected:
	int corner_a = 0, corner_b = 0, corner_c = 0, corner_d = 0;
	int Length_a = 0, Length_b = 0, Length_c = 0, Length_d = 0;
};




class Parallelogram : public Quadrilateral //Параллелограмм четугол попарно равны кривой от 4 уол
{
public:

	Parallelogram( int A, int B, int a, int b, std::string name) : Quadrilateral( A,  B,  A,  B, a,  b,  a,  b, "Параллелограмм:") {} 

	
private:

protected:

};
class Rectangle : public Parallelogram //Прямоугольник  углы равны
{
public:
	Rectangle( int a, int b, std::string name) :Parallelogram(90, 90, a, b, "Прямоугольник:") { }

	

private:

protected:

};

class Square : public Rectangle  //Квадрат  рано всё
{
public:
	Square ( int a) : Rectangle (a, a, "Квадрат:" ) {}
	

private:

protected:

};


class Rhombus : public Parallelogram //Ромб   пар все стороны равны
{
public:
	Rhombus( int A, int B, int a) : Parallelogram( A,  B,  a,  a, "Ромб:") {}

	

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
	Parallelogram Pl{ 30, 40, 20, 30, " "};  ///??
	Rectangle Re{ 20,30, " "};               //??
	Rhombus Rh{ 30,40,30 };
	Square Sq {20};
	
	


	tr.print_info();
	Rt.print_info();
	It.print_info();
	Et.print_info();
	Ql.print_info();
	Pl.print_info();
	Re.print_info();
	Sq.print_info();
	Rh.print_info();
		
	return 0;
}


