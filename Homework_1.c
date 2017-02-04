#include <stdio.h>
#include <stdint.h>


signed char reverse(signed char * str, uint8_t length);
uint8_t leng(char*str);
//int b=10;
uint8_t Length=30;


int main()
{
    uint8_t len;
	signed char A[]="Does it reverse \n\0\t correctly?";

	len=leng(&A);


	leng(&A);
	if (A[0] == '\0')
        printf("the first character is null hence m reversing after that\n");
	printf("length %d\n", len);
    //if (b<len)
    //printf("The function will give erroneous results");
    if (len>0)
        printf("reversed\n");
	reverse(&A,len);


	return 0;
}

uint8_t leng(char*str)
{
    uint8_t count=0;
    while(*(str) !='\0')
        {
            count++;
            str++;
        if (*(str) =='\0')
            continue;
        }
     return count;
}

signed char reverse(signed char * str, uint8_t length)
{
    //if (length>0)
    /*if (length<=Length)
    {


	for (int i=0; i<(length); i++)
	{

	    if (i<(length)/2)
            printf("%c",*(str+(length-i)));
        else if (i>(length)/2)
            printf("%c",*(str+(length-i)));
        else
            printf("%c",*(str+i));

	}
    *(str+(length-1))=*str;
    printf("%c",*(str+(length-1)));
    }
    //else if (length <= 0)
        //printf("fail\n");
    //else
	//
   // else
    //{
*/
	for (uint8_t i=0; i<(Length); i++)
	{

	    if (i<(Length)/2)
            printf("%c",*(str+(Length-i)));
        else if (i>(length)/2)
            printf("%c",*(str+(Length-i)));
        else
            printf("%c",*(str+i));

	}
    *(str+(Length-1))=*str;
    printf("%c",*(str+(Length-1)));



	putchar ('\n');
    return '0';
}
