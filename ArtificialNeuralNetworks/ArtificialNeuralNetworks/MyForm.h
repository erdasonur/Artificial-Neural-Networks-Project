#pragma once
#include <iostream>
#include <cliext/vector>
#include "Points.h"
#include "Points2.h"
#include "Line.h"
namespace ArtificialNeuralNetworks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cliext;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	protected:

	protected:

	protected:



	private: System::Windows::Forms::Button^ draw_button;

	private: System::Windows::Forms::Button^ draw2_button;
	private: System::Windows::Forms::Button^ clear_button;
	private: System::Windows::Forms::RadioButton^ radio_class2;
	private: System::Windows::Forms::RadioButton^ radio_class1;

	private: System::Windows::Forms::Button^ multiclass_button;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ classnumber_textbox;
	private: System::Windows::Forms::ComboBox^ multiclass_combobox;
	private: System::Windows::Forms::Button^ button_done;
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Button^ button1;


	protected:





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->draw_button = (gcnew System::Windows::Forms::Button());
			this->draw2_button = (gcnew System::Windows::Forms::Button());
			this->clear_button = (gcnew System::Windows::Forms::Button());
			this->radio_class2 = (gcnew System::Windows::Forms::RadioButton());
			this->radio_class1 = (gcnew System::Windows::Forms::RadioButton());
			this->multiclass_button = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->classnumber_textbox = (gcnew System::Windows::Forms::TextBox());
			this->multiclass_combobox = (gcnew System::Windows::Forms::ComboBox());
			this->button_done = (gcnew System::Windows::Forms::Button());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(550, 397);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			// 
			// draw_button
			// 
			this->draw_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.11F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->draw_button->Location = System::Drawing::Point(568, 188);
			this->draw_button->Name = L"draw_button";
			this->draw_button->Size = System::Drawing::Size(205, 62);
			this->draw_button->TabIndex = 3;
			this->draw_button->Text = L"Draw with Perceptron";
			this->draw_button->UseVisualStyleBackColor = true;
			this->draw_button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// draw2_button
			// 
			this->draw2_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.11F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->draw2_button->Location = System::Drawing::Point(568, 260);
			this->draw2_button->Name = L"draw2_button";
			this->draw2_button->Size = System::Drawing::Size(205, 62);
			this->draw2_button->TabIndex = 5;
			this->draw2_button->Text = L"Draw with Delta";
			this->draw2_button->UseVisualStyleBackColor = true;
			this->draw2_button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// clear_button
			// 
			this->clear_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.11F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear_button->Location = System::Drawing::Point(571, 480);
			this->clear_button->Name = L"clear_button";
			this->clear_button->Size = System::Drawing::Size(118, 48);
			this->clear_button->TabIndex = 8;
			this->clear_button->Text = L"Restart";
			this->clear_button->UseVisualStyleBackColor = true;
			this->clear_button->Click += gcnew System::EventHandler(this, &MyForm::clear_button_Click_1);
			// 
			// radio_class2
			// 
			this->radio_class2->AutoSize = true;
			this->radio_class2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.13F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radio_class2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->radio_class2->Location = System::Drawing::Point(568, 141);
			this->radio_class2->Name = L"radio_class2";
			this->radio_class2->Size = System::Drawing::Size(106, 30);
			this->radio_class2->TabIndex = 7;
			this->radio_class2->TabStop = true;
			this->radio_class2->Text = L"Class2";
			this->radio_class2->UseVisualStyleBackColor = true;
			// 
			// radio_class1
			// 
			this->radio_class1->AutoSize = true;
			this->radio_class1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.13F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radio_class1->ForeColor = System::Drawing::Color::Yellow;
			this->radio_class1->Location = System::Drawing::Point(568, 104);
			this->radio_class1->Name = L"radio_class1";
			this->radio_class1->Size = System::Drawing::Size(106, 30);
			this->radio_class1->TabIndex = 6;
			this->radio_class1->TabStop = true;
			this->radio_class1->Text = L"Class1";
			this->radio_class1->UseVisualStyleBackColor = true;
			// 
			// multiclass_button
			// 
			this->multiclass_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.11F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiclass_button->Location = System::Drawing::Point(43, 478);
			this->multiclass_button->Name = L"multiclass_button";
			this->multiclass_button->Size = System::Drawing::Size(189, 50);
			this->multiclass_button->TabIndex = 10;
			this->multiclass_button->Text = L"Enter";
			this->multiclass_button->UseVisualStyleBackColor = true;
			this->multiclass_button->Click += gcnew System::EventHandler(this, &MyForm::multiclass_button_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(12, 436);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 24);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Class Number:";
			// 
			// classnumber_textbox
			// 
			this->classnumber_textbox->Location = System::Drawing::Point(173, 438);
			this->classnumber_textbox->Name = L"classnumber_textbox";
			this->classnumber_textbox->Size = System::Drawing::Size(100, 22);
			this->classnumber_textbox->TabIndex = 12;
			// 
			// multiclass_combobox
			// 
			this->multiclass_combobox->FormattingEnabled = true;
			this->multiclass_combobox->Location = System::Drawing::Point(312, 438);
			this->multiclass_combobox->Name = L"multiclass_combobox";
			this->multiclass_combobox->Size = System::Drawing::Size(160, 24);
			this->multiclass_combobox->TabIndex = 13;
			// 
			// button_done
			// 
			this->button_done->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.11F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_done->Location = System::Drawing::Point(300, 478);
			this->button_done->Name = L"button_done";
			this->button_done->Size = System::Drawing::Size(189, 50);
			this->button_done->TabIndex = 14;
			this->button_done->Text = L"Done";
			this->button_done->UseVisualStyleBackColor = true;
			this->button_done->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// button_close
			// 
			this->button_close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.11F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_close->Location = System::Drawing::Point(695, 480);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(118, 48);
			this->button_close->TabIndex = 15;
			this->button_close->Text = L"Close";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &MyForm::button_close_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(571, 353);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(202, 56);
			this->trackBar1->TabIndex = 16;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			this->trackBar1->RightToLeftChanged += gcnew System::EventHandler(this, &MyForm::trackBar1_RightToLeftChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(614, 415);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 45);
			this->button1->TabIndex = 17;
			this->button1->Text = L"multi_delta";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_3);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(825, 540);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->button_done);
			this->Controls->Add(this->multiclass_combobox);
			this->Controls->Add(this->classnumber_textbox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->multiclass_button);
			this->Controls->Add(this->clear_button);
			this->Controls->Add(this->radio_class2);
			this->Controls->Add(this->radio_class1);
			this->Controls->Add(this->draw2_button);
			this->Controls->Add(this->draw_button);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"NeuralNetworks";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Line^ line = gcnew Line();
		vector<Line^> linevector;
		vector<Points^> points;
		vector<Points2^> points2;
		int numberofclass;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int Size_X = (pictureBox1->Size.Width);
		int Size_Y = (pictureBox1->Size.Height);
		double c = 1;
		int counter = 0;
		double net = 0;
		double sgn;
		line->setA(0);
		line->setB(1);
		line->setC(0);

		while (points.size() > counter) {
			counter = 0;
			for (int i = 0; i < points.size(); i++) {
				net = line->getA() * points[i]->getX() + line->getB() * points[i]->getY() + line->getC() * points[i]->getZ();

				if (net < 0)
					sgn = -1;
				else
					sgn = 1;

				line->setA(line->getA() + c * (points[i]->getD() - sgn) * points[i]->getX());
				line->setB(line->getB() + c * (points[i]->getD() - sgn) * points[i]->getY());
				line->setC(int(line->getC() + c * (points[i]->getD() - sgn) * points[i]->getZ()));
				if (points[i]->getD() == sgn) {
					counter++;
				}
			}
			pictureBox1->Refresh();
		}
		MessageBox::Show("Line has been drawn successfully!");
	}
	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		int Center_X = (pictureBox1->Size.Width) / 2;//define centerX and centerY
		int Center_Y = (pictureBox1->Size.Height) / 2;

		Points^ point = gcnew Points();
		Points2^ point2 = gcnew Points2();
		Graphics^ graphic = pictureBox1->CreateGraphics();
		point->setX(e->X - Center_X);
		point->setY(Center_Y - e->Y);
		point2->setX(e->X - Center_X);
		point2->setY(Center_Y - e->Y);
		if (radio_class1->Checked) {//for single category class
			graphic->DrawEllipse(Pens::Yellow, e->X, e->Y, 3, 3);//draw a yellow circles for showing the points 
			point->setD(-1);//set D -1 for Class1
			points.push_back(point);
		}
		else if (radio_class2->Checked) {
			graphic->DrawEllipse(Pens::White, e->X, e->Y, 3, 3);//draw a white circles for showing the points 
			point->setD(1);//set D 1 for Class2
			points.push_back(point);
		}
		for (int i = 0; i < numberofclass; i++)//for multi category class
		{
			System::String^ str = "Class" + (i + 1).ToString();
			if (multiclass_combobox->SelectedItem->ToString() == str)
			{
				graphic->DrawEllipse(Pens::Black, e->X, e->Y, 3, 3);//draw a black circles for showing the points 
				point2->setDArray(str, numberofclass);//set d values

			}
		}
		points2.push_back(point2);
	}
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		int Size_X = (pictureBox1->Size.Width);
		int Size_Y = (pictureBox1->Size.Height);

		int Center_X = Size_X / 2;
		int Center_Y = Size_Y / 2;

		Pen^ object = gcnew Pen(Color::Black);
		//drawing coordinat plane
		e->Graphics->DrawLine(object, Point(0, Center_Y), Point(Size_X, Center_Y));
		e->Graphics->DrawLine(object, Point(Center_X, 0), Point(Center_X, Size_Y));
		//drawing line
		int x = (Center_Y - ((line->getA() * (Center_X)-line->getC()) / (line->getB())));
		int y = (Center_Y - ((line->getA()) * (-Center_X) - line->getC()) / (line->getB()));
		e->Graphics->DrawLine(Pens::Black, Point(0, x), Point(Size_X, y));
		Graphics^ g = pictureBox1->CreateGraphics();
		for (int i = 0; i < points.size(); i++) {//drawing the points again
			if (points[i]->getD() == 1) {
				e->Graphics->DrawEllipse(Pens::White, points[i]->getX() + Center_X, points[i]->getY() * (-1) + Center_Y, 3, 3);
			}
			if (points[i]->getD() == -1) {
				e->Graphics->DrawEllipse(Pens::Yellow, points[i]->getX() + Center_X, points[i]->getY() * (-1) + Center_Y, 3, 3);
			}
		}
		int a, b;

		if (linevector.size() > 0) {
			for (int i = 0; i < points2.size(); i++) {//drawing the points
				e->Graphics->DrawEllipse(Pens::Black, points2[i]->getX() + Center_X,
					points2[i]->getY() * (-1) + Center_Y, 3, 3);
			}
			for (int i = 0; i < linevector.size(); i++) {//drawing line which separates classes from each other
				a = Size_Y / 2 - (linevector[i]->getA() * (Size_X / 2) -
					linevector[i]->getC()) / (linevector[i]->getB());


				b = Size_Y / 2 - (linevector[i]->getA() * (-Size_X / 2) -
					linevector[i]->getC()) / (linevector[i]->getB());

				e->Graphics->DrawLine(Pens::Black, Point(0, a), Point(Size_X, b));
			}
		}
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Please click yes button for single category class or click no button for multi category class.",
			"Selection Window", System::Windows::Forms::MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
		{
			label2->Visible = 0;
			classnumber_textbox->Visible = 0;
			multiclass_button->Visible = 0;
			MessageBox::Show("Please click Draw1 button for using Discrete Function or click Draw2 button for using Continuous Function");
		}
		else
		{
			radio_class1->Visible = 0;
			radio_class2->Visible = 0;
			draw_button->Visible = 0;
			draw2_button->Visible = 0;

		}
		multiclass_combobox->Visible = 0;
		button_done->Visible = 0;
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {


		int Size_X = (pictureBox1->Size.Width);
		int Size_Y = (pictureBox1->Size.Height);
		long double c = 1;
		int counter = 0;
		long double net = 0;
		long double fnet = 0, fnet_derv = 0, err;
		double eps = 0.7;

		//normalization with average and deviation 
		double averageX = 0, averageY = 0, averageZ = 0, deviationX = 0, deviationY = 0, deviationZ = 0,
			totalX = 0, totalY = 0, totalZ = 0;
		for (int i = 0; i < points.size(); i++) {
			averageX += points[i]->getX();
		}
		for (int i = 0; i < points.size(); i++) {
			averageY += points[i]->getY();
		}
		averageX /= points.size();
		averageY /= points.size();
		for (int i = 0; i < points.size(); i++) {
			totalX += pow(points[i]->getX() - averageX, 2);
		}
		for (int i = 0; i < points.size(); i++) {
			totalY += pow(points[i]->getY() - averageY, 2);
		}
		deviationX = totalX / (points.size() - 1);
		deviationX = sqrt(deviationX);
		deviationY = totalY / (points.size() - 1);
		deviationY = sqrt(deviationY);

		//Normalization
		for (int i = 0; i < points.size(); i++)
		{
			points[i]->setX((points[i]->getX() - averageX) / deviationX);
			points[i]->setY((points[i]->getY() - averageY) / deviationY);
		}

		do {
			err = 0;
			for (int i = 0; i < points.size(); i++) {

				//net calculation
				//MessageBox::Show(points.at(i)->getX().ToString());
				net = line->getA() * points[i]->getX() + line->getB() * points[i]->getY() + line->getC() * points[i]->getZ();
				long double ex = exp(-net);
				long double a = (2 / (1 + ex));
				//f(net) and f(net)_derivation calculation
				fnet = a - 1;
				fnet_derv = (1 - pow(fnet, 2)) / 2;

				//Update value of w vector
				line->setA(line->getA() + c * (points[i]->getD() - fnet) * fnet_derv * points[i]->getX());
				line->setB(line->getB() + c * (points[i]->getD() - fnet) * fnet_derv * points[i]->getY());
				line->setC(double(line->getC() + c * (points[i]->getD() - fnet) * fnet_derv * points[i]->getZ()));
				//error calculation
				err += pow((points[i]->getD() - fnet), 2) / 2;
			}
			pictureBox1->Refresh();//drawing line and points
		} while (err > eps);
		MessageBox::Show("Line has been drawn successfully!");
		trackBar1->Visible = 1;
	}
	private: System::Void clear_button_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Application::Restart();
	}

	private: System::Void multiclass_button_Click(System::Object^ sender, System::EventArgs^ e) {
		multiclass_combobox->Visible = 1;
		button_done->Visible = 1;
		numberofclass = int::Parse(classnumber_textbox->Text); //get the number of class from textbox
		for (int i = 0; i < numberofclass; i++) //add class items to combobox
			multiclass_combobox->Items->Add("Class" + (i + 1).ToString());
		multiclass_button->Visible = 0;
		classnumber_textbox->Visible = 0;
		label2->Visible = 0;
		for (int i = 0; i < numberofclass; i++)//set random values for the linevector and push them into vector 
		{
			Line^ newLine = gcnew Line();
			linevector.push_back(newLine);
		}
	}
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {

		int net[10], sgnnet[10];//I need to initialize dimension of array
		int counter = 0, c = 1, control_flag;

		do {
			control_flag = 0;
			counter = 0;
			while (counter < points2.size()) {
				for (int i = 0; i < numberofclass; i++)
				{
					//net calculation
					net[i] = linevector[i]->getA() * points2[counter]->getX()
						+ linevector[i]->getB() * points2[counter]->getY()
						+ linevector[i]->getC() * points2[counter]->getZ();
				}
				for (int i = 0; i < numberofclass; i++)
				{
					//finding value of sign(net)=f(net)
					if (net[i] < 0)
						sgnnet[i] = -1;
					else
						sgnnet[i] = 1;
				}
				for (int i = 0; i < numberofclass; i++)
				{
					if (points2[counter]->getDArray()[i] != sgnnet[i]) {//Update the value of linevector with respect to output and d value
						linevector[i]->setA(linevector[i]->getA() + c * (points2[counter]->getDArray()[i] - sgnnet[i]) * points2[counter]->getX());
						linevector[i]->setB(linevector[i]->getB() + c * (points2[counter]->getDArray()[i] - sgnnet[i]) * points2[counter]->getY());
						linevector[i]->setC(linevector[i]->getC() + c * (points2[counter]->getDArray()[i] - sgnnet[i]) * points2[counter]->getZ());
						control_flag++;
					}
				}
				counter++;
				pictureBox1->Refresh();
			}

		} while (control_flag > 0);
		MessageBox::Show("Line has been drawn successfully!");
	}
	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < points.size(); i++)
		{
			points[i]->setX(points[i]->getX() * 5);
			points[i]->setY(points[i]->getY() * 5);
			points[i]->setZ(points[i]->getZ() * 5);


		}
		for (int i = 0; i < points2.size(); i++)
		{
			points2[i]->setX(points2[i]->getX() * 10);
			points2[i]->setY(points2[i]->getY() * 10);
			points2[i]->setZ(points2[i]->getZ() * 10);
		}
		pictureBox1->Refresh();

	}
	private: System::Void trackBar1_RightToLeftChanged(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Refresh();
	}
	private: System::Void button1_Click_3(System::Object^ sender, System::EventArgs^ e) {
		double length;
		/*double averageX = 0, averageY = 0, averageZ = 0, deviationX = 0, deviationY = 0, deviationZ = 0,
			totalX = 0, totalY = 0, totalZ = 0;
		for (int i = 0; i < points2.size(); i++) {
			averageX += points2[i]->getX();
		}
		for (int i = 0; i < points2.size(); i++) {
			averageY += points2[i]->getY();
		}
		averageX /= points2.size();
		averageY /= points2.size();
		for (int i = 0; i < points2.size(); i++) {
			totalX += pow(points2[i]->getX() - averageX, 2);
		}
		for (int i = 0; i < points2.size(); i++) {
			totalY += pow(points2[i]->getY() - averageY, 2);
		}
		deviationX = totalX / (points2.size() - 1);
		deviationX = sqrt(deviationX);
		deviationY = totalY / (points2.size() - 1);
		deviationY = sqrt(deviationY);
		for (int i = 0; i < points2.size(); i++)
		{
			points2[i]->setX((points2[i]->getX() - averageX) / deviationX);
			points2[i]->setY((points2[i]->getY() - averageY) / deviationY);
		}*/
		for (int i = 0; i < points2.size(); i++) {
			length = sqrt(pow(points2[i]->getX(), 2) + pow(points2[i]->getY(), 2) + pow(points2[i]->getZ(), 2));
		}
		for (int i = 0; i < points2.size(); i++) {
			points2[i]->setX(points2[i]->getX() / length);
			points2[i]->setY(points2[i]->getY() / length);
			points2[i]->setZ(points2[i]->getZ() / length);
		}		
		double net;
		double error[10], temperror[10];//I need to initialize dimension of array
		double fnet, fnet_derv;
		int counter = 0, c = 1, control_flag = 0;
		double eps = 0.9;
		for (int i = 0; i < numberofclass; i++) {
			linevector[i]->setA(0);
			linevector[i]->setB(1);
			linevector[i]->setC(5);
		}
		int errorcounter = 0;
		do {
			errorcounter = 0;
			counter = 0;
			for (int i = 0; i < numberofclass; i++) {
				error[i] = 0;
			}

			while (counter < points2.size()) {
			for (int i = 0; i < numberofclass; i++)
				{
					//net calculation
					
				}
				for (int i = 0; i < numberofclass; i++)
				{
					net = linevector[i]->getA() * points2[counter]->getX()
						+ linevector[i]->getB() * points2[counter]->getY()
						+ linevector[i]->getC() * points2[counter]->getZ();
					long double ex = exp(-net);
					long double a = (2 / (1 + ex));
					//f(net) and f(net)_derivation calculation
					fnet = a - 1;
					fnet_derv = (1 - pow(fnet, 2)) / 2;

					if (temperror[i] >= eps || control_flag == 0) {
						linevector[i]->setA(double(linevector[i]->getA() + c * (points2[counter]->getDArray()[i] - fnet) * fnet_derv * points2[counter]->getX()));
						linevector[i]->setB(double(linevector[i]->getB() + c * (points2[counter]->getDArray()[i] - fnet) * fnet_derv * points2[counter]->getY()));
						linevector[i]->setC(double(linevector[i]->getC() + c * (points2[counter]->getDArray()[i] - fnet) * fnet_derv * points2[counter]->getZ()));
						error[i] += pow((points2[counter]->getDArray()[i] - fnet), 2) / 2;
					}

				}
				counter++;
				pictureBox1->Refresh();
			}
			for (int i = 0; i < numberofclass; i++)
			{
				temperror[i] = error[i];
				if (error[i] < eps)
					errorcounter++;
			}
			control_flag = 1;

		} while (errorcounter < numberofclass);
		MessageBox::Show("Line has been drawn successfully!");
	}
	};
}