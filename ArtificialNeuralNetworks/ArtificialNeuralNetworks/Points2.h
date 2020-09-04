#pragma once
ref class Points2
{
private:
	double x;
	double y;
	double z;
	array<int>^ dArray = gcnew array<int>(10);
public:
	Points2() {
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
	void setDArray(System::String^ className, int classNumber) {
		for (int i = 0; i < classNumber; i++) {
			System::String^ index = "Class" + (i + 1).ToString();//set d value of choosen class 1 and set other d values -1
			if (index == className)
				this->dArray[i] = 1;
			else
				this->dArray[i] = -1;
		}
	}
	array<int>^ getDArray() {
		return this->dArray;
	}
};

