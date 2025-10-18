#include<iostream>
#include<windows.h>
#include<iomanip>
#include<fstream>
#include<sstream>
#include<vector>
#include<string>
 using namespace std;
 class WelcomePage{
 	public:
 		Welcome(){}
		void welcome();
 };
 
 class templateMaker{
 	public:
 		//--------- resume section ---------
 		void resume1();
 		void resume2();
 		void resume3();
 		void resume4();
 		void resume5();
 		void resume6();
 		void resume7();
 		//-------- print section --------
 		void print1();
 		void print2();
 		void print3();
 		void print4();
 		void print5();
 		void print6();
 		void print7();
 		//----- templates -------------
 		  void Chronological_Resume();
 		   void Functional_Resume();
 		    void Combinational_Resume();
 		     void Targeted_Resume();
 		      void Infographic_Resume();
 		       void Mini_Resume();
 		        void Federal_Resume();
 	   
		//------ add Record ------
		void printSave1();
		void printSave2();
		void printSave3();
		void printSave4();
		void printSave5();
		void printSave6();
		void printSave7();
 };
