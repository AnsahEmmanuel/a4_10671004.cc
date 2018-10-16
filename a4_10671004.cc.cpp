#include <iostream>
#include <string>
#include <fstream>

//there are 5 students in a class with characteristics name, idNumber, age, score, grade.
//write a c++ program to take their data on a console and produce them on file. 
using namespace std;

struct Student{
	string idNumber;
	string Name;
	int Age;
	string Gender;
	float Score;
	char Grade;
};


char getGrade(float score){
	char Grade;

	
	if(score >79 && score <100){
		Grade = 'A';
	}else if (score >69 && score <79){
		Grade = 'B';
	}else if (score >59 && score <69){
		Grade = 'C';
	}else if (score >49 && score < 59){
		Grade = 'D';
	}else if (score >39 && score < 49){
		Grade = 'E';
	}else {
		Grade = 'F';
	}
	
	return Grade;
}

int main(){
	
	Student student[5];
	
	for(int i=0; i<5; i++){
		cout << "Enter Student " << i << "s Name:";
		cin >> student[i].Name;
		cout << "Enter Student " << i << "s Id: ";
		cin >> student[i].idNumber;
		cout << "Enter Student " << i << "s Age: ";
		cin >> student[i].Age;
		cout << "Enter Student " << i << "s Gender: ";
		cin >> student[i].Gender;
		cout << "Enter Student " << i << "s Score: ";
		cin >> student[i].Score;
		student[i].Grade = getGrade(student[i].Score);
	}
	
	
	
	fstream fin;
	fin.open("message.txt");

	fin << "  IdNumber\stName\stAge\stGender\stScore\st\Grade" << endl;
	for(int i=0; i<5; i++){
		fin << i << " " << student[i].idNumber <<"\t\t"<<student[i].Name << "\t" << student[i].Age << "\t" << student[i].Gender<< "\t" << student[i].Score << "\t" << student[i].Grade << endl;
	}
	

	

	return 0;
	
	}
