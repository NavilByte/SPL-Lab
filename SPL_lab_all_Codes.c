
                            /////____Table Of Content___///
/*
                       Handout 1:- Basic,Recaps of Loops
                       Handout 2:- Nested Loop & Patterns(basics & Exercises)
                       Handout 3:- Functions (basics & Exercises)
                       Handout 4:- Array Recap & 2d Array (basics to Exercises)
                       Handout 5:- String (basics & Exercises)
                       Handout 6:- Pointer ,Recurssion,File
                       Handout 7:- Structure (basics to Exercises)
                       Handout 8:- File

                       Home Assingments :- 1-4
                       Class Test       :- 1-5
*/

//________________________________________________________________________________________________

                           // Handout-1 (Basic)//


// 1.Program that will print �Hello World�.
/*
#include<stdio.h>
int main()
{
	printf("Hello world");
	return 0;
}
*/

/* 2.Program that will use newline / tab and print the following segment :
Hello World.
This is my first program. C is fun. */

/*
#include<stdio.h>
int main()
{
	printf("Hello world\n");
	printf("This\tis\tmy\tfirst\tprogram. C\tis\tfun.");
	return 0;
}
*/

/* 3.Program that will print the following segment :
The question is - �How to write a \comment/ in C programming language?� */

/*
#include<stdio.h>
int main()
{
	printf("The question is - \"How to write a \\comment/ in C programming language?\"");
	return 0;
}
*/

/* 4.
Program that will declare an integer, a floating point number, a character.
Then it will initialize them with values and print those values.

The integer value: 5
The floating point value: 3.141593
The character value: a
*/

/*
#include<stdio.h>
int main()
{
	int a = 5;
	float b = 3.233;
	char ch = 'x';
	printf("The integer value:%d\n", a);
	printf("The floating point value:%f\n", b);
	printf("The character value:%c\n", ch);
	return 0;
}
*/

/* 5.
Program that will do the followings:
a) Declare a variable uninitialized
b) Declare and initialize a variable in one statement
c) Declare and initialize multiple variables with different values in one statement
d) Declare and initialize multiple variables with the same value in one statement */

/*
#include<stdio.h>
int main()
{
	int a;
	int b = 0;
	int c = 1, d = 2;
	int e=3, f=3,g=3;

	return 0;
}
*/

/* 6.
Program that will take your age in year(s) as input and print it.*/
/*
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your Age in year:");
	scanf_s("%d", &age);
	printf("Your Age is: %d year",age);
	return 0;
}
*/

/* 7.
Program that will receive the values of an integer, a floating point number,
a character from the keyboard and print those values.*/


#include<stdio.h>
int main()
{
	int a = 5;
	float b = 3.233;
	char ch = 'x';
	scanf("%d%f", &a,&b);
	getchar();
	scanf("%c", &ch);
	printf("The integer value:%d\n", a);
	printf("The floating point value:%f\n", b);
	printf("The character value:%c\n", ch);
	return 0;
}


/* 8.
Program that will take three integer numbers from keyboard
but assign only the first and last inputs to variables
and skip any assignment of the middle one.
Sample input: 20 50 100
Sample output:
First Value = 20, Last Value = 100
*/
/*
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("First Value = %d, Last Value = %d", a, c);
	return 0;

}
*/

/* 9.Program that will declare a variable from each data type: double, boolean.
Then it will initialize them with values and print them.
Sample output:
The double value: 3.140000e+00
The boolean value: 1
Boolean is only 0 or 1*/

/*
#include<stdio.h>
//#include<stdbool.h>
int main()
{
	double a = 2.9999999999999;
	_Bool b = 0;//bool variable=... ;
	printf("The double value:%lf\n", a);
	printf("The boolean value:%d\n", b);
	return 0;
}
*/
//_________________________________________________________________________________________________


                //////////////__RECAP(For loop)___ /////////////////


//1. print the line �C programming� n times, where n is an integer taken as input.

/*
#include<stdio.h>
int main()
{
	int i, n;
	printf("Enter the nth term:");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("C programming");
	}
	return 0;
}
*/


//2.Modify the given code to print 1 to 100, in separate lines.
/*
#include<stdio.h>
int main()
{
	int i, n = 100;
	for (i = 1; i <= n; i++)
	{
		printf("C programming \n");
	}
	return 0;
}
*/


//3.Modify the given code to print 1 to 100, in one line

/*
#include<stdio.h>
int main()
{
	int i, n = 100;
	for (i = 1; i <= n; i++)
	{
		printf("C programming \n");
	}
	return 0;
}
*/



/*
4. How will the following code snippet behave ?

 sum=0;
 for(i=0;i<5;i++)
 {
    sum +=i;
 }

/*
i = 1: i <5 is true, sum = 0+1 =1.

i = 2 : i <5 is true, sum = 1+2=3.

i = 3 : i < 5 is true, sum= 3+3 =6.

i = 4 : i < 5 is true, sum= 6+4= 10.

i = 6 : i < 5 is false, exit the loop

*/


//5.How to print all multiples of 5, up to 100?
/*
#include<stdio.h>
int main()
{
	int i,a,m=5;
	for (i = 1; i <=100; i++)
	{
	  a = m * i;
		printf("%dX%d= %d\n",m,i,a);
	}


   return 0;
}
*/


/* 6.How to print the integers which, divided by 4, gives remainder 1 ?
(Hint: the integers are 1, 5, 9, 13, �) */

/*
#include<stdio.h>
int main()
{
	int i;
		for (i = 1; i <=100; i += 4)
		{
			printf("%d,", i);
		}
	return 0;
}
*/

//ORRRRR

/*
#include<stdio.h>
int main()
{
	int i, n, a, m = 0;
	printf("Enter an Integer:");
	scanf_s("%d", &n);
	if (n % 4 == 1)
	{
		for (i = 1; i <= 100; i += 4)
		{
			a = m + i;
			printf("%d,", a); //printf("%d,",m+i);
		}
	}
	else printf("Invalid");
	return 0;
}
*/


//7.How to print the first 100 even numbers?

/*
#include<stdio.h>
int main()
{
	int i;
	for (i = 2; i <= 200; i += 2)
	{
		printf("%d,",i);
	}
	return 0;
}
*/

//8.How to print the first 100 multiples of 3?
/*
#include<stdio.h>
int main()
{
	int i, s;
	for (i = 1; i <= 100; i++)
	{
		s = 3 * i;        // printf("3x%d= %d \n",i,3*i);
		printf("3x%d= %d \n", i, s);
	}
	return 0;
}
*/



//9.How to print the first 100 perfect squares?
/*
#include<stdio.h>
int main()
{
	int i; //int sr;
	for (i = 1; i <= 100; i++)
	{
		//sr = i * i;
		//printf("%d^2=%d\n",i, sr);
		printf("%d^2=%d\n",i,i*i);
	}
	return 0;
}
*/



//10.How to print the first 100 terms of the series: 1, 2, 4, 8, � ?
/*
#include <stdio.h>
int main()
{
	int i;
	float a = 1;             // Whay int isnt working ?
	printf("1.0,\n");
	for (i = 1; i <= 100; i++)
	{
		a = 2 * a;
		printf(" %.1f, \n", a);
	}

	return 0;
}
*/

// For example, let�s find out the sum of the first 100 odd numbers.

/*
#include<stdio.h>
int main()
{
	int i,t, sum = 0;
    for (i = 1; i <= 200; i++)
	{
		t = 2 * i - 1;
		sum +=t;
		printf("%d+",t);
	}
	printf(" sum = %d", sum);
	return 0;
}
*/


//11.Modify the code to calculate the sum of the first 100 perfect squares.
/*
#include<stdio.h>
int main()
{
	int i,sr, sum = 0;
	for(i = 1; i <= 100; i++)
	{

		sr = i * i;
		sum += sr;
		if (i == 100)
		  printf("(%d^2)=%d ",i,sr);
		else
		  printf("(%d^2)=%d+ ", i, sr);
	}
	printf(" sum = %d\n", sum);
	return 0;
}
*/


/* 12.Modify the code to calculate to product of the first 100 odd numbers.
(Hint: instead of adding, you should multiply the current term.
	Do you need to change anything else?)
	*/
 /*
#include<stdio.h>
int main()
{
	int i,p=1;
	for (i =1; i<=200; i += 2)
	{
		printf("%dx\n",i);
		p *= i;
	}
	printf("Product= %d",p);
	return 0;
}
*/


//13.Modify the code to calculate the factorial of n, where n is an input integer.

/*
#include<stdio.h>
int main()
{
	int i, n, f=1;
	printf("Enter the number: ");
	scanf_s("%d",&n);
	printf("%d!=", n);

	for (i = 1; i <= n; i++)
	{
		f *=i;
		printf("%dx", i);
	}
	printf("=%d!", f);
	return 0;
}
*/

/*
14.Now let�s see if you can use if inside a for loop.
Write a C program to write down the following series,up to n terms
(n should be taken as an input from the user) :1, 0, 1, 0, 1, 0, �
*/

/*
#include<stdio.h>
int main()
{
	int i, n;
	printf("Enter the nth term:");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			printf("0,");
		else
			printf("1,");
	}
	return 0;
}
*/

/*
15.Write a C program to calculate the sum of the following series,
up to n terms (n should be a user input):1 � 2 + 3 � 4 + 5 � 6 + �
*/
/*
#include<stdio.h>
int main()
{
	int i, n, s=0 ;
	printf("Enter the nth term:");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			s -= i;
			printf("%d-", i);
		}

		else
		{
		   s += i;
		   printf("%d+", i);
		}

	}
	printf("sum=%d", s);
	return 0;
}
*/


 //ORRRRRRRR

