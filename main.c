#include<stdio.h>

float square ( float x );                               

 
int main( )               
{
    float m, n ;
    printf ( "\nEnter some number for finding square \n");
    scanf ( "%f", &m ) ;
    // function call
    n = square ( m ) ;                      
    printf ( "\nSquare of the given number %f is %f",m,n );
    return 0; 
}
 
float square ( float x )   ;
