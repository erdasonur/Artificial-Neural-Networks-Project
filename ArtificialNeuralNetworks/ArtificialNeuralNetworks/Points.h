#pragma once
ref class Points
{
	private:
		double x;
		double y;
		double z;
		int d;
public:
	Points() {
		this->z = 1;
	}
	double getX() {
		return this->x;
	}
	void setX(double x) {
		this->x = x;
	}
	double getY() {
		return this->y;
	}
	void setY(double y) {
		this->y = y;
	}
	double getZ() {
		return this->z;
	}
	void setZ(double z) {
		this->z = z;
	}
	double getD() {
		return this->d;
	}
	void setD(double d) {
		this->d = d;
	}
};

