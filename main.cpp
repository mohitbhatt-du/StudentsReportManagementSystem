#include<iostream>
#include<string>
#include<iomanip>
#include"MyAscii.h"

void StudentDetails(std::string name,int rollno,int n,int marks[]);

int main()
{
    int choice,rollno,n,marks[n];

    std::string name;
    MyAsciiStart();
    StudentDetails(name,rollno,n,marks);
    
    return 0;
}

void StudentDetails(std::string name,int rollno,int n,int marks[])
{
    int temp{0};
    
    std::cout << std::endl;
    std::cout << "\tEnter your Name:";
    getline(std::cin,name);
    std::cout << "\tEnter your RollNo:";
    std::cin >> rollno;
    std::cout << "\tEnter the number of total subjects:";
    std::cin >> n;

    if(n == 6)
    {
        std::cout << "\tError! - Subject limit exceed(max = 6).";
    }

    for(int i = 1;i<=n;i++)
    {
        std::cout << "\tEnter the marks of " << i << " subject:";
        std::cin >> *(marks+i); 
    }

    for(int j = 1;j<=n;j++)
    {
        temp += marks[j];
    }
    float total = (float)temp / (float)n;

    
    MyAsciiSpaces();

    std::cout << std::endl;
    std::cout << "\tHello, " << name << std::endl;
    std::cout <<  "\tYour RollNo is " << rollno << std::endl; 
    std::cout <<  "\tYour percentage is ";
    std::cout << std::fixed << std::setprecision(2) << total << "%";
    if(total >= 97.0 && total <= 100)
    {
        std::cout << "\n\tCongratulations !!! - You got 'O' Grade." << std::endl;
        std::cout << "\tStatus -> PASS" << std::endl;
    }else if(total >= 87.0 && total <= 96.9)
    {
        std::cout << "\n\tYou got 'A*' Grade." << std::endl;
        std::cout << "\n\tStatus -> PASS" << std::endl;
    }else if(total >= 77.0 && total <= 86.9)
    {
        std::cout << "\n\tYou got 'A' Grade." << std::endl;
        std::cout << "\n\tStatus -> PASS" << std::endl;
    }else if(total >= 67.0 && 76.9)
    {
        std::cout << "\n\tYou got 'B*' Grade." << std::endl;
        std::cout << "\n\tStatus -> PASS" << std::endl;
    }else if(total >= 57.0 && total <= 66.9)
    {
        std::cout << "\n\tYou got 'B' Grade." << std::endl;
        std::cout << "\n\tStatus -> PASS" << std::endl;
    }else if(total >= 47.0 && total <= 56.9)
    {
        std::cout << "\n\tYou got 'C' Grade." << std::endl;
        std::cout << "\n\tStatus -> PASS" << std::endl;
    }else if(total >= 37.0 && total <= 46.9)
    {
        std::cout << "\n\tYou got 'D' Grade." << std::endl;
        std::cout << "\n\tStatus -> PASS" << std::endl;
    }else
    {
        std::cout << "\n\tStatus -> FAIL" << std::endl;
    }
    MyAsciiSpaces();
}