/*
#include <stdio.h>
int main()
{
	int n, i, a = 0;
	printf("Enter the nth term:");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (!(i % 2 == 0))
		{
			a = a + i;
		}
		else
		{
			a = a - i;
		}
	}
	printf("%d", a);

	return 0;
}
*/






       //////////////__RECAP(While loop & Do while loop)___ /////////////////




	// It is a while variant of printing 1 to 100.
	/*
	#include<stdio.h>
	int main()
	{
		int i = 1;
		while (i <= 100)
		{
			printf("%d,", i);
			i++;
		}
		return 0;
	}
	*/

	/* 1.Write a C program to print all odd numbers up to 100.
	Use while loop instead of for loop. */

	/*
	#include<stdio.h>
	int main()
	{
		int i = 1;
		while (i <= 100)
		{
			printf("%d,", i);
			i += 2;
		}
		return 0;
	}
	*/

	/* 2.Write a C program to print the first 100 odd numbers.
	Use while loop instead of for loop.*/

	/*
	#include<stdio.h>
	int main()
	{
		int i = 1; // t,
		while (i <= 200) //(i<=100)
		{
			printf("%d,",i); //t = 2 * i-1;
			i+=2;
		}
		return 0;
	}
	*/

	/* 3.Write a C program to calculate the sum of the first 100 perfect squares.
	Use while loop instead of for loop*/

	/*
	#include<stdio.h>
	int main()
	{
		int i = 1, sr,sum=0;
		while (i <= 100)
		{
			sr = i * i;
			if(i==100)
				printf("(%d^2)=%d.", i, sr);
			else
				printf("(%d^2)=%d+", i, sr);
			sum += sr;
			i++;
		}
		printf("the sum = %d", sr);
		return 0;
	}
	*/


	/* 4 & 5...But now that this change is inside the loop,
	we can make ad-hoc changes to the variable.
	Consider the following code:*/

	/*
	#include<stdio.h>
	int main()
	{
		int a, b;
		scanf_s("%d %d", &a, &b);
		while (a != b)
		{
			printf("%d\n", a * a);
			if (a > b)
				a--;
			else
				a++;
		}
		printf("Done!\n");
		return 0;
	}
	*/


	/* 6. Write a C program to check if an input integer is a power of 2.
	The idea is to keep dividing the number by 2, until you get an odd number.
	If the last number is 1, then the input is a power of 2, otherwise not. */

	// Normal While Approach.

	/*
	#include<stdio.h>
	int main()
	{
		int n, a;
		printf("Enter a number: ");
		scanf_s("%d", &n);
		a = n;

		while (a != 1)  // divide a until d = 1.
		{
			if (a % 2 != 0)
				break;    // check, if a is an odd number then break the loop.
	     		a /= 2;   // check, if a is an even number .
		}
		if (a == 1)
			printf("%d is Power of 2", n);
		else
			printf("%d is not Power of 2", n);
		return 0;
	}
	*/

	 //Bitwise Aproach.

	 /*
	#include<stdio.h>
	int main()
	{
		int a, n;
		printf("Enter the integer:");
		scanf_s("%d", &n);
		a=n&(n-1);
		if (a == 0)
			printf("the input is a power of 2");
		else
			printf(" the input is not a power of 2 ");
		return 0;
	}
	*/



	/* 7.Write a C program to calculate the GCD of two input integers.
	To calculate the GCD of a and b, you need to calculate the remainder of a and b,
	and then b becomes the new a, and the remainder becomes the new b.
	This process should repeat until the remainder is 0..  */

	/*
	#include<stdio.h>
	int main()
	{
		int n1, n2, r, v1,v2, gcd,lcm;
		printf(" Enter 2 number: \n");
		scanf_s("%d %d", &n1, &n2);
		if (n1>n2)    //1st number has to be greatre than 2nd number to calculate gcd & lcm.
		{
			v1=n1; // v1 & v2 is temporary variable to keep main input fixed.
			v2=n2 ;

			while (v2 != 0)
			{
				r = v1 % v2;
				v1 = v2;
				v2 = r;
			}
			gcd = v1;
			lcm = (n1*n2) / gcd;
			printf(" GCD = % d\n", gcd);
			printf("LCM = %d\n", lcm);
		}
		else
			printf("1st number has to be greatre than n2 to calculate gcd & lcm\n");

		return 0;
	}
	*/



	/* Example for 8..
	Consider the following code. The target is to keep inputting until you input 100 .*/

	/*
	#include<stdio.h>
	int main()
	{
		int a;
		scanf_s("%d", &a);
		while (a != 100)
		{
			scanf_s("%d", &a);

		}
		printf("Reached 100!\n");
		return 0;
	}
	*/


	/* 8.Write a program to find out if an input integer n is prime or not.
	The idea is to divide n by 2 to n-1.
	If n is divisible by neither (we can check that by observing the remainder), then n is prime.
	But if n is divisible by any of them, then n is not prime.
	You should use break to solve this problem..*/

	/*
	#include<stdio.h>
	int main()
	{
		int n, i = 2, d = 0;
		printf("Enter the number:\n");
		scanf_s("%d", &n);
		while (i < n)
		{
			if (n%i == 0)
			{
			  d++;  // If the loop executes once there will be increment to count the execution.
			  break;  //& wont execute again cz its divisible by 2 to (n-1)so,its not prime number.
			}
			i++;
		}
		if(d==0)   //Updated value of d will be counted here.
			printf("%d is prime number.\n",n);
		else
			printf("%d is not prime number.",n);

		return 0;
	}
	*/


	 //ORRRRRRRRRR another way:

	/*
	#include <stdio.h>
	int main()
	{
		int n, a, b = 0, c, i = 2;
		printf("Enter the number:");
		scanf_s("%d", &n);
		c = n - 2;
		do
		{
			a = n % i;
			i++;
			if (a == 0)
			{
				b = 1;
				break;
			}

		} while (i <= c);
		if (b == 0)
			printf("prime");
		else if (b == 1)
			printf("not prime");


		return 0;
	}

	*/
//_________________________________________________________________________________________________

                        // Handouts-2 (Nested Loop)//

/* 1.
WAP that will print a pattern based on the input integer n. Please see the sample input output.
Sample input                                            sample output
3                                                          123
                                                           123
                                                           123
*/
/*
#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the integer:");
    scanf_s("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
*/

/* 2.
WAP that will print a pattern based on the input integer n. Please see the sample input output.
Sample input                                            sample output
3                                                          123
                                                           234
                                                           345
*/

/*
#include <stdio.h>
int main()
{
    int n,i, j, c = 1;
    printf("Enter the integer:");
    scanf_s("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d", c);
            c++;
        }
        c =c-(n - 1);
        printf("\n");
    }

    return 0;
}
*/

/* 3.
WAP that will print a pattern based on the input integer n. Please see the sample input output.
Sample input                                            sample output
      3                                                    1
                                                           23
                                                           345
*/

/*
#include <stdio.h>
int main()
{
    int n, i, j, c = 0;
    printf("Enter the integer:");
    scanf_s("%d", &n);
    //int d = n + 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            c++;
            printf("%d", c);
        }
       // c = d-n;
        c + i;
        printf("\n");
    }

    return 0;
}
*/

//Nested loop Practice //

/* 1.
Write a C program to print all integers from 1 to n, a total of n times. */

/*
#include<stdio.h>
int main()
{
  int n, i, j;
  printf(" Enter number:");
  scanf_s("%d", &n);

  //If  Outer loop is executed once, Inne4r loop will be executed n times.
  for (i = 1;i <= n; i++)
  {
     for (j =1; j <= n; j++)
     {
       printf("%d ",j);
     }
     printf("\n");
  }
  return 0;
}
*/

/* 2.
Manual tracing is a good option for understanding nested loops.
Trace the following C program, write down the output, and explain what this program does.
(Consider n = 4 for this program.)
*/

/*
* #include<stdio.h>
int main()
{
  int n, i, j, sum;                // (1) taking 4 integer type variable.
  scanf_s("%d", &n);             //(2) taking input in n variable( n=4).

   //If Outer loop is executed once, Inner loop will be executed n times.

  for (i = 1; i <= n; i++)               // i<=n true & 1st execution of Outer loop.
  {
     sum = 0;                           // sum variable's value assigned as 0.
     for (j = 1; j <= n; j++)           //j=1 & j<=n its true & inner loop will run 4 times ( 1 to 4)
     {
         sum += i * j;    //When i=1 & j= (1 to 4):- 1x1+0 =1;  1x2+0=2;  1x3+0=3 ; 1x4+0=4; sum=1+2+3+4=10.
                          //When i=2 & j= (1 to 4):- 2x1+0 =2;  2x2+0=4;  2x3+0=6 ; 2x4+0=8; sum=2+4+6+8=20.
                          //When i=3 & j= (1 to 4):- 3x1+0 =3;  3x2+0=6;  3x3+0=9 ; 3x4+0=12; sum=3+6+9+12=30.
                          //When i=4 & j= (1 to 4):- 4x1+0 =4;  4x2+0=8;  4x3+0=12; 4x4+0=16; sum=4+8+12+16=40.
     }

     printf("sum %d: %d\n", i, sum);
                                       After execution of Outer loop 1st time & Inner loop 4times
                                       it will print Sum with value of i & sum & make new line.
                                       After that itwill go to outer loop & increase value of i 1 to 2 .
                                       And these procedures will be held  2 to 3 ,3 to 4. that means 4 times.
  }
  return 0;                     // After all procedures it will return 0 to main function.
}
*/
//Output :
/* 4
sum 1: 10
sum 2: 20
sum 3: 30
sum 4: 40     */



/* 3.
Write a C program that will print a rectangle of stars. See the sample input/output for clarification:

Sample Inpuit: 5 3
sample Output:
*****
*****
*****

*/

/*
#include<stdio.h>
int main()
{
   int l, w,i, j;
   printf(" Enter Length:");
   scanf_s("%d", &l);
   printf(" Enter width:");
   scanf_s("%d", &w);
   printf("the rectangle is here: \n");

   for (i = 1; i <=w ; i++)
   {
      for (j = 1; j <=l; j++)
      {
        printf("*");
      }
      printf("\n");
   }
  return 0;
}
*/

/* 4.
Write a C program that will print a square of dollars and hashes, as described in the following samples.
(Hint: if the current line number is odd, print dollars. Otherwise, print hashes.)

Sample Inpuit: 6                                          ample Output: $$$$$$
                                                                        ######
                                                                        $$$$$$
                                                                        ######
                                                                        $$$$$$
                                                                        ######
*/

/*
#include<stdio.h>
int main()
{
   int n, i, j;
   printf(" Enter the number:");
   scanf_s("%d", &n);

   for (i = 1; i <= n; i++)
   {
     for (j = 1; j <= n; j++)
     {
      if(i%2 !=0)
        printf("$"); // when i is Odd number, Printing ($)
      else
        printf("#");  // when i is Even number, Printing (#)
     }
     printf("\n");
   }
  return 0;
}
*/

/* 5.
Now check out the following samples.
Can you print triangles like this? (Hint: In the ith line, you have to print i stars.)
sample input: 5
Output:
*
**
***
****
*****
******             */

/*
#include<stdio.h>
int main()
{
   int n, i, j;
   printf(" Enter number:");
   scanf_s("%d", &n);

  //If Outerloop is executed once, Inner loop will be executed n times.

   for (i = 1; i <= n; i++)        // This loop prints n lines
   {
      for (j = 1; j <= i; j++)        // This loop prints i stars in one line
      {
        printf("*");
      }
      printf("\n");
   }
  return 0;
}
*/

/* 6.
Write a C program that will print triangles of stars, as follow.
sample input: 5
Output:
*****
****
***
**
*             */

/*
#include<stdio.h>
int main()
{
    int n, i, j;
    printf(" Enter number:");
    scanf_s("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
        printf("*");
        }
        printf("\n");
    }
   return 0;
}
*/



/* 7.
Write a C program that will print triangles of dollars and hashes, as follow.
sample input: 5
Output:
$
##
$$$
####
$$$$$           */

/*
#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter number:");
    scanf_s("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
           if (i % 2 != 0)
              printf("$");   // when i is Odd number, Printing ($)
           else
              printf("#");   // when i is Even number, Printing (#)
        }
        printf("\n");
    }
}
*/


/* Flag Questio: Consider the following triangles. How can you print such patterns?
sample input: 5
                                        Output:
                                            *
                                           **
                                          ***
                                         ****
                                        *****
*/

/*
#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter number:");
    scanf_s("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");           //Printing n-i numbers space(_)
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");          //Printing i numbers Star(*)
        }
        printf("\n");
    }
    return 0;
}
*/


/* 8. Write a C program that will print triangles of dollars and hashes, as follow:
sample input: 5
                                        Output:
                                            $
                                           ##
                                          $$$
                                         ####
                                        $$$$$
*/
/*
#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter number:");
        scanf_s("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");     //Printing n-i numbers space(_)
        }
        for (j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
                printf("$");  // when i is Odd number, Printing ($)
            else
                printf("#");    // when i is Even number, Printing (#)
        }
        printf("\n");
    }
    return 0;
}
*/

/* 9.Write a C program that will print triangles of stars, as follow.
sample input: 5
                                        Output:
                                        *****
                                         ****
                                          ***
                                           **
                                            *      */

/*
int main()
{
    int n, i, j;
    printf("Enter number:");
    scanf_s("%d", &n);
    for (i = 0; i < n; i++)
    {

        for (j = 1; j <= i; j++)  // Condition false so wont execute 1st time.
        {
            printf(" ");
        }
        for (j = 0; j < n - i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
*/

/* 10.  Write a C program that will print triangles of stars, as follow.
(Hint: at the ith line, there are (2i + 1) stars.)

sample input: 5
                                        Output:
                                            *
                                           ***
                                          *****
                                         *******
                                        *********
*/

/*
#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter number:");
    scanf_s("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <=(2*i +1); j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
*/


/* flag f...
rom this analysis, we write the following code :
*/

/*
#include<stdio.h>
int main()
{
    int n,i,j,mid = (n + 1)/ 2;
    printf("Enter number:");
    scanf_s("%d", &n);

    for (i = 1; i <= mid; i++) // Top half, including the middle line
    {
        for (j = 1; j <= n; j++)
        {
            if (i == mid || j == mid || j == mid - i + 1 || j == mid + i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = mid - 1; i >= 1; i--) // Bottom half, excluding the middle line
    {
        for (j = 1; j <= n; j++)
        {
            if (i == mid || j == mid || j == mid - i + 1 || j == mid + i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

/* 11. Write a C program that will print the pattern as follow:
    Sample input:5
          *****
             *
            *
           *
          *****
 */

/*
#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter number:");
    scanf_s("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == n - i + 1) // If one of these condition is true then star (*)
                                                     //will be printed at every iteration of inner loop ,else space( ).
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/

/* Write a C program that will print the pattern as follow:
sample input: 5
                                     Output:
                                    1       1
                                    12     21
                                    123   321
                                    1234 4321
                                    123454321
*/

