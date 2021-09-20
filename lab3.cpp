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
  if (height > (width/2))
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
  std::output=";"
  for (int i=1; i<=height; i++)
  {
    for (int j=1; j<=width; j++)
    {
      if (i%6<=3)
      {
        if (j%6<=3)
          output+="*";
      }
      else if (j%6>3)
        output+="*";
      else
        output+=" ";
      }
      output+="\n";
    }
    return output;
  }
}
