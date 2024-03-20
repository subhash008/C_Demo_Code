#include<stdio.h>

//#define WIN

#ifdef WIN
// #if defined(WIN)
void printmsg(){
    printf("This function supports Windows\n\n");
}

#else
void printmsg(){
    printf("This function supports MAC\n\n");
}
#endif

void main(){

    printmsg();

}

//first implimentation
#define OS 1 // 1 for win and 2 mac and 3 for Linux
#if (OS==1)


#endif

#if (OS==2)


#endif

#if (OS==3)


#endif

// second implimentation
#define OS 1 // 1 for win and 2 mac and 3 for Linux
#if (OS==1)
    // code for WIN
#elif (OS==2)
    //code MAC

#else

    // Code Linux
#endif

// another implimentation
#ifndef WIN
// if !defined(WIN)
    //code for MAC
#else
    //code for WIN
#endif