/*
#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter number:");
    scanf_s("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)   //1st half of 1st row 1 to n.
        {
            if (j <= i)
                printf("%d", j);
            else
                printf(" ");
        }
        for (j =n-1;j>=1; j--)    //2nd half of 1st row n to 1.
        {
            if (j <= i)
                printf("%d", j);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/

/*

8
********
*      *
*      *
*      *
********
*      *
*      *
********

*/


/*
#include<stdio.h>
int main() {

    int i, j, inp;

    scanf_s("%d", &inp);

    for (i = 1; i <= inp; i++)
    {

        for (j = 1; j <= inp; j++)
        {

            if (i == 1 || i == inp || j == 1 || j == inp || i == inp / 2 + 1 && inp > 3)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
*/


//_______________________________________________________________________________________

                         //////// Handout-3 (Function) ////////


// Basics of Function..

/* Combination -> input: n ,r & output :nCr.*/
/*
#include<stdio.h>
 int factorial(int n)
{
	int fact = 1, i;
	for (i = n; i >= 1; i--)
	{
		fact = fact* i;
	}
	return fact;
}

int main()
{
	int n, r, ncr, nf, rf, nrf, i;
	scanf_s("%d %d", &n, &r);

	nf = factorial(n);
	rf = factorial(r);
	nrf = factorial(n - r);

	ncr = nf / (rf * nrf);
	printf("ncr=%d\n", ncr);
	return 0;
}
*/


//Array as perameter   2nd system://
/*
#include<stdio.h>
void arrmax(int array[], int a)
{
	int j, sum = 0;
	for (j= 0;  j< a; j++)
	{
		sum += a[j];
	}
	printf("sum =%d",sum);
}
int main()
{
	int array[100], a, max,sum;

		scanf_s("%d", &a);
		arrmax(array, a);

}
*/


                 ////////////// Exercises.......................................


/*1. Function to print a custom message.
Sample input       Sample output
                  This is a function

 */

 /*
 #include<stdio.h>
  void custom ()
 {
      printf("This is a function");
 }

  int main()
  {
      custom();
      return 0;
  }
  */

/* 2. Function to print an input character value.
Sample input           Sample output
3                  Value received from main: 3

A                  Value received from main: A */

/*
#include<stdio.h>
char a(char c)
{
    printf(" Value received from main: %c",c);
    return c;
}

int main()
{
    int c;
    printf("Enter a charachter:");
    c = getchar();
    a(c);
    return 0;
}
*/

/* 3. Function to determine if a number is even or odd.
Sample input                   Sample output
3                                odd
8                               even

*/
/*
#include<stdio.h>
    int a(int n)
{
    if (n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    return n;
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf_s("%d", &n);
    a(n);
    return 0;
}
*/

/* 4.Function to determine if a number is positive, negative or zero.
Sample input      Sample output
3                   positive

-5                   negative

0                     zero
*/

/*
#include<stdio.h>
    void a(int n)
{
    if (n > 0)
        printf("positive");
    else if(n<0)
        printf("Negative");
    else if(n==0)
        printf(" Zero");

}
int main()
{
    int n;
    printf("Enter a number:");
    scanf_s("%d", &n);
    a(n);
    return 0;
}
*/
/* 5.
Function that takes two numbers as input
and determines if the first number is greater than, equal to or less than the second number.
Sample input         Sample output
5 4                   5 is greater than 4
2 6                   2 is less than 6
8 8                   8 is equal to 8
*/

/*
#include<stdio.h>
int num(int x, int y)
{
    if (x > y)
        printf(" %d is greater than %d",x, y);
    else if (x < y)
        printf(" %d is les than %d",x, y);
    else if (x == y)
        printf(" %d is equal to %d",x, y);
       return x,y;

}
int main()
{
    int x, y;
    printf("Enter Two numbers");
    scanf_s("%d %d", &x, &y);
    num(x,y);
    return 0;
}
*/

/* 6. Function to calculate the sum of n numbers coming from the console.
Sample input             Sample output
80 33 27                Sum In Function: 140

                        Sum In Main: 140
100 -100                Sum In Function: 0
Sum In Main: 0*/

/*
#include<stdio.h>
int num(int a[],int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf(" Sum In Function : %d",sum);
    return sum;
}
int main()
{
    int a[1000],n, i,sum = 0;
    printf("enter array size:");
    scanf_s("%d", &n);
    printf("enter elements of the array:");
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &a[i]);
    }
    num(a, n);
    return 0;
}
*/

/* 7. Function to calculate the sum of n numbers coming from the console and stored in an array.
Sample input           Sample output
3
80 33 27                Sum In Function: 140

2
100 -100               Sum In Function: 0
*/

/*
#include<stdio.h>
int num(int a[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf(" Sum In Function : %d", sum);
    return sum;
}
int main()
{
    int a[1000], n, i, sum = 0;
    printf("enter array size:");
    scanf_s("%d", &n);
    printf("enter elements of the array:");
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &a[i]);
    }
    num(a, n);
    return 0;
}
*/
/* 8. Function that takes an array of n integer numbers as input and prints them in reverse order.
Sample input             Sample output
3
4 8 2                     2 8 4

7
5 12 34 8 43 21 9         9 21 43 8 34 12 5
*/

/*
#include<stdio.h>
 void func(int a[],int n)
{
    int i;
    printf("Enter array elements:");
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &a[i]);
    }
    int j;
    for (j= n; j >= 0; j--)
    {
        printf("%c", a[j]);
    }
    a[i] = '\0';
    printf(" reverse order: %c",a[i]);

}
int main()
{
    int a[1000], n, i;
    printf("Enter array size:");
    scanf_s("%d", &n);

    func(a, n);
    return 0;
}
*/
/*9. Function to calculate the factorial of a number.
Sample input      Sample output
3                     6
5                    120        */

/*
#include<stdio.h>
int factorial(int n)
{
    int fact = 1, i;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;

}
int main()
{
    int n, nf;
    printf("enter the number = ");
    scanf_s("%d",&n);
    nf = factorial(n);
    printf("%d! = %d",n, nf);
    return 0;
}
*/

/* 10. Function to take two positive numbers x and y as input and calculate x to the power y.
Sample input          Sample output
3 4                  3 to the power 4 is 81
10 3                 10 to the power 3 is 1000*/

/*
#include<stdio.h>
#include<math.h>

int num(int x ,int y)
{
    pow(x,y);
    return pow(x,y);
}
int main()
{
    int  x, y;
    printf("Enter two positive numbers:");
    scanf_s("%d %d", &x, &y);
    num(x,y);
    printf("%d to the powe %d =%d",x,y,num(x,y));
    return 0;
}
*/

/* 11. Function to take a string as input and find its length.
Sample input      Sample output
hello world             11
I love my country       17*/

/*
#include<stdio.h>
void func(char str[])
{
    int i,c=0;
    for (i = 0; str[i] != '\0'; i++)
    {
        c++;
    }
    printf("Length of the string:%d",c);

}
int main()
{
    char str[1000];
    printf("Enter a string:");
    gets_s(str);
    func(str);
    return 0;
}
*/
/* 12. Function to swap two numbers.
(Restriction: Pass by value)
Sample input        Sample output

10 20                Value in func: 20 10
                     Value in main: 10 20

*/
/*
#include<stdio.h>
void func(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
      printf("Value in func:%d %d", a, b);
}
int main()
{
    int a, b;
    printf("Enter two numbers:");
    scanf_s("%d %d", &a, &b);
    printf("Value in main:%d %d  \n",a,b);
    func(a,b);
    return 0;

}
*/

/* 14.
Function to determine only even numbers in an array of input integers.
Sample input                 Sample output
24 77 117 -512 1024          24 -512 1024

45 33 0 256                   0 256
*/
/*
#include<stdio.h>
void func(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
       if (a[i] % 2 == 0);
        printf(" %d",a[i]);
    }


}
int main()
{
    int a[1000],n,i;
    printf("Enter array size:");
    scanf_s("%d", &n);
    printf("Enter array elements:");
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &a[i]);
    }
    func(a, n);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int i, x, y, z = 1;
    printf("enter two positive numbe X & Y :");
    scanf_s("%d %d", &x, &y);

    for (i = 1; i <= y; i = i + 1) // value of i is increasing till Y's value.
    {
        z = z * x;  //value of z is updating according to per spin of the loop .
    }
    printf("X^Y =%d", z);
    return 0;
}
*/
/* Write a C program that will take as input two integers a and b, and calculate ab.
You must create a function to calculate ab. You cannot use math.h functions.
.*/

/*
#include<stdio.h>
int num(int a, int b)
{
    int i,c=1;
    for (i = 1; i <= b; i++)
    {
        c = c*a;
    }
    return c;
}
int main()
{
    int a,b,d;
    printf("Enter two integers:");
    scanf_s("%d %d", &a, &b);
    d=num(a,b);
    printf("%d^%d = %d", a,b,d);
    return 0;
}
*/

//_______________________________________________________________________________________

                        // Handout-4 ( Array recap, 2D Array)//



                    //////  L-5(Intro to Array) ////////


/* 1.Write a C program that will take as input 20 numbers into an array,
and print the numbers at even indices (i.e. at index 0, 2, 4, � , 18)*/

/*
#include<stdio.h>
int main()
{
    int a[20], i;                //Declaring arry index range 0-19.
    for (i = 0; i < 20; i++)
    {
        scanf_s("%d", &a[i]);   //taking 20 value on 20 index.
    }
    for (i = 0; i < 20; i += 2)
    {
        printf("%d ", a[i]);    //printing each value of Incremented index.
    }
    return 0;
}
*/

/* 2. Write a C program that will take as input 20 numbers into an array,
  and print only the even numbers of the array. */

/*
#include<stdio.h>
int main()
{
    int a[20], i;                   //Declaring arry index range 0-19.
    for (i = 0; i < 20; i++)
    {
        scanf_s("%d", &a[i]);       //taking 20 value on 20 index.
    }
    for (i = 0; i < 20; i++)
    {
        if (a[i] % 2 == 0)          //Checking even value of index & printing.
            printf("%d,", a[i]);
    }
    return 0;
}
*/

/* 3. Write a C program that will take as input 20 numbers into an array,
and print the numbers in reverse order.
(Hint: start the for loop from the last index, and run till the first index.) */

/*
#include <stdio.h>
int main()
{
    int a[20],i;                         //Declaring arry index range 0-19.
    for (i = 0; i < 20; i++)
    {
        scanf_s("%d", &a[i]);          //taking 20 value on 20 index.
    }
    for (i = 19; i > -1; i--)         //Checking index value in revers way &printing.
    {
        printf("%d,", a[i]);
    }
    return 0;
}
*/

/* 4.Trace the following code for better understanding.
It is a miniature version of the above code. */
/*
#include <stdio.h>
int main()
{
    int a[5] = { 5, 6, 4, 9, 7 };      //Declaring arry index range 0-4 & Intializing with value.
    int highest = a[0], i;             //Highest is assigned as zero index's value.
    for (i = 1; i < 5; i++)            //checking value fron 1 index.
    {
        if (highest < a[i])            //Is other values greater  than highest?
        {
            highest = a[i];            // shifting the latest value.
        }
    }
    printf("The highest mark is %d\n", highest);
    return 0;
}
*/

/* 5.Write a C program that will take as input the final examination marks of 100 students,
and calculate the lowest mark. */

/*
#include<stdio.h>
int main()
{
    int ar[100], i;
    for (i = 0; i <100; i++)
    {
        scanf_s("%d", &ar[i]);   //taking 100 value on 100 index.
    }

    int lowest = ar[0];          //Lowest is assigned as zero index's value.
    for (i = 1; i < 100; i++)    //checking value fron 1 index.
    {
        if ( lowest > ar[i])     //Is other values smaller than lowest?
            lowest = ar[i];      // shifting the latest value.
    }
    printf("The lowest mark is: %d\n", lowest);
    return 0;
}
*/


/* 6. Find the  sum & average mark of 100 student.Please do typecast for averagge.
cause it can be fractional number*/

/*
#include<stdio.h>
int main()
{
    int mrks[10], i;
    for (i = 0; i < 10; i++)
    {
        scanf_s("%d", &mrks[i]);
    }
    int sum = 0;
    for (i = 0; i < 10; i++)
    {
        sum += mrks[i];
    }
    double ave = (double)sum / 10;
    printf(" the sum is:%d \n & the averagge is : %lf \n", sum,ave);

    return 0;
}
*/


/* Write a C program that will take as input 20 numbers,
and calculate the average of all the nonzero numbers only.
(Hint: you have to keep track of how many nonzero numbers you find.)*/

