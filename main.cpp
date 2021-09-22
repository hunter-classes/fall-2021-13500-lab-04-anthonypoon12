/*
Author: Anthony Poon
Course: CSCI-135
Instructor: Tong Yi, Mike Zamansky
Assignment: Lab 4

Main file to test functions
*/
#include <iostream>
#include "lab3.h"
int main()
{
  std::cout<<"Box with width of 3 and height of 5: "<<"\n";
  std::cout<<box(3,5)<<"\n";
  std::cout<<"Box with width of 9 and height of 5: "<<"\n";
  std::cout<<box(9,5)<<"\n";
  std::cout<<"Checkerboard with width of 11 and height of 6: "<<"\n";
  std::cout<<checkerboard(11,6)<<"\n";
  std::cout<<"Checkerboard with width of 20 and height of 10: "<<"\n";
  std::cout<<checkerboard(20,10)<<"\n";
  std::cout<<"Cross with size 8: "<<"\n";
  std::cout<<cross(8)<<"\n";
  std::cout<<"Cross with size 13: "<<"\n";
  std::cout<<cross(13)<<"\n";
  std::cout<<"Lower triangle size 6: "<<"\n";
  std::cout<<lower(6)<<"\n";
  std::cout<<"Lower triangle size 13: "<<"\n";
  std::cout<<lower(13)<<"\n";
  std::cout<<"Upper triangle size 5: "<<"\n";
  std::cout<<upper(5)<<"\n";
  std::cout<<"Upper triangle size 12: "<<"\n";
  std::cout<<upper(12)<<"\n";
  std::cout<<"Trapezoid with width 9 and height 3: "<<"\n";
  std::cout<<trapezoid(9,3)<<"\n";
  std::cout<<"Trapezoid with width 8 and height 4: "<<"\n";
std::cout<<trapezoid(8,4)<<"\n";
std::cout<<"Trapezoid with width 9 and height 4: "<<"\n";
std::cout<<trapezoid(9,4)<<"\n";
std::cout<<"Trapezoid with width 9 and height 5: "<<"\n";
std::cout<<trapezoid(9,5)<<"\n";
std::cout<<"Trapezoid with width 10 and height 10: "<<"\n";
std::cout<<trapezoid(10,10)<<"\n";
std::cout<<"3x3 checkerboard width 9 height 3: "<<"\n";
  std::cout<<checkerboard3x3(9,3)<<"\n";
  std::cout<<"3x3 checkerboard width 21 height 21: "<<"\n";
  std::cout<<checkerboard3x3(21, 21)<<"\n";
  std::cout<<"3x3 checkerboard width 14 height 7: "<<"\n";
  std::cout<<checkerboard3x3(14, 7)<<"\n";
}
