/* This program concatenates the two string arrays and then reverse the array*/

#include <stdio.h>
#include<string.h>
//#include <constants.h>

void main()
{


char array3[20], array[20];
char array1[10]= {'a','b','c','d','e','f','g','h','i','j'}; // array of characters
char array2[10]= {'1','2','3','4','5','6','7','8','9','10'};
char name1[10]="Hello "; //string
char name2[20]="to the World";


printf("Name1=%s",name1);
printf("\nName2=%s",name2);
char name3[10];
/*name3[100]=strrev(name1);*/
strrev(name1);
printf("\nReversed String 1 is=%s", name1);
strcat(strrev(name1), name2);
printf("\nConcatenated String is=%s",name1);
strcpy(name3,name1);
printf("\nThe copied string is= %s ",name3);




}


















