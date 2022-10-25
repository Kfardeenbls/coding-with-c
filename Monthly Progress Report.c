/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>


int
main ()
{

  int dal_std, soya_std, egg_std, pw, lw, child, year, d, ne = 12;
  float total_cost, a, b, c, c1, c2, c3, c4, c5, c6, a1, gt1, a2;
  float dal = 80, soya = 75, egg = 5.5, oil = 100, cond = .32, fuel =
    .50, lemon = .10, veg = 30, total, ms = 1.24, gt = 5.5;
  char m[10];



  printf ("\n..............Wellcome................");

  printf ("\nEnter the month name = ");
  scanf ("%s", &m);

  printf ("\nEnter the year = ");
  scanf ("%d", &year);

  printf
    ("\n To know the total cost of this month...\n And also know the expenses of each item...\n");
  printf
    ("\ndal 	                 =	80/-\nsoya	                 =	75/-\negg	                     =	5.5/-\nOil                     =  1oo/-\ncondiments	             =	.32ps/-\nfuel	                 =	.50ps/-\nothers/lemon	         =	.10ps/-\nvegitables	             =	30/-\nMorning Snacks	         =	1.24/-\nGrand Total	             =	5.6/-\nNo. of Eggs/ benificiary =  12\n");
  printf (" Please Enter the following details");
  printf ("\nDo you want to make any changes in cost of any item");

  printf ("\n Enter 1 for YES \n Enter 0 for NO\n");
  scanf ("%d", &d);

  if (d > 0 && d < 2)
    {
      printf ("\nPlease enter the cost of each item\n");

      // taking Inputs from the user.

      printf ("\nEnter the Rate/kg of dal          = ");
      scanf ("%f", &dal);

      printf ("\nEnter the Rate/kg of Soya         = ");
      scanf ("%f", &soya);

      printf ("\nEnter the Rate/kg of Egg          = ");
      scanf ("%f", &egg);

      printf ("\nEnter the Rate/kg of oil          = ");
      scanf ("%f", &oil);

      printf ("\nEnter the Rate/kg of Condiments   = ");
      scanf ("%f", &cond);

      printf ("\nEnter the Rate/kg of Fuel         = ");
      scanf ("%f", &fuel);

      printf ("\nEnter the Rate/kg of Others/Lemon = ");
      scanf ("%f", &lemon);

      printf ("\nEnter the Rate/kg of Vegitable    = ");
      scanf ("%f", &veg);

      printf ("\nEnter the Rate/kg of Morning Snacks = ");
      scanf ("%f", &ms);

      printf ("\nEnter the Rate/kg of grand total = ");
      scanf ("%f", &gt);

      printf
	("\nNumbers of Egg distributed to each benificiary(PW + LW + CHILD(6 - 36)months) = ");
      scanf ("%d", &ne);

      printf
	("\ndal 	                 =	%.2f\nsoya	                 =	%.2f\negg	                 =	%.2f\nOil                     =  %.2f\ncondiments	             =	%.2f\nfuel	                 =	%.2f\nothers/lemon	         =	%.2f\nvegitables	             =	%.2f\nMorning Snacks	         =	%.2f\nGrand Total	             =	%.2f\nNo. of Eggs/ benificiary =  %d\n",
	 dal, soya, egg, oil, cond, fuel, lemon, veg, ms, gt, ne);
    }
  else if (d <= 0 && d < 1)

    {
      printf ("*********************************************************");
    }
  // this input is needed for finding the total_cost..
  printf
    ("\n_______________________________________________________________________\n");

  printf ("\nStudents, worker and helper presents in Dal day's  = ");
  scanf ("%d", &dal_std);

  printf ("\nStudents, worker and helper presents in Soya day's = ");
  scanf ("%d", &soya_std);

  printf ("\nStudents, worker and helper presents in Egg day's  = ");
  scanf ("%d", &egg_std);

  //this input is needed for finding the Grand total..

  printf
    ("\n_______________________________________________________________________\n");

  printf ("\nPrengnant Women = ");
  scanf ("%d", &pw);

  printf ("\nLatching Women  = ");
  scanf ("%d", &lw);

  printf ("\nChild           = ");
  scanf ("%d", &child);

  printf("__________________________________________________________________________\n");

  printf
    ("..............................%s_(%d)..................................\n",
     m, year);

  printf("__________________________________________________________________________\n");

  printf ("Food Stuff    |   Total Quantity   |  Rate/kg  |   Total Cost    \n");
  printf("__________________________________________________________________________\n");
  if (dal_std > 0)
    {
      a = dal_std * .03;

      c = a * dal;

      printf ("Dal           |        %.3f       |   %.2f   |   %.2f\n", a, dal, c);
      printf("__________________________________________________________________________\n");

    }
  else
    // If the value is smaller then 0 then it return 0...

    return 0;


  if (soya_std > 0)
    {
      a = soya_std * .025;

      c1 = a * soya;

      printf ("Soya          |        %.3f       |   %.2f   |   %.2f\n", a, soya, c1);
     printf("__________________________________________________________________________\n");
    }
  else

    return 0;

  if (egg_std > 0)
    {
      a = egg_std;

      c2 = a * egg;

      printf ("Egg           |       %.3f      |    %.2f   |   %.2f\n", a, egg, c2);
     printf("__________________________________________________________________________\n");
    }
  else

    return 0;

  if (oil > 0)
    {

      a = (dal_std + soya_std + egg_std) * .003;

      c3 = a * oil;

      printf ("oil           |        %.3f       |   %.2f  |   %.2f\n", a, oil, c3);
     printf("__________________________________________________________________________\n");
    }
  else

    return 0;

  if (cond > 0)
    {
      a = (dal_std + soya_std + egg_std) * .32;

      c4 = a;

      printf ("Condimants    |       %.3f      |   %.2f    |   %.2f\n", a, cond, c4);
     printf("__________________________________________________________________________\n");
    }
  else

    return 0;

  if (fuel > 0)
    {
      a = (dal_std + soya_std + egg_std) * .5;

      c5 = a;
      a1 = ((pw + lw + child) * ne) * 0.10;
      a2 = (pw + lw + child) * ne;
      printf
	("Fuel          |  %.2f + %.2f   |%.2f + 0.10|   %.2f + %.2f\n                                                     = %.2f\n",
	 a, a2, fuel, c5, a2 * 0.10, a + a1);
     printf("__________________________________________________________________________\n");
    }
  else

    return 0;

  if (lemon > 0)
    {
      a = (dal_std + soya_std + egg_std) * .10;

      c6 = a;

      printf ("Others/Lemon  |        %.3f      |    %.2f   |   %.2f\n", a, lemon,
	      c6);
     printf("__________________________________________________________________________\n");
    }
  else

    return 0;

  total_cost = (dal_std * 4.56) + (soya_std * 4.12) + (egg_std * 7.52);
  total = c + c1 + c2 + c3 + c4 + c5 + c6;

  if (veg > 0)
    {
      a = c / veg;

      c = total_cost - total;

      printf ("Vegitable     |        %.3f       |    %.2f  |   %.2f\n", a, veg, c);
     printf("__________________________________________________________________________\n");
    }
  else

    return 0;

  printf ("Total_cost    |____________________|___________|   %.2f\n", total_cost);
  printf("__________________________________________________________________________\n");

  printf ("Morning Snacks|        %d         |   %.2f    |   %.2f\n",
	  dal_std + soya_std + egg_std, ms,
	  (dal_std + soya_std + egg_std) * ms);
  printf("__________________________________________________________________________\n");

  gt1 = (((pw + lw + child) * ne) * gt) + (((pw + lw + child) * ne) * 0.10);
  printf
    ("Grand Total  | (%d + %d + %d) = %d * %d = %d | %.2f + 0.10 | %.2f + %.2f\n             (PW + LW + CHILD)                              = %.2f \n ",
     pw, lw, child, pw + lw + child, ne, ((pw + lw + child)) * ne, gt,
     ((pw + lw + child) * ne) * gt, ((pw + lw + child) * ne) * 0.10, gt1);


  printf("__________________________________________________________________________\n");

  printf ("\nHOT COOK       = %.2f\n", total_cost);
  printf ("MORNING SNACKS = %.2f\n", (dal_std + soya_std + egg_std) * ms);
  printf ("T.H.R          = %.2f\n", gt1);
  printf ("_____________________________\n");
  printf ("TOTAL          = %.2f\n",
	  total_cost + (dal_std + soya_std + egg_std) * ms +
	  ((pw + lw + child) * ne) * gt);

  printf ("\nDal  = %d  * 4.56 = %.2f\n", dal_std, dal_std * 4.56);
  printf ("Soya = %d  * 4.12 = %.2f\n", soya_std, soya_std * 4.12);
  printf ("Egg  = %d * 7.52 = %.2f\n", egg_std, egg_std * 7.52);
  printf ("______________________________\n");
  printf ("Total             =  %.2f\n", total_cost);

}
