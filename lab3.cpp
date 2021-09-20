/*
Write a program box.cpp that asks the user to input width and height and prints a solid rectangular box of the requested size using asterisks.

Also, print a line Shape: between user input and the printed shape (to separate input from output).
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
  for (int h=0;h<size,h++)
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
