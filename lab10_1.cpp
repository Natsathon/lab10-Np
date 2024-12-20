#include<iostream>
using namespace std;

int main(){
    int count[5] = {0, 0, 0, 0, 0}; 
    char grade;
    int student_number = 1;
    
    cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
    
    do{
        cout << "Student [" << student_number << "]: ";
        cin >> grade; 
        
        if(grade == '0') break;
        
        if(grade == 'A') {
            count[0]++;
        }else if(grade == 'B') {
            count[1]++;
        }else if(grade == 'C') {
            count[2]++;
        }else if(grade == 'D') {
            count[3]++;
        }else if(grade == 'F') {
            count[4]++;
        }else{ 
            cout << "Wrong input. Please input again.\n";
            continue; 
        } 
        
        student_number++;
    }while(true);
    
    int total_students = student_number - 1; 
    cout << "In total " << total_students << " students.\n";
    cout << "A = " << count[0] << ", ";
    cout << "B = " << count[1] << ", ";
    cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4] << "\n";
    
    return 0;
}
