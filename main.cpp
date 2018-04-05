#include <iostream>
#include <iomanip>

using namespace std;
/* 4. Create a structure called employee that contains two members: an employee number
(type int) and the employee’s compensation (in dollars; type float). Ask the user to fill
in this data for three employees, store it in three variables of type struct employee, and
then display the information for each employee.
*/
struct employee {
    int emp_num ;
    float emp_com ;
    };
int main()
{
    employee emp1 ;
    employee emp2 ;
    employee emp3 ;

    cout << "Enter first employee number:\n " ;//prompt user to enter the user's number
    cin >> emp1.emp_num ;//Hello world
    cout << "Enter first employee’s compensation:\n " ;
    cin >> emp1.emp_com ;
    cout << "Enter secound employee number: \n" ;
    cin >> emp2.emp_num ;
    cout << "Enter secound employee’s compensation: \n" ;
    cin >> emp2.emp_com ;
    cout << "Enter third employee number:\n" ;
    cin >> emp3.emp_num ;
    cout <<"Enter third employee’s compensation: \n" ;
    cin >> emp3.emp_com ;


    cout << setw(15) << "employee number" << setw(30) << "employee’s compensation" << endl ;
    cout << setw(15) << emp1.emp_num      << setw(30) << emp1.emp_com << endl ;
    cout << setw(15) << emp2.emp_num      << setw(30) << emp2.emp_com << endl ;
    cout << setw(15) << emp3.emp_num      << setw(30) << emp3.emp_com << endl ;


    cout << "" << endl;
    return 0;
}
