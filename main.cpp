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
  std::cout<<box(3,5)<<"\n";
  std::cout<<box(9,5)<<"\n";
  std::cout<<checkerboard(11,6)<<"\n";
  std::cout<<checkerboard(20,10)<<"\n";
  std::cout<<cross(8)<<"\n";
  std::cout<<cross(13)<<"\n";
  std::cout<<lower(6)<<"\n";
  std::cout<<lower(13)<<"\n";
  std::cout<<upper(5)<<"\n";
  std::cout<<upper(12)<<"\n";
  std::cout<<trapezoid(9,3)<<"\n";
std::cout<<trapezoid(8,4)<<"\n";
std::cout<<trapezoid(9,4)<<"\n";
std::cout<<trapezoid(9,5)<<"\n";
  std::cout<<checkerboard3x3(9,3)<<"\n";
  std::cout<<checkerboard3x3(21, 21)<<"\n";
  std::cout<<checkerboard3x3(14, 7)<<"\n";
}