/*
#include<stdio.h>
int main()
{
    int num[10], i, sum = 0,count=0;
    double ave;

    for (i = 0; i < 10; i++)
    {
        scanf_s("%d", &num[i]);
    }

    for (i = 0; i < 10; i++)
     {
        if (num[i] != 0)
        {
            sum += num[i];
            count = count + 1;
        }
     }
    ave = (double)sum / count;
     printf("the average of all the nonzero number: %lf", ave);
    return 0;
}

*/

//________________________________________________________________________________________

                        // L-5 (User define Array Size)//



/*
Let�s extend the previous problem a bit.

Write a C program that will take as input the final examination marks of n students
(n should be taken from user as well), and calculate the highest mark,
the lowest mark and the average mark.

Can we declare array size according to user input?
Long story short � we can�t. But we can create a fa�ade for the users. How?
The idea is to declare a very large array (as long as 10000),
and then utilize only the portion declared by the user. The solution is demonstrated below:

#include <stdio.h>
int main()
{
    int array[10000];
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    // rest of the code goes here
}
*/



/* 1.Write a C program that will input n numbers (n should be taken from the user),
and calculate their sum.*/

/*
#include<stdio.h>
int main()
{
    int array[10000], n, i,sum=0;              // Facade for user drfine
    printf("Enter the array range as u want:");
    scanf_s("%d", &n);
    printf("Input The value: ");

    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &array[i]);             //taking n value on n index.
        sum += array[i];                      //Adding value 1 by 1
    }
    printf("The sume is: %d\n", sum);
        return 0;
}
*/

/* 2...Write a C program that will do the following:
Take as input an integer n.
Input n integers in an array.
Input another n integers in another array.
Add the same indexed numbers from the two arrays, and put the sum in another array.

 Sample input:                           Sample Output:
    5                                    7 9 6 7 8
    3 6 1 5 7
    4 3 5 2 1
*/

/*
#include<stdio.h>
int main()
{
    int x[10000],y[10000],z[10000] ,n, i;         // Facade for user drfining.
    printf("Enter Array size/ Index range: ");
    scanf_s("%d", &n);

    printf("Enter 1st Index's Value: ");
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &x[i]);                     //taking n values on n index.
    }
    printf("Enter 2nd Index's Value: ");
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &y[i]);                    //taking n values on n index.
    }
    for (i = 0; i< n; i++)
    {
        z[i]=x[i] + y[i];                    // addin indexed values  & putting into another index.

    }
    for (i= 0; i < n; i++)
    {
        printf("%d ", z[i]);                //printing latest indexed value.

    }
    return 0;
}
*/

/* 3__Write a C program that will do the following:
Take as input an integer n.
Input n integers in an array.
Take as input another integer k.
Find out whether k exists in the array or not.

sample input:                        Sample output:
 5
 3 6 1 5 7                               found
 5

 5
 3 6 1 5 7                              Not found
 4
                                                      */

/*
#include<stdio.h>
int main()
{
    int a[10000], n, k, i,count=0;        // Facade for user drfining
    printf("Enter 1st array range:");
    scanf_s("%d", &n);
    printf("Enter integers:");
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &a[i]);            //taking n values on n index.
    }
    printf("Enter another integer:");
    scanf_s("%d", &k);

    for (i = 0; i < n; i++)
    {
        if (k == a[i])              //when the condition is true.
        {
            printf("Found");
            count++;                // counting execution.
        }
    }
    if(count==0)                    //if the loop doesnt execute once.
        printf("Not found");
    return 0;
}
*/

/* 4__Write a C program that will input n integers into an array (n should be taken from the user),
and replace all the multiples of 3 in the array by -1.
Sample input:                           Sample Output:
    8
    2 3 9 14 18 5 7 12                   2 -1 -1 14 -1 5 7 -1
*/

/*
#include<stdio.h>
int main()
{
    int a[10000], n, i, r = -1;       // Facade for user drfining
    printf("Enter array size:");
    scanf_s("%d", &n);
    printf("Enter integers:");
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &a[i]);         //taking n values on n index.
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0)            //Multiples of 3
            a[i] = r;                  // replacing the value.
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);          //printing non multiples of 3 value.
    }
    return 0;
}
*/
//________________________________________________________________________________________________


                            //L-6 2D Array //


//Basics of 2D Array.

/*
#include <stdio.h>
int main()
{
    int a[3][3];                     //1st one = row & 2nd one = column.
    int i, j;
    printf("Entwer Elements:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf_s("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/


/* Row to column*/

/*
#include <stdio.h>
int main()
{
    int a[3][3];
    int i, j;
    printf("Entwer Elements:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf_s("%d", &a[i][j]);
        }
    }

    for (j = 0; j < 3; j++)   // Column turning into row.
    {
        for (i = 0; i < 3; i++) //row turning into column.
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/


                ///////////////Exercises...............................................

/*
1. WAP that will take 9 integers into a 3 by 3 array (2D) and show them as traditional matrix
view.
Sample input                                        Sample output
9 8 7 6 5 4 3 2 1                                           9 8 7
                                                            6 5 4
                                                            3 2 1

1 1 1 2 2 2 3 3 3                                           1 1 1
                                                            2 2 2
                                                            3 3 3       */


/*
#include<stdio.h>
int main()
{
    int a[3][3], i, j;
    printf("Enter integers:");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf_s("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/* 2. WAP that will take (m x n) integers into a m by n array (2D) and print them both row-wise
and column-wise.
Sample input (m,n)                           Sample output
2 3
1 2 3                                        Row-wise: 1 2 3 6 5 4
6 5 4                                        Column-wise: 1 6 2 5 3 4

3 3
1 1 1                                        Row-wise: 1 1 1 2 2 2 3 3 3
2 2 2                                        Column-wise: 1 2 3 1 2 3 1 2 3
3 3 3                                                                              */

/*
#include<stdio.h>
int main()
{
    int a[100][100], m, n, i, j;
    printf("Enter 2d array size:");
    scanf_s("%d %d", &m, &n);
    printf("Enter elements: \n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf_s("%d", &a[i][j]);
        }
    }
    printf("Row wise:");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
        }
    }
    printf("\nColumn wise:");
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            printf("%d", a[i][j]);
        }
    }
    return 0;
}
*/


/* 3. WAP that will take inputs of a 3 by 3 matrix into a 2D array.
Now find the determinant of this matrix. http://www.mathsisfun.com/algebra/matrix-determinant.html
Sample input          Sample output
                               0
1 2 3
4 5 6
7 8 9

Index Number of Row & Column: [0][0]1
Index Number of Row & Column: [0][1]2
Index Number of Row & Column: [0][2]3
Index Number of Row & Column: [1][0]4
Index Number of Row & Column: [1][1]5
Index Number of Row & Column: [1][2]6
Index Number of Row & Column: [2][0]7
Index Number of Row & Column: [2][1]8
Index Number of Row & Column: [2][2]9
                                           */
/*
#include<stdio.h>
int main()
{
    int a[3][3], i, j, d = 0;
    printf("Enter elements:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            //printf("Index Number of Row & Column: [%d][%d]", i, j);
            scanf_s("%d", &a[i][j]);
        }
    }
    printf("The matrix is: \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            d =  a[0][0] *( a[1][1] * a[2][2] - a[1][2] * a[2][1] )
                 - a[0][1] *( a[1][0] * a[2][2] - a[1][2] * a[2][0] )
                  + a[0][2] * ( a[1][0] * a[2][1] - a[1][1]* a[2][0] );
        }
    }
    printf("Determinant of the matrix is: %d", d);
    return 0;
}
*/
                  //ORRRRRRRRRRRRRRRRRRRR//
/*
 #include<stdio.h>
int main()
{
    int a[100][100],n,i, j, sum = 0;

    printf("n= ");
    scanf_s("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            //printf("A[%d][%d]= ", i, j);
            scanf_s("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++);
    {
        for (j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 ||  i == j || i == n - i - 1)
                sum = sum + a[i][j];
        }
    }
    printf("\n%d", sum);

    return 0;
}

*/

/* 4.
WAP that will take inputs of a n sized square matrix into a 2D array.
Now show all the elements of its two diagonals. Reference: http://en.wikipedia.org/wiki/Main_diagonal

Sample input                                       Sample output
5
1 2 3 4 5
5 4 3 2 1                                         Major diagonal: 1 4 2 9 4
2 2 2 2 2                                         Minor diagonal: 5 2 2 7 1
6 7 8 9 0
1 9 3 7 4
                                                                             */
/*
#include<stdio.h>
int main()
{
    int a[100][100], n, i, j;
    printf("Enter the size of square matrix:");
    scanf_s("%d", &n);
    printf("Enter matrix elements : \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf_s("%d", &a[i][j]);
        }
    }
    printf("Major Diagonal:");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                printf("%d ", a[i][j]);
        }
    }

    printf("\nMinor Diagonal:");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i+j==n-1)
                printf("%d ", a[i][j]);
        }
    }

    return 0;
}
*/

/* 5.
WAP that will take the size of an identity matrix from the user and generate the identity matrix into a 2D array.
Finally display it. Reference:http://en.wikipedia.org/wiki/Identity_matrix

Sample input                                 Sample output
     5                                         1 0 0 0 0
                                               0 1 0 0 0
                                               0 0 1 0 0
                                               0 0 0 1 0
                                               0 0 0 0 1
                                                                   */
/*
#include<stdio.h>
 int main()
{
    int n, i, j;
    printf("Enter the size of  matrix:");
    scanf_s("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j )
              printf("1");
            else
              printf("0");
        }
        printf("\n");
    }

    return 0;
}
*/

/* 6.
WAP that will take inputs of two m x n sized matrix into two 2D array,
suppose A and B. Now do C = A + B. Finally display all the elements from matrix / 2D array C.
Sample input
2 3                                  Sample output
1 2 3   1 1 1                           2 3 4
2 3 4   2 2 2                           4 5 6


                                            */


/*

#include<stdio.h>
int main()
{
    int A[100][100], B[100][100], C[100][100], m, n, i, j;
    printf("enter row & column number:");
    scanf_s("%d%d", &m, &n);

    printf("Enter 1st Matrix elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf_s("%d", &A[i][j]);
        }
    }
    printf("Enter 2nd Matrix elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf_s("%d", &B[i][j]);
        }
    }
    printf("Added matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%3d", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/* 6.
WAP that will take inputs of two 3 x 3 sized matrix into two 2D array, suppose A and B.
Now do C = A * B (multiplication).
Finally display all the elements from matrix / 2D array C.
Sample input
3 3                                 Sample output
1 2 3   2 2 2                           9 9 9
4 5 6   2 2 2                           24 24 24
7 8 9   1 1 1                           39 39 39


                                            */
/*
#include<stdio.h>
int main()
{
    int A[3][3], B[3][3], C[3][3], n, i, j,s=0;

    printf("Enter 1st Matrix elements:\n");
    for (i = 0; i <3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            scanf_s("%d", &A[i][j]);
        }
    }
    printf("Enter 2nd Matrix elements:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf_s("%d", &B[i][j]);
        }
    }
    //Calculation:
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            s = 0;
            for (n=0;n<3;n++)
            {
                s += A[i][n] * B[n][j];
            }
            C[i][j] = s;
        }
    }

    printf("Multiplied matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%3d", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/* 8.
WAP that will take inputs of m x n sized matrix into a 2D array
and find the maximum & minimum element with index locationfrom that matrix.

Sample input               Sample output
3 3
1 2 3                        Max: 9
4 5 6                        Location: [2][1]
2 9 2

2 3
9 8 7                        Max: 9
3 4 5                        Location: [0][0]

*/
/*
#include<stdio.h>
int main()
{
    int a[100][100], m, n, i, j, max, min;
    printf("Enter row & column :");
    scanf_s("%d %d", &m, &n);
    printf("Enter Matrix Elements: \n");

    for (i= 0; i< m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf_s("%d", &a[i][j]);
        }
    }
    max = a[0][0];
    min = a[0][0];
    int C=0, D=0, E=0, F=0;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                C += i;
                D += j;
            }
            else if (a[i][j] < min)
            {
                min = a[i][j];
                E += i;
                F += j;
            }

        }
    }
    printf(" Max= %d\n Location:[%d] [%d]\n", max, C,D);
    printf(" Min= %d\n Location:[%d] [%d]", min, E,F);

    return 0;

}
*/


