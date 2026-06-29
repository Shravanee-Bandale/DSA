#include<iostream>
using namespace std;

int main()
{
    int marks[5] = {99, 100, 54, 36, 88};
    int size = 5;
    marks[2] = 55;
    cout << marks[0]<< endl;
    cout << marks[1]<< endl;
    cout << marks[2]<< endl;
    cout << marks[3]<< endl;
    cout << marks[4]<< endl;
    
    int sz = sizeof(marks);
    cout << "Size of the array: " << sz << endl;

    //Loop

for(int i =0; i<size; i++)

    return 0;
}