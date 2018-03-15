/* 
 * File:   main.c
 * Author: johnston, mike
 * CS 1120
 * Assignment 4b
 * Created on March 5, 2018, 3:06 PM
 */

#include <stdio.h>

int main(void)
{
   int y; //working number rows
   int x; //working number columns
   int n; //input range max
   
   printf("MULTIPLICATION TABLE GENERATOR\n\n");                    //title
   printf("What range would you like to calculate? 1 to: ");        //question prompt for input
   scanf("%d",&n);                                                  //get input for range max
   printf("\nMultiplication table for 1 to %d: \n\n",n);            //label multiplication table to be printed
   printf(" 0  |");                                                 //header divider
   for (x=1; x<=n; x++)                                             //creates n columns
   {
       printf("%4d", x);                                            //header label / columns
   }
   printf("\n");                                                    //new line ends column labels
   
   for (x=1; x<=(n*4)+5; x++)                                       //header underline/divider
   {
       printf("-");                                                 //header underline/divider
   }
   printf("\n");                                                    //start new line after header divider/dashes
   
   for (x=1; x<=n; x++)                                             //creates n rows
   {
       printf(" %-2d |", x);                                        //row label (left justified) and divider
       for (y=1; y<=n; y++)                                         //create table
       {
           printf("%4d", x*y);                                      //print multiplied numbers in table
       }
       printf("\n");                                                //blank line before run summary
   }

   return (0);                                                      //return zero (0) if no error
}                                                                   //end main()