/*
 9.
WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n must be an odd number).
Then calculate sum of the integers at first row, last row and two diagonals without overlap.
Please see the sample input-output.
Sample input                                   Sample output
5                                                     52
1 2 3 4 5
2 3 4 1 6
3 4 9 6 7
4 2 6 7 8
5 4 3 2 1

7                                                     23
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1

*/

/*
#include<stdio.h>
int main()
{
    int a[100][100], i, j, n, sum = 0;
    printf("Enter row & column :");
    scanf_s("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf_s("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == i  || j == n - i - 1 )

               sum += a[i][j];
        }
    }

    printf("%d", sum);
    return 0;
}
*/


/*
* 10. WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n
must be an odd number). Then calculate sum of the integers based on following position
pattern (consider only the boxed position during the sum). Please see the input-output.
Sample input                         Sample output
5                                          71
1 2 3 4 5
2 3 4 1 6
3 4 9 6 7
4 2 6 7 8
5 4 3 2 1

7                                          25
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
                                                         */

/*
#include<stdio.h>
int main()
{
    int  a[100][100], n, i, j, mid, sum = 0;
    printf("Enter number :");
    scanf_s("%d", &n);
    mid = n / 2;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf_s("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
           if (i == mid || j == mid || i == 0 && j<mid || i == n - 1 && j>mid || j == 0 && i > mid || j == n - 1 && i < mid)

                 sum += a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}
*/

/*  11. WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n
must be an odd number). Then calculate sum of the integers based on following position
pattern (consider only the boxed position during the sum). Please see the input-output.
Sample input                            Sample output
5                                           65
1 2 3 4 5
2 3 4 1 6
3 4 9 6 7
4 2 6 7 8
5 4 3 2 1

7                                            33
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1

*/
/*

#include<stdio.h>
int main()
{
    int a[100][100], i, j, n, sum = 0;

    printf("Enter number :");
    scanf_s("%d", &n);


    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            //printf("A[%d][%d]= ", i, j);
            scanf_s("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++);
    {
        for (j = 0; j < n; j++)
        {
            if (i % 2 == 1 || j % 2 == 1)
            {
                sum = sum + a[i][j];

            }
        }
    }
    printf("\n%d", sum);
    return 0;
}
*/





//______________________________________________________________________________________



                        // Handout-5 (String) //



// L-8 STRING

//Basics Of Strings.......


// convert an uppercase letter to lowercase.
/*
#include<stdio.h>
int main()
{
	char c;
	scanf_s("%c", &c);
	if (c >= 'A' && c <= 'Z') // check if the ASCII value is between 65 and 90
	{
	  c+= 32;// c will now contain lower case.Small letter comes after capital in ASCII.
	}
	printf("Converted letter: %c",c);
	return 0;
}
*/

//1. Write a C program that will convert a lowercase letter into uppercase.
/*
#include<stdio.h>
int main()
{
	char c;
	printf("Enter a lowercase letter:");
	c = getchar();
	if (c >= 'a' && c <= 'z')
		c -= 32;
	printf("Converted Uppercase letter: %c",c);
	return 0;
}
*/

// 2.Write a C program that will toggle the case of a character, if it is a letter.
/*
#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character:");
	c = getchar();
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
		printf("Toggle the case of the character: %c", c);
	}

	else if (c >= 'a' && c <= 'z')
	{
		c -= 32;
		printf("Toggle the case of the character: %c", c);
	}

	else
		printf("Invalid input.\nEnter lowercase letter or uppercase.\n");
	return 0;
}

//3.Write down what the following code will output:
/*
#include<stdio.h>
int main()
{
	char c = '5';
	int i = c - '0';
	printf("%d\n", i);
	return 0;
}
*/

/* 7. Write a C program that will take as input a string,
and calculate the length of the string. (Hint: run a for loop like the given code,
and increase a counter variable by one every time.)*/
/*
#include<stdio.h>
int main()
{
	char str[1000];
	int i, c=0;
	printf("Enter a string:");
	gets_s(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		c++;
	}
	printf("length of the string is:%d",c);
	return 0;
}
*/

/* 8. Write a C program that will take as input a string,
and print its characters in reverse order.
(Hint: find the length of the string like problem 3.2,
and print the characters at indices length � 1 to 0.)*/
/*
#include<stdio.h>
int main()
{
	char str[1000];
	int i, c = 0;
	printf("Enter a string:");
	gets_s(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		c++;
	}
	printf("characters in reverse order: %c", str[i]);
	for (i = c; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	return 0;
}
*/
/* Flag Q. Suppose we have to convert all the uppercase letters of a string into lowercase.
How do we do that? We have used the following code for converting
an uppercase letter into lowercase:

if(c >= 'A' && c <= 'Z')
{
    c += 32;
}
We can now extend this code to convert all uppercase letters of a string to lowercase.

for(i = 0; str[i] != '\0'; i++)
{
    if(str[i] >= 'A' && str[i] <= 'Z')
    {
        str[i] += 32;
    }
}
This code can convert the string �AbcDEFgH� into �abcdefgh�.*/


/* 9.Write a C program to convert all lowercase letters of a string to uppercase.
(If the input is �AbcDEFgH�, the output will be �ABCDEFGH�.)*/

/*
#include<stdio.h>
int main()
{
	char str[1000];
	int i;
	printf("Enter a string:");
	gets_s(str);
	printf("All Uppercase form: ");
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			printf("%c", str[i]);
		}

		else
		printf("%c", str[i]);
	}
	return 0;
}
*/

/* 10. Write a C program to toggle the cases of all the letters of a string.
(If the input is �AbcDEFgH�, the output will be �aBCdefGh�.) */

/*
#include<stdio.h>
int main()
{
	char str[1000];
	int i;
	printf("Enter a string:");
	gets_s(str);
	printf("All Uppercase form: ");
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32; //Uppercase to lowercase.
			printf("%c", str[i]);
		}

		else if  (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32; //Lowercase to uppercase.
			printf("%c", str[i]);
		}
	}
	//printf("\n");
	return 0;
}
*/

/* 11. Write a C program that will calculate the sum the digits in the string.
(If the input is �21 years have passed, 5 more to go�,
then the output will be 2+1+5 = 8.) */
/*
#include<stdio.h>
int main()
{
	char str[1000];
	int i, sum = 0;
	printf("Enter a string:");
	gets_s (str);


	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			sum += str[i] -48;  // ASCII of digit 0-9 is 48-57
			printf("%c+", str[i]);
		}


	}

	printf(" =%d", sum);
	return 0;
}
*/

/* 12.
Write a C program that will take as input a string and a character,
and count how many times the character appears in the string. */

/*
#include<stdio.h>
int main()
{
	char str[1000], x;
	int i, c = 0;
	printf("Enter a string:");
	gets_s(str);
	printf("Enter a character:");
	x = getchar();

	for (i = 0; str[i] != '\0'; i++)
	{
	    if (x==str[i])
			c++;
	}
	printf("the character appears in the string: %d times", c);
	return 0;
}
*/

/* 13.Write a C program that will take as input a string and a character,
and count how many times the character appears in the string regardless of its case.

(If the input string is �My name is Ahnaf�, and the input character is �a�,
then the output should be 3 instead of 2, since there are two a�s and one A.)

*/

/*
#include<stdio.h>
int main()
{
	char str[1000],x,y;
	int i,c=0;
	printf("Enter a string:");
	gets_s(str);
	printf("Enter a character:");
	x=getchar();


		if (x >= 'A' && x <= 'Z')
			y=x+32; //Uppercase to lowercase.

		else if (x >= 'a' && x <= 'z')
			y=x- 32; //Lowercase to uppercase.

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i]==x || str[i]==y)
			c++;
	}
	printf("the character appears in the string: %d times",c);
	return 0;
}
*/
/* 14.Write a C program that will find out if an input string is palindrome or not.
(Hint: find the length, and compare every element with its corresponding last element.) */

/*
#include <stdio.h>
int main()
{
	int i, j = 0, c=0;
	char str[1000];
	printf("Enter a string:");
	gets_s(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		c++;
	}
	printf("lenth = %d\n",c);

	for (i = 0; i < c; i++)
	{
		if (str[i] != str[c-1-i])
		{
			j++;
		}
	}
	if (j == 0)
	{
		printf("Its a palindrome string");
	}
	else
		printf("Its not  a palindrome string");

	return 0;
}
*/

/* 15.
Complete the following code segment :

char str[] = "12345";
int num = 0, i;
for (i = 0; str[i] != '\0'; i++)
{
	// write your code here
		 c=str[i]-48;
	 num+=c(pow(d,e));
}
printf("%d\n", num); // The output should be 12345
*/

/*
#include <stdio.h>
#include <math.h>
int main()
{
	char str[] = "12345";
	int num = 0, i, c = 0, j = 10, k;
	for (i = 0, k = 4; str[i] != '\0'; i++, k--)
	{
		// write your code here
		c = str[i] - 48;
		num += c*(pow(j, k));
	}
	printf("%d\n", num); // The output should be 12345
	return 0;
}
*/

                 // Built in string functions in string.h  //

//1. int Strlen( string variable) -> determinant the length of a string.
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	gets_s(str);

	int l = strlen(str); //strlen() dosent count null character.

	printf("Length of the string is:%d", l);
	return 0;
}
*/

//2. char strcpy(s1,s2) -> Copy 2nd string  to 1st string.

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000], str2[1000];
	gets_s(str);
	gets_s(str2);

	strcpy_s(str, str2);

	printf("Value of str1: %s \n", str);
	printf("Value of str2: %s", str2);
	return 0;
}


/*3. int strcmp(s1, s2)-> Compare strings.

   if s1==s2 from data to length then strcmp() returns zero.
   if s1 >s2 strcmp() returns 1
   if s1<s2 strcmp () returns -1
*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000], str2[1000];
	gets_s(str);
	gets_s(str2);

	int x= strcmp(str, str2);

	if (x == 0)
		printf(" strings are equal");
	else
		printf("Strings are not equal");
	return 0;
}
*/

// char strcat (s1,s2) -> Concatenate 2nd string  after 1st string.

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000], str2[1000];
	gets_s(str);
	gets_s(str2);

	strcat_s(str, str2);

	printf("Value of str1: %s \n", str);
	printf("Value of str2: %s \n", str2);
	return 0;
}
*/




                       //////////Exercises................................

/* 1.
Write a program in C to find the length of a string without using any library function.
Sample Input                Sample Output
�My name is andy�             15

�Abc 123 7&*&*�               13
*/

/*
#include<stdio.h>
int main()
{
	char str[1000];
	int i, c = 0;
	printf("Enter a string:");
	gets_s(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		c++;
	}
	printf("length of the string is:%d", c);
	return 0;
}
*/

/*Write a program in C to concatenate two strings without using any library function.
Sample Input:                    Sample Output:
�My name �                     �My name is andy�
�is andy�

�123abc�                          �123abc*A*B�
�*A*B�
*/

/*
#include <stdio.h>
int main()
{
	char str1[1000], str2[1000];
	int i=0, j=0, c = 0;
	printf("Enter a string 1:");
	gets_s(str1);
	printf("Enter a string 2:");
	gets_s(str2);

	while (str1[i] != '\0')
	{
		i++;
		c++;
	}
	while(str2[j] != '\0')
	{
		str1[c + j] = str2[j]; //lenth of str1 + begining of str2 .
		j++;
		str1[c + j] = '\0'; // end of the string.
	}
	printf("concatenated string= %s ", str1);
	return 0;

}
*/


/*3. Write a program in C to count how many vowels are there in a string.*/

/*
#include<stdio.h>
int main()
{
	char s[100];
	int i, count = 0;

	printf("enter the first string = ");
	gets_s(s);

		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
				|| s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'
				)
			{
				count++;
			}
		}

		printf("%d ", count);
		return 0;
}
*/


/*4. Write a program in C to count the number of words in a string.*/

/*
#include<stdio.h>
int main()
{
	char s[100];
	int i, count = 0, z=0;

	printf("enter the string = ");
	gets_s(s);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i]==' ' || s[i]=='\n' || s[i]=='\t')
		{
			z=0;
		}
		else if(z==0)
		{
			z = 1;
			count++;
		}
	}


	printf("%d", count);
	return 0;
}*/



/*5. Write a program in C to find the reverse of a string*/

/*#include<stdio.h>
int main()
{
	char s[100];
	int i, len = 0;

	printf("enter the string = ");
	gets_s(s);

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (i = len; i != -1; i--)
	{
		printf("%c", s[i]);
	}
	return 0;
}*/



