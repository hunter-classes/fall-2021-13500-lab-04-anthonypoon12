/*
Author: Anthony Poon
Course: CSCI-135
Instructor: Tong Yi, Mike Zamansky
Assignment: Lab 4
Task A. Box
Write a program box.cpp that asks the user to input width and height and
prints a solid rectangular box of the requested size using asterisks.
Also, print a line Shape: between user input and the printed shape (to separate input from output).
Task B. Checkerboard
Write a program checkerboard.cpp that asks the user to input width and
height and prints a rectangular checkerboard of the requested size using asterisks and spaces (alternating).
Task C. Cross
Write a program cross.cpp that asks the user to input the shape size,
and prints a diagonal cross of that dimension.
Task D. Lower triangle
Write a program lower.cpp that prints the bottom-left half of a square, given the side length.
Task E. Upper triangle
Write a program upper.cpp that prints the top-right half of a square, given the side length.
Task F. Upside-down trapezoid or triangle
Write a program trapezoid.cpp that prints an upside-down trapezoid of given width and height.
However, if the input height is impossibly large for the given width, then the program should report, Impossible shape!
Task G. Checkerboard (3x3)
Write a program checkerboard3x3.cpp that asks the user to input width and
height and prints a checkerboard of 3-by-3 squares. (It should work even if the input dimensions are not a multiple of three.)
*/
#include <iostream>

std::string box(int width, int height)
{
  std::string output="";
  for (int i=0; i<height;i++)
  {
    for (int j=0; j<width;j++)
      output+="*";
    output+="\n";
  }
  return output;
}
std::string checkerboard (int width, int height)
{
  std::string output = "";
  for (int i=0; i<height;i++)
  {
    for (int j = 0; j<width; j++)
    {
      if ((i+j)%2==0)
        output+="*";
      else
        output+=" ";
    }
    output+="\n";
  }
  return output;
}
std::string cross (int size)
{
  std::string output = "";
  for (int h=0;h<size;h++)
  {
    for (int i=0; i<size; i++)
    {
      if ((i==h)||(i+h==size-1))
        output+="*";
      else
        output+=" ";
    }
    output += "\n";
  }
  return output;
}
std::string lower (int length)
{
  std::string output="";
  for (int i=0;i<length;i++)
  {
    for (int j=0;j<=i;j++)
      output+="*";
    output+="\n";
  }
  return output;
}
std::string upper (int length)
{
  std::string output="";
  for (int i=length-1;i>=0;i--)
  {
    for (int j=length-1;j>=0;j--)
    {
      if (j<=i)
        output+="*";
      else
        output+=" ";
    }
    output+="\n";
  }
  return output;
}
std::string trapezoid (int width, int height)
{
  std::string output="";
  if (height > ((width+1)/2))
  {
    return "Impossible shape!";
  }
  for (int i=0; i<height;i++)
  {
    for (int j=0; j<=width-i;j++)
    {
      if (j<i)
        output+=" ";
      else if (j>(width-1-i))
        output+="\n";
      else
        output+="*";
    }
  }
  return output;
}
std::string checkerboard3x3(int width, int height)
{
  std::string output="";
  for (int i=0; i<height; i++)
  {
    for (int j=0; j<width; j++)
    {
      if (i%6<3)
      {
        if (j%6<3)
          output+="*";
        else
          output+=" ";
        }
        else if (j%6>=3)
          output+="*";
        else
          output += " ";
      }
      output+="\n";
    }
    return output;
  }
