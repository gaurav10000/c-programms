/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int p, c, m;
  printf("Enter marks of physics,chemistry,maths seprated by commas.\n");
  scanf("%d,%d,%d",&p,&c,&m);
  int total = p + c + m;
  if (total >= 180)
    {
      if (m >= 65)
	{
	  if (p >= 55)
	    {
	      if (c >= 50)
		{
		  printf ("You are elegible to opt for this course.");
		}
	      else
		{
		  printf ("Your are not eligible to opt this course,because your chemistry score is low.");
		}
	    }
	  else
	    {
	      printf ("Your are not eligible to opt this course,because your physics score is low.");
	    }
	}
      else
	{
	  printf ("Your are not eligible to opt this course,because your maths score is low.");
	}
    }
  else
    {
      printf ("Your are not eligible to opt this course,because your total score is low.");
    }

  return 0;
}