/*6. Write a program in C to convert lowercase string to uppercase.*/


/*#include<stdio.h>
int main()
{
	char s[100];

	int i;

	printf("enter the string = ");
	gets_s(s);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z' )
		{
			s[i] -= 32;
			printf("%c", s[i]);
		}
	}


	return 0;
}*/



/*7. Write a program in C to toggle the case of each character in a string.*/

  /*#include<stdio.h>
  int main()
 {
	char s[100];

	int i;

	printf("enter the string = ");
	gets_s(s);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
			printf("%c", s[i]);
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 32;
			printf("%c", s[i]);

		}

	}
	return 0;
  }*/



  /* 8. Write a program in C to sort a string array in alphabetic order.
  *
    Sample Input                 Sample Output
  �My name is Andy�            � AMadeimnnsyy�
  �Abc 123 7&*&*�              � &&**1237Abc�  */

 /*
#include<stdio.h>
int main()
{
	char s[100];

	int i, j, temp;

	printf("enter the string = ");
	gets_s(s);

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; s[i] != '\0'; i++)
		{

			if (s[i + 1] > s[i])
			{
				temp = s[i];
				s[i] = s[i + 1];
				s[i + 1] = temp;
			}
		}
	}

	for (s[i] != '\0'; i >= 0; i--)
	{
		printf("%c ", s[i]);
	}
	return 0;
}

*/

  /*9. Write a program in C to count the occurrences
  of a character in a string regardless of its case.

   Sample Input             Sample Output
 �My name is Andy�                2
       �a�

�WELCOME to CSE, everyone�        6
       �E�                                    */

  /*
  #include<stdio.h>
  int main()
  {
	  char str[100], alpha, c;

	  int i, count=0;

	  printf("enter the string = ");
	  gets_s(str);

	  printf("enter the character = ");
	  scanf_s("%c", &c);

	  if (c >= 'a' && c <= 'z')
	  {
		  alpha = c - 32;
	  }
	  else if (c >= 'A' && c <= 'Z')
	  {
		  alpha = c + 32;
	  }


	  for (i = 0; str[i] != '\0'; i++)
	  {
		  if ((str[i] == c) || (str[i] == alpha))
		  {
			  count++;
		  }

	  }
		  printf("%d", count);
		  return 0;
  }*/




  /*10. Write a program in C to check whether a string is a palindrome or not.

  Sample Input            Sample Output
  �My name is andy�            no
   �madam�                    yes

  */

  /*#include<stdio.h>
  int main()
  {
	  char str[100];
	  int i, len = 0, z = 1;

	  printf("enter the string = ");
	  gets_s(str);

	  for (i = 0; str[i] != '\0'; i++)
	  {
		  len++;
	  }

	  for(i = 0; i < len; i++)
	  {
		  if (str[i] != str[len - 1 - i])
		  {
			  z = 0;
			  break;
		  }
	  }

	  if (z == 0)
	  {
		  printf("The string is not palindrome");
	  }
	  if (z == 1)
	  {
		  printf("The string is palindrome");
	  }
	  return 0;
  }*/



  /*11. Write a program in C to add the digits in a string.

    Sample Input            Sample Output
  �I am 20 years old�            2
    �Abc 123 7&*&*�              13

  */

  /*
  #include<stdio.h>
  int main()
  {
	  char str[100];
	  int i, sum = 0;

	  printf("enter the string = ");
	  gets_s(str);

	  for (i = 0; str[i] != '\0'; i++)
	  {
		  if (str[i] >= 48 && str[i] <= 57)
		  {
			  sum += str[i] - 48;
		  }

	  }
	  printf("%d", sum);
	  return 0;
  }*/


  /*12. Write a program in C to count occurrences of a word in a string.

  Sample Input                            Sample Output
�I liked the story about the sad giant�
       �the�                                     2

�It is what it is�
     �it�                                        1
  */

  /*
  #include<stdio.h>
  int main()
  {
	  char str[100], word[100];

	  int i, j, wcount = 0, ls=0, lw=0 , temp, chk;

	  printf("enter the string = ");
	  gets_s(str);
	  printf("enter the word = ");
	  gets_s(word);

	  for (i = 0; str[i] != '\0'; i++)
	  {
		  ls++;
	  }
	  for (i = 0; word[i] != '\0'; i++)
	  {
		  lw++;
	  }

	  for (i = 0; i < ls; i++)
	  {
		  temp = i;
		  for (j = 0; j < lw; j++)
		  {
			  if (str[i] == word[j])
			  {
				  i++;
			  }
		  }
		  chk = i - temp;
		  if (chk == lw)
		  {
			  wcount++;
		  }
		  i = temp;
	  }
	  printf("occurance of word = %d",wcount);

	  return 0;
  }
  */



/* 14. Write a program in C to find the maximum occurring character in a string.
Sample Input            Sample Output
�Welcome to CSE�           E (or e)
�mmmttssarrrddd�           D (or d)
�mmmttssarrrDDd�           D (or d)*/

/*
#include<stdio.h>
int main()
{
	int i = 0,j, len = 0, c = 0, Mxc = 0;
	char str[1000], Mxch1, Mxch2;
	printf("Enter the string: ");
	gets_s(str);
	while (str[i] != '\0') {
		len++;
		i++;
	}
	for (i = 0; i < len; i++) {
		for (j = 0; j < len; j++) {
			if (str[i] == str[j]) {
				c++;
			}
		}
		if (Mxc < c) {
			Mxc = c;
			Mxch1 = str[i];
		}
	}
	Mxch2 = Mxch1;
	if (Mxch1 > 95) {
		Mxch1 = Mxch1 - 32;
	}
	if (Mxch2 < 95) {
		Mxch2 = Mxch2 + 32;
	}
	printf("Maximum occurring character in the string: ");
	printf("%c (or %c)", Mxch1, Mxch2);
	return 0;
}
*/
/* 14. Write a program in C to reverse the words in a string.
Sample Input                  Sample Output
�My name is Andy�           �Andy is name My�
�Abc 123 7&*&*�             �7&*&* 123 Abc�   */

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000], rev[100];
	int len, ind, ws, we, i;
	printf("Enter a string:");
	gets_s(str);

	len = strlen(str);
	ind = 0;
	ws = len - 1;
	we = len - 1;

	while (ws > 0)
	{
		if (str[ws] == ' ')
		{
			i = ws + 1;
			while (i <= we)
			{
				rev[ind] = str[i];
				i++;
				ind++;
			}
			rev[ind++] = ' ';
				we = ws - 1;
		}
		ws--;
	}

	for (i = 0; i <= we; i++)
	{
		rev[ind] = str[i];
		ind++;
	}
	rev[ind] = '\0';
	printf("Original string: \n %s\n", str);
	printf("Reversed Words: \n %s\n",rev);
	return 0;
}
*/


//_______________________________________________________________________________________


                 //Handout-6 (Pointers,Recursion,File) //


//Basics of Recursion.

// Find factorial by recursion.
/*
#include<stdio.h>
int fact(int n)
{
	if (n == 1)
		return 1;
	else
		return n*fact(n - 1);
}
int main()
{
	int n;
	printf("Enter Positive number to find factorial: \n");
	scanf("%d", &n);
	printf("Factorial of %d is %d", n, fact(n));
	getch();
}
*/





// Bacis Of pointer......

// Value chasnging with pointer.
/*
#include<stdio.h>
int main()
{
    int a = 5;
    int *p; // 1st pointer declearation
    p = &a;  //2nd memory specification to storing value of a into p
    *p = 8;  // 3rd indirectly Changing value of a.
    printf(" Updated value : %d\n", a);
    return 0;

}
*/

//Sawping two number with function &  pointer.
/*
#include<stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int a = 5, b = 7;
    printf(" original number : %d %d \n", a, b);
    swap(&a, &b);
    printf("Swapped number: %d %d", a, b);
    return 0;
}
*/


// Find the average of 10 array by normal & pointer in one program.

/*
#include<stdio.h>
int main()
{
    int arr[10] = { 5,9,6,22,14,7,1,6,20,17 };
    int i,sum = 0,*p,sump=0;
    for (i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    printf("Sum by array indexing :%d\n",sum);

    //by pointer.

    p = &arr[0];
    for (i = 0; i < 10; i++)
    {
        sump += *p; //On pointer we can operate only plus minus/
        p++;
        // sump += arr[i]; :- same speed
        //sum +=*(p+i);    :-  "
        // sump += *p; p++; :-most fast.
    }
    printf("Sum by ponter :%d\n", sump);
    return 0;

}
*/

/* Write a c program to count uppercase letter in a string.
You must use ponter arithmetic to iterate through string*/

/*
#include<stdio.h>
int main()
{
    char str[] = "This is MasterChef US";
    char* p;
    int c = 0;

    for (p = str; *p != '\0'; p++)
    {
        if (*p >= 'A' && *p <= 'Z')
            c++;
    }
    printf(" Number of  uppercase letter :%d", c);
    return 0;
}
*/



                //////////////Exercises...............................................


/* 1. WAP that will add two numbers using pointers.
Sample input       Sample output
3 5                   8
5 9                  14  */

/*
#include<stdio.h>
int main()
{
    int a, b,add, *p1, *p2;
    printf("enter two number:");
    scanf_s("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    add = *p1 + *p2;
    printf("%d +%d = %d",a,b, add);
    //return 0;
    getch();
}
*/


/* 2. WAP that will find the maximum number between two numbers using a pointer.
Sample input (m,n)            Sample output
7 9                              9
14 6                             14   */

/*
#include<stdio.h>
int main()
{
    int a, b, * p1, * p2;
    p1 = &a;
    p2 = &b;
    printf("enter two number:");
    scanf_s("%d %d", &a, &b);

    if(*p1>*p2)
        printf(" %d is The max number",*p1);
    else
        printf(" %d is The max number", *p2);
    // return 0;
    getch();
}
*/

/* 3. WAP that will print the elements of an array without using index.
Sample input      Sample output
6
3 7 9 4 8 1         3 7 9 4 8 1

*/

/*
#include<stdio.h>
int main()
{
    char arr[1000], *p;
    int n, i;
    printf("enter array elements:");
    gets(arr);
    printf("array elements by pontert: \n");
    p = arr;
    while (*p != '\0')
    {
        printf("%c", *p);
        p++;
    }

    /*
    for (p = arr; *p != '\0'; p++)
    {
        printf("%c",*p);
    }
    getch();
}
*/

/* 4. WAP that will calculate the length of the string using pointers.
Sample input       Sample output
C programming            13 */

/*
#include<stdio.h>
int main()
{
    char str[1000], * p;
    int c = 0;
    printf("enter a string :");
    gets(str);
    p = str;
    for (p = str; *p != '\0'; p++)
    {
        c++;
    }

    printf("%d", c);
    return 0;
}
*/

/* 5. WAP that will swap values of two variables using pointers.
Sample input        Sample output
5 9                     9 5 */

/*
#include<stdio.h>
int main ()
{
    int a, b, t,*p1,*p2;
    printf("enter two number :");
    scanf_s("%d %d", &a, &b);

    printf("Original value: %d %d\n",a,b);
    p1 = &a;
    p2 = &b;
    t= *p1;
    *p1 = *p2;
    *p2 = t;
    printf("Swapped value: %d %d", *p1, *p2);
    return 0;
}
*/

/* 7. WAP that will compute the sum of all elements in an array using pointers.
Sample input    Sample output
6
3 7 9 4 8 1       32 */

/*
#include<stdio.h>
int main()
{
    int arr[100], * p;
    int n, i, sum = 0;;
    printf("enter array size:");
    scanf_s("%d", &n);
    printf("enter array elements:");
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &arr[i]);
    }

    p = &arr[0];
    for (i=0;i<n;i++)
    {
        sum += *p;
        p++;
    }
    printf("sum of all elements:%d", sum);
    return 0;
}
*/

/* 8. WAP that will print the elements of an array in reverse indexed order.
Sample input        Sample output
6
3 7 9 4 8 1         1 8 4 9 7 3    */

/*
#include<stdio.h>
int main()
{
    int arr[1000], n, i,*p;
    printf("enter array size:");
    scanf_s("%d", &n);
    printf("enter array elements:");
    for (i = 0,p=arr; i < n; i++,p++)
    {
        scanf_s("%d", &*p);
    }

    printf(" In reverse indexed order:");
    p = &arr[n-1];
    for(i = 0; i<n ;i++)
    {
        printf(" %d",*p);
        p--;
    }
    getch();
}
*/



