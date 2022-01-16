#pragma once
#include "Process.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ ClassCountBox;
	private:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ ClassNoBox;



	private:
		/// <summary>
		/// User Defined Variables
		int  numClass = 0, numSample = 0, inputDim = 2;
		float* Samples, * targets;
		float* weights;
		float* faketargets;
		float* NormalizedSamples;
		float output;
		float cSayisi = 0.1;
		int classcount = -1;
		int iterationAmount = 0;
		int samplevar = 0;
		float bias = 0.5;
		float lambda = 5.0;
		float epsilon = 0.01;
		double euler = 2.71828;
		double error = 0.8;

	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
		   /// </summary>
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Erforderliche Methode für die Designerunterstützung.
		   /// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->ClassCountBox = (gcnew System::Windows::Forms::ComboBox());
			   this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->ClassNoBox = (gcnew System::Windows::Forms::ComboBox());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->groupBox1->SuspendLayout();
			   this->groupBox2->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->pictureBox1->Location = System::Drawing::Point(-14, 21);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(800, 600);
			   this->pictureBox1->TabIndex = 0;
			   this->pictureBox1->TabStop = false;
			   this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			   this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox1_Paint);
			   this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseClick);
			   // 
			   // groupBox1
			   // 
			   this->groupBox1->Controls->Add(this->button1);
			   this->groupBox1->Controls->Add(this->label1);
			   this->groupBox1->Controls->Add(this->ClassCountBox);
			   this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->groupBox1->Location = System::Drawing::Point(869, 50);
			   this->groupBox1->Name = L"groupBox1";
			   this->groupBox1->Size = System::Drawing::Size(200, 100);
			   this->groupBox1->TabIndex = 1;
			   this->groupBox1->TabStop = false;
			   this->groupBox1->Text = L"Network Architecture";
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(10, 61);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(131, 33);
			   this->button1->TabIndex = 2;
			   this->button1->Text = L"Network Setting";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(108, 23);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(69, 13);
			   this->label1->TabIndex = 1;
			   this->label1->Text = L"Sýnýf Sayýsý";
			   // 
			   // ClassCountBox
			   // 
			   this->ClassCountBox->FormattingEnabled = true;
			   this->ClassCountBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"2", L"3", L"4", L"5", L"6", L"7" });
			   this->ClassCountBox->Location = System::Drawing::Point(10, 20);
			   this->ClassCountBox->Name = L"ClassCountBox";
			   this->ClassCountBox->Size = System::Drawing::Size(82, 21);
			   this->ClassCountBox->TabIndex = 0;
			   this->ClassCountBox->Text = L"2";
			   this->ClassCountBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::ClassCountBox_SelectedIndexChanged);
			   // 
			   // groupBox2
			   // 
			   this->groupBox2->Controls->Add(this->label2);
			   this->groupBox2->Controls->Add(this->ClassNoBox);
			   this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(162)));
			   this->groupBox2->Location = System::Drawing::Point(879, 191);
			   this->groupBox2->Name = L"groupBox2";
			   this->groupBox2->Size = System::Drawing::Size(190, 61);
			   this->groupBox2->TabIndex = 2;
			   this->groupBox2->TabStop = false;
			   this->groupBox2->Text = L"Data Collection";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(98, 23);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(81, 13);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"Örnek Etiketi";
			   // 
			   // ClassNoBox
			   // 
			   this->ClassNoBox->FormattingEnabled = true;
			   this->ClassNoBox->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				   L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					   L"9"
			   });
			   this->ClassNoBox->Location = System::Drawing::Point(7, 20);
			   this->ClassNoBox->Name = L"ClassNoBox";
			   this->ClassNoBox->Size = System::Drawing::Size(75, 21);
			   this->ClassNoBox->TabIndex = 0;
			   this->ClassNoBox->Text = L"1";
			   // 
			   // button2
			   // 
			   this->button2->Location = System::Drawing::Point(879, 419);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(75, 23);
			   this->button2->TabIndex = 4;
			   this->button2->Text = L"perceptron";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(866, 506);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(35, 13);
			   this->label6->TabIndex = 7;
			   this->label6->Text = L"label6";
			   // 
			   // richTextBox1
			   // 
			   this->richTextBox1->Location = System::Drawing::Point(851, 286);
			   this->richTextBox1->Name = L"richTextBox1";
			   this->richTextBox1->Size = System::Drawing::Size(278, 111);
			   this->richTextBox1->TabIndex = 8;
			   this->richTextBox1->Text = L"";
			   this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(869, 259);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(35, 13);
			   this->label3->TabIndex = 9;
			   this->label3->Text = L"label3";
			   // 
			   // button3
			   // 
			   this->button3->Location = System::Drawing::Point(1007, 419);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(75, 23);
			   this->button3->TabIndex = 10;
			   this->button3->Text = L"delta";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			   // 
			   // button4
			   // 
			   this->button4->Location = System::Drawing::Point(792, 161);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(75, 23);
			   this->button4->TabIndex = 11;
			   this->button4->Text = L"button4";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			   // 
			   // button5
			   // 
			   this->button5->Location = System::Drawing::Point(879, 480);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(75, 23);
			   this->button5->TabIndex = 12;
			   this->button5->Text = L"multi perc";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			   // 
			   // button6
			   // 
			   this->button6->Location = System::Drawing::Point(1007, 480);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(75, 23);
			   this->button6->TabIndex = 13;
			   this->button6->Text = L"multi delt";
			   this->button6->UseVisualStyleBackColor = true;
			   this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			   // 
			   // Form1
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1173, 633);
			   this->Controls->Add(this->button6);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->richTextBox1);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->groupBox2);
			   this->Controls->Add(this->groupBox1);
			   this->Controls->Add(this->pictureBox1);
			   this->Name = L"Form1";
			   this->Text = L"Form1";
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->groupBox1->ResumeLayout(false);
			   this->groupBox1->PerformLayout();
			   this->groupBox2->ResumeLayout(false);
			   this->groupBox2->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		if (numClass == 0)
			MessageBox::Show("The Network Architeture should be firtly set up");
		else {
			float* x;
			x = new float[inputDim];
			int temp_x = (System::Convert::ToInt32(e->X));
			int temp_y = (System::Convert::ToInt32(e->Y));

			x[0] = float(temp_x - (pictureBox1->Width / 2));
			x[1] = float(pictureBox1->Height / 2 - temp_y);
			int label;
			int numLabel = Convert::ToInt32(ClassNoBox->Text);
			if (numLabel > numClass)
				MessageBox::Show("The class label cannot be greater than the maximum number of classes.");
			else {
				label = numLabel - 1; //Dögüler 0 dan baþladýðýndan, bir eksiði alýnmýþtýr
				if (numSample == 0) {
					numSample = 1;
					Samples = new float[numSample * inputDim];
					NormalizedSamples = new float[numSample * inputDim];
					targets = new float[numSample];
					faketargets = new float[numSample];
					for (int i = 0; i < inputDim; i++)
						Samples[i] = x[i];
					targets[0] = float(label);
				}
				else {
					numSample++;
					Samples = Add_Data(Samples, numSample, x, inputDim);
					NormalizedSamples = Add_Data(NormalizedSamples, numSample, x, inputDim);
					targets = Add_Labels(targets, numSample, label);
					faketargets = Add_Labels(faketargets, numSample, label);

				}//else
				Pen^ pen;// = gcnew Pen(Color::Black, 3.0f);
				switch (label) {
				case 0: pen = gcnew Pen(Color::Black, 3.0f); break;
				case 1: pen = gcnew Pen(Color::Red, 3.0f); break;
				case 2: pen = gcnew Pen(Color::Blue, 3.0f); break;
				case 3: pen = gcnew Pen(Color::Green, 3.0f); break;
				case 4: pen = gcnew Pen(Color::Yellow, 3.0f); break;
				case 5: pen = gcnew Pen(Color::Orange, 3.0f); break;
				default: pen = gcnew Pen(Color::YellowGreen, 3.0f);
				}//switch
				pictureBox1->CreateGraphics()->DrawLine(pen, temp_x - 5, temp_y, temp_x + 5, temp_y);
				pictureBox1->CreateGraphics()->DrawLine(pen, temp_x, temp_y - 5, temp_x, temp_y + 5);
				label3->Text = "Samples Count: " + System::Convert::ToString(numSample);
			}//else of if (Etiket ...
		}//else
	}//pictureMouseClick
	private: void setWeights(float w1, float w2, float w3) {
		weights[0] = w1;
		weights[1] = w2;
		weights[2] = w3;
	}
	private: float netCalculate(int samplevar) {
		float temp = 0.0;
		for (int i = 0; i < inputDim; i++) {
			temp += weights[i] * Samples[samplevar + i];
		}
		temp += weights[2];
		return temp;
	}
	private: void Normalization() {
		for (int i = 0; i < numSample*2; i++) {
			if (i % 2 == 0) {
				NormalizedSamples[i] = (Samples[i] + 400) / 800; // deðer - min/max -min
			}
			else {
				NormalizedSamples[i] = (Samples[i] + 300) / 600;
			}
		}
	}
	private: float normalizedNetCalculate(int samplevar) {
		float temp = 0.0;
		for (int i = 0; i < inputDim; i++) {
			temp += weights[i] * NormalizedSamples[samplevar + i];
		}
		temp += weights[2];
		return temp;
	}
	private: float derivate(float net) {
		//float a = lambda * Math::Exp(-lambda * net) / Math::Pow((1 + Math::Exp(-lambda * net)), 2);
		float a = deltaFunction(net) * (1 - deltaFunction(net));
		return a;
	}
	private:void singlePerceptronAlgorithm() {
		int sayac = 0;
		bool isntSolved = true;
		setWeights(1, -1, 0.5);
		while (isntSolved) {
			isntSolved = false;

			for (int i = 0; i < numSample; i++) {
				float output = sigmoidFunction(netCalculate(i * 2));
				if (targets[i] - output != 0) {
					isntSolved = true;
					float value = cSayisi * (targets[i] - sigmoidFunction(netCalculate(i * 2)));
					weights[0] += value * Samples[i * 2];
					weights[1] += value * Samples[i * 2 + 1];
					weights[2] += value * bias;
				}
			}
			sayac++;
		}
		label6->Text = sayac.ToString() + " kere döndü";
		drawVector(weights[0], weights[1], weights[2]);
	}
	private:void cloneTargets() {
		for (int i = 0; i < numSample; i++) {
			faketargets[i] = targets[i];
		}

	}
	private:void singleDeltaAlgorithm() {
		int sayac = 0;
		setWeights(1, -1, 0.5);
		Normalization();
		while (error >epsilon) {
			error = 0;
			for (int i = 0; i < numSample; i++) {
				
				long double output = deltaFunction(normalizedNetCalculate(i*2))+ 0.01;
				
				long double value = cSayisi * (targets[i] - deltaFunction(normalizedNetCalculate(i * 2))) * derivate(normalizedNetCalculate(i*2));
				error += Math::Pow(targets[i] - deltaFunction(normalizedNetCalculate(i * 2)), 2) / 2;
				weights[0] += value * NormalizedSamples[i * 2];
				weights[1] += value * NormalizedSamples[i * 2 + 1];
				weights[2] += value * bias;
				//richTextBox1->AppendText(faketargets[i].ToString() + " ");
				//richTextBox1->ScrollToCaret();
				//drawVector(weights[0], weights[1], weights[2]);
			}

			sayac++;
		}

		label6->Text = sayac.ToString() + " kere döndü";
		drawVector(weights[0], weights[1], weights[2]);
	}
	private:void multiPerceptronAlgorithm(float* target, Pen^ pen) {
		int sayac = 0;
		bool isntSolved = true;
		setWeights(1, -1, 0.5);
		while (isntSolved) {
			isntSolved = false;

			for (int i = 0; i < numSample; i++) {
				float output = sigmoidFunction(netCalculate(i * 2));
				if (target[i] - output != 0) {
					isntSolved = true;
					float value = cSayisi * (target[i] - sigmoidFunction(netCalculate(i * 2)));
					weights[0] += value * Samples[i * 2];
					weights[1] += value * Samples[i * 2 + 1];
					weights[2] += value * bias;


				}
			}
			sayac++;
		}
		label6->Text = sayac.ToString() + " kere döndü";
		multidrawVector(weights[0], weights[1], weights[2], pen);
	}
	private:void multiDeltaAlgorithm(float* target, Pen^ pen) {
		int sayac = 0;
		setWeights(1, -1, 0.5);
		Normalization();
		while (error > epsilon) {
			error = 0;
			for (int i = 0; i < numSample; i++) {

				long double output = deltaFunction(normalizedNetCalculate(i * 2)) + 0.01;

				long double value = cSayisi * (target[i] - deltaFunction(normalizedNetCalculate(i * 2))) * derivate(normalizedNetCalculate(i * 2));
				error += Math::Pow(target[i] - deltaFunction(normalizedNetCalculate(i * 2)), 2) / 2;
				weights[0] +=  value * NormalizedSamples[i * 2];
				weights[1] += value * NormalizedSamples[i * 2 + 1];
				weights[2] += value * bias;
				//multidrawVector(weights[0], weights[1], weights[2],pen);
			}

			sayac++;
		}

		label6->Text = sayac.ToString() + " kere döndü";
		
		multidrawVector(weights[0], weights[1], weights[2], pen);

	}
	private: void multidrawVector(float w1, float w2, float w3, Pen^ pen) {

		if (w2 == 0) return;
		//pictureBox1->CreateGraphics()->Clear(Color::White);
		//pictureBox1->Image = img;
		float y1 = (-w3 - w1 * pictureBox1->Width / 2) / -w2;
		float y2 = (-w3 + w1 * pictureBox1->Width / 2) / -w2;


		pictureBox1->CreateGraphics()->DrawLine(gcnew Pen(Color::Black, 2), pictureBox1->Width / 2, 0, pictureBox1->Width / 2, pictureBox1->Height);
		pictureBox1->CreateGraphics()->DrawLine(gcnew Pen(Color::Black, 2), 0, pictureBox1->Height / 2, pictureBox1->Width, pictureBox1->Height / 2);
		pictureBox1->CreateGraphics()->DrawLine(pen, 0, (int)y2 + pictureBox1->Height / 2, pictureBox1->Width, (int)y1 + pictureBox1->Height / 2);

	}

	private: void drawVector(float w1, float w2, float w3) {

		if (w2 == 0) return;
		//pictureBox1->CreateGraphics()->Clear(Color::White);
		//pictureBox1->Image = img;
		float y1 = (-w3 - w1 * pictureBox1->Width / 2) / -w2;
		float y2 = (-w3 + w1 * pictureBox1->Width / 2) / -w2;

		Pen^ pen = gcnew Pen(Color::Black, 3.0f);
		pictureBox1->CreateGraphics()->DrawLine(gcnew Pen(Color::Black, 2), pictureBox1->Width / 2, 0, pictureBox1->Width / 2, pictureBox1->Height);
		pictureBox1->CreateGraphics()->DrawLine(gcnew Pen(Color::Black, 2), 0, pictureBox1->Height / 2, pictureBox1->Width, pictureBox1->Height / 2);
		pictureBox1->CreateGraphics()->DrawLine(pen, 0, (int)y2 + pictureBox1->Height / 2, pictureBox1->Width, (int)y1 + pictureBox1->Height / 2);

	}
	private: int sigmoidFunction(float output) {
		if (output >= 0) {
			return 1;
		}
		else
			return 0;
	}
	private: double deltaFunction(float net) {
		double a = (1 / (1 + Math::Exp(-lambda * net)));
		return a;
	}
	private: Pen^ penSelector(int penn) {
		Pen^ pen;
		switch (penn) {
		case 0: pen = gcnew Pen(Color::Black, 3.0f); break;
		case 1: pen = gcnew Pen(Color::Red, 3.0f); break;
		case 2: pen = gcnew Pen(Color::Blue, 3.0f); break;
		case 3: pen = gcnew Pen(Color::Green, 3.0f); break;
		case 4: pen = gcnew Pen(Color::Yellow, 3.0f); break;
		case 5: pen = gcnew Pen(Color::Orange, 3.0f); break;
		default: pen = gcnew Pen(Color::YellowGreen, 3.0f);
		}
		return pen;
	}

	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//Ana eksen doðrularini cizdir
		Pen^ pen = gcnew Pen(Color::Black, 3.0f);
		int center_width, center_height;
		center_width = (int)(pictureBox1->Width / 2);
		center_height = (int)(pictureBox1->Height / 2);
		e->Graphics->DrawLine(pen, center_width, 0, center_width, pictureBox1->Height);
		e->Graphics->DrawLine(pen, 0, center_height, pictureBox1->Width, center_height);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Network is constructed
		numClass = Convert::ToInt32(ClassCountBox->Text);
		weights = new float[3 * numClass];

		button1->Text = " Network is Ready : ";
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		singlePerceptronAlgorithm();



	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		singleDeltaAlgorithm();
	}
	private: System::Void ClassCountBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		cloneTargets();
		for (int i = 0; i < numSample; i++) {
			richTextBox1->AppendText(faketargets[i].ToString() + " ");
			richTextBox1->ScrollToCaret();
		}
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		int _numclass;
		if (numClass == 2) {
			_numclass = 1;
		}
		else _numclass = numClass;
		for (int j = 0; j < _numclass; j++) {
			cloneTargets();
			classcount++;
			for (int i = 0; i < numSample; i++) {

				if (faketargets[i] != classcount) {
					faketargets[i] = 1;
				}
				else if (faketargets[i] == classcount) {
					faketargets[i] = 0;
				}

			}
			for (int k = 0; k < numSample; k++) {
				richTextBox1->AppendText(faketargets[k].ToString() + " ");

			}
			richTextBox1->AppendText("\n");
			multiPerceptronAlgorithm(faketargets, penSelector(classcount));

		}

	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		int _numclass;
		if (numClass == 2) {
			_numclass = 1;
		}
		else _numclass = numClass;
		for (int j = 0; j < _numclass; j++) {
			cloneTargets();
			classcount++;
			for (int i = 0; i < numSample; i++) {

				if (faketargets[i] != classcount) {
					faketargets[i] = 1;
				}
				else if (faketargets[i] == classcount) {
					faketargets[i] = 0;
				}
				else if (classcount == 1 && faketargets[i] != classcount) {
					faketargets[i] = 1;
				}
				else if (classcount == 1 && faketargets[i] == classcount) {
					faketargets[i] = 0;
				}
			}
			for (int k = 0; k < numSample; k++) {
				richTextBox1->AppendText(faketargets[k].ToString() + " ");

			}
			richTextBox1->AppendText("\n");
			multiDeltaAlgorithm(faketargets, penSelector(classcount));

		}
	}
	};
}
