
/**
 *
 *------------------------------------------------------------------------------------------------
 *     Data Type            Memory              Range                     Format Specifier
 *------------------------------------------------------------------------------------------------
 *
 *     short int            2 bytes          -32,768 to 32,767                   %hd
 *
 *  unsigned short int      2 bytes            0 to 65,535                       %hu
 *
 *   unsigned int           4 bytes         0 to 4,294,967,295                    %u
 *
 *        int               4 bytes     -2,147,483,648 to 2,147,483,647           %d
 *
 *      long int            4 bytes     -2,147,483,648 to 2,147,483,647          %ld
 *
 *  unsigned long int       4 bytes           0 to 4,294,967,295                 %lu
 *
 *  long long int           8 bytes         -(2^63) to (2^63)-1                  %lld
 *
 *  unsigned long long int  8 bytes     0 to 18,446,744,073,709,551,615          %llu
 *
 *    signed char           1 bytes           -128 to 127                         %c
 *
 *   unsigned char          1 bytes              0 to 255                         %c
 *
 *      float               4 bytes       1.1754e-38 to 3.4028e+38                %f
 *
 *      double              8 bytes     2.2250e-308 to 1.7976e+308               %lf
 *
 *    long double          12 bytes       3.4E-4932 to 3.4E+4932                 %Lf
 *
 *
 */

 #include<stdio.h>
 #include<limits.h>
 #include<float.h>

 int main(){

/*    printf("Bits in char %d\n",CHAR_BIT);
    printf("Minimum value of char =%d\n",CHAR_MIN);
    printf("Maximum value of char =%d\n",CHAR_MAX);
    printf("Minimum value of int  =%d\n",INT_MIN);
    printf("Maximum value of int  =%d\n",INT_MAX);
    printf("Minimum value of long int =%ld\n",LONG_MIN);
    printf("Maximum value of long int =%ld\n",LONG_MAX);
    printf("Minimum value of signed char =%d\n",SCHAR_MIN);
    printf("Maximum value of signed char =%d\n",SCHAR_MAX);
    printf("Minimum value of short int=%hd\n",SHRT_MIN);
    printf("Maximum value of short int=%hd\n",SHRT_MAX);
    printf("Maximum value of unsigned char =%u\n",UCHAR_MAX);
    printf("Maximum value of unsigned int =%u\n",UINT_MAX);
    printf("Maximum value of unsigned long int=%lu\n",ULONG_MAX);
    printf("Maximum value of unsigned short int=%hu\n",USHRT_MAX);

    printf("\n");
    printf("\n");
*/
    printf("%30s %12s %28s\n", "", "Size", "Range");

    printf("%-30s %10lu %25d - %d\n", "char or signed char", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("%-30s %10lu %25d - %d\n", "unsigned char", sizeof(unsigned char), 0, UCHAR_MAX);
    printf("%-30s %10lu %25d - %d\n", "int or signed int", sizeof(int), INT_MIN, INT_MAX);
    printf("%-30s %10lu %25d - %ud\n", "unsigned int", sizeof(unsigned int), 0, UINT_MAX);
    printf("%-30s %10lu %25hd - %hd\n", "short int or short signed int", sizeof(short int), SHRT_MIN, SHRT_MAX);
    printf("%-30s %10lu %25d - %d\n", "unsigned short int", sizeof(unsigned short int), 0, USHRT_MAX);
    printf("%-30s %10lu %25ld - %ld\n", "long int or signed long int", sizeof(long int), LONG_MIN, LONG_MAX);
    printf("%-30s %10lu %25d - %lu\n", "unsigned long int", sizeof(unsigned long int), 0, ULONG_MAX);

    printf("%-30s %10lu %25le - %le\n", "float", sizeof(float), FLT_MIN, FLT_MAX);
    printf("%-30s %10lu %25le - %le\n", "double", sizeof(double), DBL_MIN, DBL_MAX);
    printf("%-30s %10lu %25Le - %Le\n", "long double", sizeof(long double), LDBL_MIN, LDBL_MAX);

 return 0;
 }