//_______________________________________________________________________________________

                        // HANDOUT-7 (STRUCTURE)//




//Basics Of Structure........

/*
#include<stdio.h>
struct coordinate_point
{
	float x;
	float y;
};

struct complex_number
{
	int a;
	int i;
};

struct current_time
{
	int hour;
	int minute;
	int sec;
};

struct todays_date
{
	int day;
	int month;
	int year;
};


struct salary_of_employee
{
	char name[1000], designation[1000];
	int salary;

};


struct length
{
	int feet;
	int inch;
};
*/

//Score of shakib AOL HAssan.
/*
#include<stdio.h>
struct bowling_figure
{
	int runs;
	int wickets;
};

int main()
{
	struct bowling_figure shakib; //structure type varriable.

	//shakib.runs =29;     //single type premitive varriable.
	//shakib.wickets=2;
	//printf("Enter Runs &wickets:");
	scanf_s("%d%d", &shakib.runs, &shakib.wickets);
	printf("Score: %d-%d", shakib.runs, shakib.wickets);
	return 0;
} */
/*
#include<stdio.h>
struct bowling
{
	int runs;
	int wickets;
};
int main()
{
	struct bowling shakib;
	struct bowling players [10];
	printf("Enter Runs & wickets:");
	scanf_s("%d%d",&players[2].runs, &players[2].wickets);

	//players[2].runs=20;
	//players[2].wickets=2;

	printf("score:%d/%d", players[2].runs, players[2].wickets);
	return 0;
}
*/

//Distance between tow point.
/*
#include<stdio.h>
#include<math.h>
struct point
{
	double x;
	double y;
};
int main()
{
	struct point p1,p2;
	double distance;
	printf("Enter points:");
	scanf_s("%lf %lf",&p1.x, &p1.y);
	scanf_s("%lf %lf",&p2.x, &p2.y);

	distance = sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
	printf("Distance: %.2lf\n",distance);
	return 0;
}
*/




                         /////////// Exercises.............................

/* 1
Declare a structure of students with three member variables (name, id and cgpa),
where name is a
string and id are strings, and cgpa is a float value.*/

/*
#include<stdio.h>
struct students
{
    char name[100];
    char id [10];
    float cgpa;
};
*/

/* 2
Declare a structure of students with three member variables (name, id and cgpa),
where name is a string and id are strings,
and cgpa is a float value with default values. */

/*
#include<stdio.h>
#include<string.h>
struct students
{
    char name[100];
    char id[10];
    float cgpa;
};
int main()
{
    struct students bio;
    strcpy(bio.name, "navil");
    // bio.name[100]="navil";
    strcpy(bio.id, "011211124");
    //bio.id[10] = "011211124";
    bio.cgpa = 3.70;
    return 0;
}
*/

/* 3
Given a structure student, which has three member variables (name, id and cgpa),
declare a variable
of structure student.*/

/*
#include<stdio.h>
struct students
{
    char name[100];
    char id[10];
    float cgpa;
};
int main()
{
    struct students biodata;
    return 0;
}
*/

/* 4..
Given a structure student, which has three member variables (name, id and cgpa),
declare a variable of structure student. Display the value of the member variables.
*/

/*
#include<stdio.h>
#include<string.h>
struct students
{
    char name[100];
    char id[10];
    float cgpa;
};
int main()
{
    struct students bio;
    strcpy_s(bio.name, "navil");
    // bio.name[100]="navil";
    strcpy_s(bio.id, "011211124");
    //bio.id[10] = "011211124";
    bio.cgpa = 3.70;

    printf("value of the member variables:\n");
    printf("Name:%s \n",bio.name);
    printf("ID:%s \n",bio.id);
    printf("CGPA:%.2f \n",bio.cgpa);
    return 0;
}
*/

/* 5..
Given a structure student, which has three member variables (name, id and cgpa),
declare a variable of structure student. Assign values to the member variables.
*/

/*
#include<stdio.h>
#include<string.h>

struct students
{
    char name[1000];
    char id[10];
    float cgpa;
};
int main()
{
    struct students bio;

    printf("Assign values to the member variables:\n");
    printf("Enter Name:");
    gets_s(bio.name);
    printf("Enter ID:");
    gets_s(bio.id);
    printf("Enter CGPA:");
    scanf_s("%f", &bio.cgpa);

    printf("value of the member variables:\n");
    printf("Name:%s \n", bio.name);
    printf("ID:%s \n", bio.id);
    printf("CGPA:%.2f \n", bio.cgpa);

    return 0;
}
*/
/* 7..
Declare a structure of students with three variables (name, id and cgpa).
Take information of two students as input and show the output. */

/*
#include <stdio.h>
struct information
{
    char name[10];
    char id[10];
    float cgpa;

};
int main()
{
    struct information bio[2];
    int i;

    for (i = 0; i < 2; i++)
    {
        printf("Enter Info of Student no: %d\n", i + 1);
        printf("Enter Name:");
        getchar();
        gets_s(bio[i].name);
        printf("Enter ID:");
        getchar();
        gets_s(bio[i].id);
        printf("Enter CGPA:");
        scanf_s("%f", &bio[i].cgpa);
    }

    for (i = 0; i < 2; i++)
    {
        printf("Information Of student: %d\n", i + 1);
        printf("Name:%s \n", bio[i].name);
        printf("ID:%s \n", bio[i].id);
        printf("CGPA:%.2f \n", bio[i].cgpa);

    }
    return 0;
}
*/

/* 8
Declare a structure of students with three variables (name, id and cgpa). Now take the
input of two students and print the information of that student who has the higher cgpa.
Sample Input           Sample Output
Shakib Al Hasan        hakib Al Hasan
101                    101
3.5                    3.5

Tamim Iqbal
102
2.7  */

/*
#include<stdio.h>
struct student
{
    char name[50];
    char id[30];
    float cgpa;
};

int main() {

    int i, max = 0;
    float comp = 0;
    struct student stu[2];

    for (i = 0; i < 2; i++)
    {
        printf("Enter %d th student info:\n", i + 1);
        printf("Enter student name:\n");
        gets_s(stu[i].name);
        printf("Enter student id:\n");
        gets_s(stu[i].id);
        printf("Enter student cgpa:\n");
        scanf_s("%f", &stu[i].cgpa);
        getchar();
    }
    comp = stu[0].cgpa;
    for (i = 0; i < 2; i++)
    {
        if (comp < stu[i].cgpa)
        {
            max = i;
        }
    }

    printf("Student info: %d\n", max + 1);
    printf("Student name: %s\n", stu[max].name);
    printf("Student id: %s\n", stu[max].id);
    printf("Student cgpa: %.2f\n", stu[max].cgpa);

    return 0;
}
*/

/* 9
Declare a structure of students with three variables (name, id and cgpa). Now take the
input of two students and print the information of that student who has better cgpa with
a function.
*/

/*#include<stdio.h>

struct student
{
    char name[100];
    char id[30];
    double cgpa;

};
void function(char stu[])
{

    {
        struct student stu[10];
        int i, n, hcgpa = stu[0].cgpa, h_i = 0;
        printf("n = ");
        scanf_s("%d", &n);

        for (i = 0; i < n; i++)
        {
            printf("%d.Student info : ", i + 1);
            printf("\nname : ");
            getchar();
            gets_s(stu[i].name);
            printf("\nid : ");
            gets_s(stu[i].id);
            printf("\ncgpa : ");
            scanf_s("%lf", &stu[i].cgpa);

        }

        for (i = 0; i < n; i++)
        {
            if (stu[h_i].cgpa > hcgpa)
            {
                hcgpa = stu[h_i].cgpa;

            }
        }
        printf("Highest cgpa holder is : \n");
        printf("name : %s\n", stu[h_i].name);
        printf("id : %s\n", stu[h_i].id);
        printf("name : %.2lf\n", stu[h_i].cgpa);


    }
}
int main()
{
    char stu[10];
    function(stu);
}*/



//_________________________________________________________________________________________

                           // HANDOUT-8 (File) //


/* 17 WAP that will create and store the following information
in the sample.txt text file.

1 Zahid
2 Tanvir
3 Akif */

/*
#include<stdio.h>
int main()
{
    FILE* fp;
    fp = fopen("info.txt", "w");
    while (1)
    {
        if (fp == NULL)
        {
            printf("fILE DOESNT EXIST \n");
            break;
        }

        else
        {
            printf(" EXIST Give Info & open the file.\n");


        char name[100];
        int n, i;
        printf("Number of People:");
        scanf("%d", &n);
        getchar();
        for (i = 0; i < n; i++)
        {
            printf("Enter info %d:\n", i + 1);
            gets(name);
            fprintf(fp, "%s\n", name);

        }
        printf("Write succesful:");
        fclose(fp);

        }
    }
    getch();
}
*/


/* 18 & 19
WAP that will read the sample.txt file created above. Sample input
Sample output
1 Zahid
2 Tanvir
3 Akif*/

/*
#include<stdio.h>
int main()
{
    FILE* fp;
    fp = fopen("info.txt", "r");
    char c;
        while (1)
        {
            c = fgetc(fp);
            if (c == EOF)
            {
                break;
            }
            printf("%c", c);

        }
    getch();
}
*/

/* 20 WAP that will count the number lines in a file.
Sample input (input.txt) Sample output

1 Zahid                    3
2 Tanvir
3 Akif
                              */

/*
#include<stdio.h>
int main()
{
    FILE* fp;
    fp = fopen("info.txt","r");
    char ch;
    int c = 0;

    if (fp == NULL)
        printf("fILE DOESNT EXIST \n");
    else
        printf(" EXIST Give Info & open the file.\n");

    for (ch = getc(fp); ch != EOF; ch = getc(fp))
    {
        if (ch == '\n')
            c++;
    }
    printf("Total Line :%d\n", c);
    fclose(fp);
    return 0;
}
*/

/* 1 WAP that will append multiple lines at the end of a text file.
Sample input       Sample output (output.txt)
4 Rashed                  1 Zahid
5 Sajal                   2 Tanvir
                          3 Akif
                          4 Rashed
                          5 Sajal

*/


/*
#include<stdio.h>
int main()
{
    FILE* fp;
    fp = fopen("info.txt", "a");
    if (fp == NULL)
    {
        printf("file doesn'nt exist");
    }
    else
    {
        printf(" EXIST Give Info & open the file.\n");

        char name[100];
        char ch;
        int i, n, c = 0;
        printf("Number of People:");
        scanf("%d", &n);
        getchar();
        for (i = 0; i < n; i++)
        {
            printf("name : ");
            gets(name);
            fprintf(fp, "\n%s", name);
        }

        printf("\nwritten successfully");

        fclose(fp);
    }


    getch();
}
*/


//__________________________________________________________________________________________

                             // Home Assignment 1 //

/* 1.
The Fibonacci series is a series, which starts with F0=0 and F1=1,
  and each of the subsequent terms is the sum of its previous two terms.
  Write a C program that will take an integer n as input,
  and print the Fibonacci series up to its n terms (where n >= 0). */

/*
#include<stdio.h>
int main()
{
	int n, f = 0, s = 1, t, i;
	printf("Enter the Nth term:");
	scanf_s("%d", &n);
	if (n == 0)
		printf("Invalid term.");
	else
	printf("the Fibonacci Serise is: \n");
	for (i = 0; i <n; i++)
	{
		if (i <= 1)
			t = i;
		else
		{
			t = f + s;  //0+1
			f = s;
			s = t;
		}
		printf("%d,", t);
	}
	return 0;
}
*/

/* 2.
To reverse a given integer, you must first divide it by 10,
and get the remainder. This remainder is the last digit of this number.
Now you have to place this digit at the beginning of the reverse number.

Write a C program that will take as input an integer n, and reverse it.  */

/*
#include<stdio.h>
int main()
{
	int n, rm, rv = 0;
	printf("Enter the integer number: ");
	scanf_s("%d", &n);
	while (n!=0)
	{
		rm = n % 10;//To take reminder as the last digit of the number.
		rv = rv * 10 + rm; //To generate a number where reminder is last digit.
        n = n / 10; // To update main number take last digit
	}
	printf(" The reverse form is: %d", rv);
	return 0;
}
*/




//_______________________________________________________________________________________

                                 //Home Assinment 2 //
