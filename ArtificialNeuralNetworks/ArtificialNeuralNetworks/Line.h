#pragma once
ref class Line
{
private:
	double a;
	double b;
	double c;

public:
	Line() {
		this->a = 0;
		this->b = 1;
		this->c = 0;
	}
	double getA() {
		return this->a;
	}
	void setA(double a) {
		this->a = a;
	}
	double getB() {
		return this->b;
	}
	void setB(double b) {
		this->b = b;
	}
	double getC() {
		return this->c;
	}
	void setC(double c) {
		this->c = c;
	}

};

