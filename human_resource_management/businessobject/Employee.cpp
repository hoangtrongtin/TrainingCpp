#include "Employee.h"
#include <string>

Employee::Employee(){};
Employee::Employee(int id, string fName, string mInit, string lName, long ssn, string bDate, string address, char sex, int salary, long superSSN, int dno)
{
    Id = id;
    FName = fName;
    MInit = mInit;
    LName = lName;
    SSN = ssn;
    BDate = bDate;
    Address = address;
    Sex = sex;
    Salary = salary;
    SuperSSN = superSSN;
    DNO = dno;
}
int Employee::GetID(){
    return Id;
}
string Employee::ToString(){
    string s;
    s += "{";
    s += to_string(Id) + ", ";
    s += FName + ", " + MInit + ", " + LName + ", ";
    s += to_string(SSN) + ", ";
    s += BDate + ", " + Address + ", ";
    s += std::string(1, Sex) + ", ";
    s += to_string(Salary) + ", ";
    s += to_string(SuperSSN) + ", ";
    s += to_string(DNO);
    s += "}";
    return s;

}