/*
In this home assignment, we will learn about how to insert a number inside an array,
and how to delete a number from the array.
The task is not as easy as it seems.
First, let's talk about insertion. Say you have an array like this:

5, 3, 9, 7, 4, 10

Now you want to insert the number 8 at index 3 (that is, before 7).
What you have to do is to shift all the numbers from index 3 to the right
(thus making space for 8), and then put 8 at index 3. The final result will look like this:

5, 3, 9, 8, 7, 4, 10

Note that you will need to declare a sufficiently large array here
(for this problem, consider an array of size 1000)
so that there is no fear of overloading the array.


 ___1____
 Write a C program that will take as input an array of size n,
and then insert another number num at index i.

Sample input:                           Sample Output:
    6
    5 3 9 7 4 10                       5 3 9 8 7 4 10
    8 3
*/

/*
#include<stdio.h>
int main()
{
    int a[1000], n, i, p, num;
    printf("Enter Size of array: ");
    scanf_s("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &a[i]);    //taking elements on n index.
    }

    printf("Enter numbr to insert: ");
    scanf_s("%d", &num);
    printf("Enter position where you want to insert: ");
    scanf_s("%d", &p);

    if (p < 0 || p > n )
        printf("Invalid");  //position cant be less than zero & more then size+1.

    else
    {
         //  Wont overtake element so,swaps from last element or index (n-1)
         //  & 'i' will run till positional index so(p-1) .

        for (i = n - 1; i >= p - 1; i--)
        {
            a[i + 1] = a[i];   //shifting previous value to right.
        }

        a[p - 1] = num;        // Inserting Number & Dealing with index so ( a[p-1] ).
        n++;                   //size of array is increasing.

        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }

    }
    return 0;
}
*/


/*
Now let's look into deletion. Suppose you have the following array:

8, 6, 1, 7, 10, 4

Now you need to delete the element at index 2 (i.e. 1).
What you have to do now is to shift all the elements from index 3 to the left,
so that there is not space left for 1. The element will thus be deleted.
The result will look like this:

8, 6, 7, 10, 4

___2___
Write a C program that will take as input an array of size n,
and then delete the element at index i. Again, for this problem,
declare a sufficiently large array (of size 1000).

Sample input:                           Sample Output:
    6
    8 6 1 7 10 4                      8 6 7 10 4
    2


*/

/*
#include<stdio.h>
int main()
{
    int a[1000], i, n, p;
    printf("Enter Size of array: ");
    scanf_s("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &a[i]);                   //taking elements on n index.
    }
    printf("Enter index number that you want to delet: ");
    scanf_s("%d", &p);

    if (p < 0 || p > n )
        printf("Invalid  INDEX");          //Index cant be less than zero & more then size.
    else
    {
        //   Have to shift elements from Index.
        //   & loop will be executed till just before of last index (n-1).
         for(i = p; i < n - 1; i++)
         {
            a[i] = a[i + 1];   //shifting  next value to left .
         }
         n--;                   //size of array is dicreasing.
         for (i = 0; i < n; i++)
         {
              printf("%d ", a[i]);
         }

    }
    return 0;
}

*/




//_________________________________________________________________________________________________


                              // Home Assinment 3 //

/* Write a C program that will take as input n integers,
  and sort them using the bubble sort algorithm.  */

/*
#include <stdio.h>
int main()
{
    int a[1000], t, n, i, j,c=0;
    printf("Enter Size of array: ");
    scanf_s("%d", &n);
    printf("Enter integers: ");

    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &a[i]);   //taking  elements
    }

    for (i = 0; i < n-1; i++)  //pass =n-1
    {

    //Comparission with elements.Ascending order wont swap , comparison depends on i.
    //(n-1-i)= to avoid extra comparision cz data alrdy sorted.

        for (j = 0; j < n-1-i; j++)
        {
            if (a[j] > a[j + 1])   //Condition to Swap two Numbers.
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;

                c++;      //Counting execution of loop of swapping.
            }
        }

        if (c == 0)
          break;   // to break the Outer loop to avoid extra pass cz all data are sorted.
    }
        printf("After Sorting:  ");
        for (i = 0; i < n; i++)
          {
            printf("%d ", a[i]);
          }

        if(c==0)
        printf("It was a sorted arrya.thanks \n");

        printf("\n");

    return 0;
}
*/



//_______________________________________________________________________________________

                          // Home Assignment 4 //



/* Your task is to create a function named "strcat", of the following prototype:

void strcat(char *str1, char *str2);

This function will append the contents of the string str2 to the end of the string str1.
For example: if str1 = "Structured" and str2 = "Programming",
then after this function call, str1 will become "StructuredProgramming".

Some conditions:

You cannot use array indexing in the function.
You have to demonstrate your capability to use pointer arithmetic.
You have to demonstrate the correctness of your function in the main function.
Use files for input and output for this purpose.
*/

/*
#include<stdio.h>
void strcat(char* str1, char* str2)
{
    while (*str1 != '\0')
    {
        str1++;
    }
    while (*str2 != '\0')
    {
        *str1 = *str2; //storing
        str1++;
        str2++;
    }
}

int main()
{
    char arr1[1000], arr2[1000], c;

    FILE* fpi, * fpo;
    fpi = fopen("input.txt", "r");
    if (fpi == '\0')
        printf("File doesn't Exist");
    else
    {
        int i = 0;
        while (1)
        {
            c = fgetc(fpi);
            if (c == '\n')
                break;
            else
            {
                arr1[i] = c;
                i++;
            }
        }
        arr1[i] = '\0';

        i = 0;
        while (!feof(fpi))
        {
            arr2[i] = fgetc(fpi);
            i++;
        }
        arr2[i] = '\0';
        fclose(fpi);
    }

    int len = 0, j = 0;
    for (j= 0; arr1[j] != '\0'; j++)
    {
        len++;
    }
    for (j= 0; arr2[j] != '\0'; j++)
    {
        len++;
    }
    strcat(arr1, arr2);
    arr1[len - 1] = '\0';


    fpo = fopen("output.txt", "w");
    if (fpo == '\0')
        printf("File doesn't Exist");
    else
    {
        fprintf(fpo, "%s", arr1);
        fclose(fpo);
    }

    printf("%s", arr1);
    getch();
}
*/

/* Your task is to write a recursive function to calculate
the sum of the digits of a given number.
The recursive definition of the sum of digits is as follow:

Sum of digits = Last digit + Sum of digits of the remaining number
You should identify the base case for the recursion by yourself.
*/

 /*
#include<stdio.h>
int sdg(int n)
{
	static int sum=0;
    if (n == 0)
    {
        printf("Sum of digits:%d", sum);
        return 0;
    }

	else
    {
		sum += n % 10;
		sdg(n / 10);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	sdg(n);
	getch();
}
*/



/*
#include<stdio.h>
int sdg(int inp)
{
    int ldg, rem,sum;
    ldg = inp % 10;
    rem = inp / 10;

    if (rem == 0)
    {
        return 1;
    }
    return sum = ldg + sdg(rem);
}
int main()
{
    int  inp;
    scanf("%d", &inp);
    printf("Sum of digits : %d", sdg(inp));
    getch();
}
*/


//________________________________________________________________________________________________

                               // Class Tests //


 // Class Test 1:
//___________________

/*
Prob 1:
Write a C program that will do the following:
Take as input an integer n.
Take as input n integers into an array.
Reverse the last half of the array (from index (n/2 + 1) to index (n - 1)).
Print the reversed array.
*/

/*
#include <stdio.h>
int main()
{
    int arr[10000],i,n, x;
    printf("Enter Array size: ");
    scanf_s("%d", &n);

    printf("Input Inteers: ");
    for (i = 1; i <= n; i++)
    {
        scanf_s("%d", &arr[i]);
    }

    x = (n / 2 + 1);    //n=5, n/2=2.5, taking abs int 2, x=2+1=3 .

    for (i = 1; i < x; i++)
    {
        printf("%d ", arr[i]);   //printing  till 1 to 2.
    }

    for (i = n; i >= x; i--) //i=5, x=3, i-- so 5,4,3.
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/



/*
Prob 2:
Write a C program that will calculate the sum of the following series up to its nth term:
1.3.5+2.4.6+3.5.7+4.6.8+�+n(n+2)(n+4)
*/

/*
#include <stdio.h>
int main()
{
    int i, n, x, sum = 0;
    printf("Enter the nth term: ");
    scanf_s("%d", &n);
    for (i = 1; i <= n; i++)
    {
        x = i * (i + 2) * (i + 4);
        sum = sum + x;
    }
    printf("%d", sum);

    return 0;
}
*/



// Class Test 2:
//________________


 /*
 WAP that wil print followin pattern.

********
**    *
* *  *
*  **
*  **
* *  *
**    *
********

*/

/*
#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the Number:");
    scanf_s("%d", &n);
    for ( j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == n - j + 1 || j == n || i == 1 || j == 1 || j == i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
*/






// Class Test 3:
// On 2d array //
//___________________


/*
Write a C program that will take as input two n x n matrices A and B,
and then calculate A + B� (Here, B^T is the reverse of the matrix B,
see sample input/output for details).

Sample output                        Sample input
3
1 2 3                                  10 8 6
4 5 6                                  10 9 8
7 8 9                                  10 10 10

1 2 3
2 4 6
3 6 9
                                           Explanation:
                                        B^r the following:
                                         9 6 3
                                         6 4 2
                                         3 2 1
                                        So, A + B^r is the following:
                                         10 8 6
                                         10 9 8
                                         10 10 10                        */

/*
#include<stdio.h>
int main()
{
    int A[100][100], B[100][100], C[100][100], i, j, n;
    printf("Enter array size:");
    scanf_s("%d", &n);

    printf("Enter 1st Matrix elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf_s("%d", &A[i][j]);
        }
    }
    printf("Enter 2nd  Matrix elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf_s("%3d", &B[i][j]);
        }
    }

    int swap;
    for (i = 0; i < n; i++)
    {
        swap = B[i][0];   // 1st column is storing into Swap .
        B[i][0] = B[i][n - 1]; //3rd colmun is exchangin with 1st one.
        B[i][n - 1] = swap; // now 3rd colmun is 1st one.
    }

    printf("Reversed Matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%3d", B[i][j]);
        }
        printf("\n");
    }

    printf("Added matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%3d", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/






// Class Test 4:
//___________________

/* Write a C program that will take as input two integers a and b, and calculate ab.
You must create a function to calculate ab. You cannot use math.h functions.
.*/

/*
#include<stdio.h>
int num(int a, int b)
{
    int i, c = 1;
    for (i = 1; i <= b; i++)
    {
        c = c * a;
    }
    return c;
}
int main()
{
    int a, b, d;
    printf("Enter two integers:");
    scanf_s("%d %d", &a, &b);
    d = num(a, b);
    printf("%d^%d = %d", a, b, d);
    return 0;
}
*/




// Class Test 5:
//___________________


/* Write a C program that will take as input a string and a character, and count the occurrences
of the character in the string regardless of its case. You should also count the number of
uppercase letters and lowercase letters among them.

Sample input                      Sample output
My name is Andy                  2 (Uppercase: 1, Lowercase: 1)
a
WELCOME to CSE, everybody 5     (Uppercase: 3, Lowercase: 2)
*/

/*
#include<stdio.h>
int main()
{
	char str[1000],x;
	int i, a = 0, b = 0, c = 0;
	printf("Enter a string:");
	gets(str);
	printf("Enter a character:");
	x = getchar();

	for (i = 0; str[i] != '\0'; i++)
	{
			if (str[i] >= 'A' && str[i] <= 'Z')
				a++;
			else if
				(str[i] >= 'a' && str[i] <= 'z')
				b++;
	}

	printf("the character appears in the string: %d times , Uppercase:%d & Lowercase:%d", c, a, b);
	getch();
}
*/

//Another way
/*
#include<stdio.h>
int main()
{
	char str[1000], x, y;
	int i, a = 0, b = 0, c = 0;
	printf("Enter a string:");
	gets(str);
	printf("Enter a character:");
	x = getchar();

	if (x >= 'A' && x <= 'Z')
		y = x + 32;

	else if (x >= 'a' && x <= 'z')
		y = x - 32;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == x || str[i] == y)
			c++;
	}
		for (i = 0; str[i] != '\0'; i++)
	{
			if (str[i] >= 'A' && str[i] <= 'Z')
				a++;
			else if
				(str[i] >= 'a' && str[i] <= 'z')
				b++;
	}


	printf("the character appears in the string: %d times , Uppercase:%d & Lowercase:%d", c, a, b);
	getch();
}
*/



