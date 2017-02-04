#include<stdio.h>
#include<stdint.h>

int main()
{
    printf("char %d\n",sizeof(char));
    printf("int %d\n",sizeof(int));
    printf("float %d\n",sizeof(float));
    printf("double %d\n",sizeof(double));
    printf("short %d\n",sizeof(short));
    printf("long %d\n",sizeof(long));
    printf("long int %d\n",sizeof(long int));
    printf("long long %d\n",sizeof(long long));
    printf("int8_t %d\n",sizeof(int8_t));
    printf("uint8_t %d\n",sizeof(uint8_t));
    printf("uint16_t %d\n",sizeof(uint16_t));
    printf("uint32_t %d\n",sizeof(uint32_t));
    printf("char* %d\n",sizeof(char*));
    printf("int* %d\n",sizeof(int*));
    printf("float* %d\n",sizeof(float*));
    printf("void* %d\n",sizeof(void*));
    printf("void** %d\n",sizeof(void**));
    printf("int8_t* %d\n",sizeof(int8_t*));
    printf("int16_t* %d\n",sizeof(int16_t*));
    printf("int32_t* %d\n",sizeof(int32_t*));
    printf("size_t %d\n",sizeof(size_t));
    return 0;
}

