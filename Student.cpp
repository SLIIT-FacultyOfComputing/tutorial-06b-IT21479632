#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

void Student::assignDetails(int id, char pName[]) 
{
  studentId = id;
  strcpy(name, pName);
}

void Student::display() 
{
  cout << "student Id :" << studentId << endl;
  cout <<"student name :" << name << endl;
}
