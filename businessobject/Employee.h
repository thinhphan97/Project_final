#ifndef  _businessobject_Employee_h_
#define  _businessobject_Employee_h_
#include <string>
using namespace std;
class Employee{
private:
    int Id;
    string Fname, Minit, Lname;
    long SSN;
    string Bdate, Adress;
    char Sex;
    int Salary;
    long SuperSSN;
    int DNO;
public:
    Employee();
    Employee(int id, string fname, string minit, string lname, long ssn, string bdate, string adress, char sex, int salary,long superSSN, int dno);
    void Print_employee();
};
#endif
