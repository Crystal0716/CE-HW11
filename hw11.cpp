#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std ; 

int main()
{
	int a , max , max2  , i ;
	double sum , average , b;
	i = 0 ;
	b = 0.00 ;
	max = 0 ;
	max2 = 0 ;
	sum = 0.00 ;
	do 
	{
		
		cout << "Enter an integer " << i << " : " ;
		cin >> a ;
		if ( a > max && a > max2 && a !=99)
		{
			sum = sum + a ;
			b = b + 1 ;
			i = i + 1 ;
			max2 = max ;
			max = a ;
		}
		else if (a < max && a > max2 && a != 99)
		{
			max2 = a ;
			b = b + 1 ; 
			sum = sum + a ;
			i = i + 1 ;
		}
		else if ( a != 99 )
		{
			b = b + 1 ;
			sum = sum + a ;
			i = i + 1 ;
		}

	}
	while( a != 99 );
	{
		b = b + 0 ;
		sum = sum + 0 ;
		if ( b > 1)
		{
			average = sum  / b ;
			cout << "The largest value is " << max << endl  << "The second largest value is " << max2 << endl << b << "number is total, average = " << average ;
		}
		else if ( b == 1 )
		{
			cout << "Only  1 number entered " ;
		}
		else
		{
			cout << "No number entered" ;
		}
	}
return(0);
}