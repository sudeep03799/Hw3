#include <stdio.h>
#include <stdint.h>


signed char reverse(char * str, int length);
uint8_t length(char*str);
//int b=10;
uint8_t Length =17;
int main()
{
    uint8_t len;
	signed char A[]="This is a string";
	len=leng(&A);
	leng(&A);
	//if (A[0] == '\0')
        //printf("the first character is null hence m reversing after that\n");
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
    while(*(str) != '\0')
        {
            count++;
            str++;
        }
     return count;
}

signed char reverse(signed char * str, uint8_t length)
{
    //if (length>0)
    if (Length >length)
    {

	
	for (int i=0; i<(length); i++)
	{
	    
	    if (i<(length)/2)
            printf("%c\n",*(str+(length-i)));
        else if (i>(length)/2)
            printf("%c\n",*(str+(length-i)));
        else
            printf("%c\n",*(str+i));

	}
    *(str+(length-1))=*str;
    printf("%c\n",*(str+(length-1)));
    }
    //else if (length <= 0)
        //printf("fail\n");
    else 
	{
		
	for (int i=0; i<(Length); i++)
	{
	    
	    if (i<(Length)/2)
            printf("%c\n",*(str+(Length-i)));
        else if (i>(length)/2)
            printf("%c\n",*(str+(Length-i)));
        else
            printf("%c\n",*(str+i));

	}
    *(str+(Length-1))=*str;
    printf("%c\n",*(str+(Length-1)));
    }
	}
	
    //if (*(str+length)=='\0')
        //printf("The function will reverse everything before the null character\n");
    return 0;
}

