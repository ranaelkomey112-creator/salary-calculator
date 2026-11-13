#include <iostream>
using namespace std;
int main()
{
    double salary,sales,comm;
    cin>>salary>>sales;

    if (sales <= 3*salary)
    comm=0.02*salary;
    
    else if (sales > 3*salary && sales <= 5*salary)
    comm=0.03*salary;

    else 
    comm=0.05*salary;

    cout<<"total salary:"<<salary+comm;

    return 0;
}