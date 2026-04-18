/*
//problem 01 : updating value.

#include<stdio.h>
int main(){
 int a=1;
 printf("a=%d\n",a);
 a=2;
 printf("updated a=%d",a);



return 0;
}

//problem 02 :int,float and char type variable.

#include<stdio.h>
int main(){
    int a=1;
    float b=1.5;
    char c='A';
    printf("a=%d\n",a);
    printf("b=%f\n",b);
    printf("c=%c",c);

return 0;
}

// problem 03 : using formate spacifers

#include<stdio.h>
int main (){
    int a=1;
    float b=1.5;
    char c='A';
    char d[]="Redone Turzo";
    printf("a=%d\n",a);
    printf("b=%f\n",b);
    printf("c=%c\n",c);
    printf("d=%s",d);

return 0;
}


// problem 04 : the size of operator

#include<stdio.h>
int main(){

printf("int size = %lu bytes\n",sizeof(int));
printf("float size = %lu bytes\n",sizeof(float));
printf("double size = %lu bytes\n",sizeof(double));
printf("char size = %lu bytes\n",sizeof(char));

return 0;
}


// problem 05 : print value without variablers

#include<stdio.h>
int main()
{
    printf("My GUB ID is = %d\n",39);
     printf("My section is = %c",'D');

    return 0;
}



// problem 06 : Input in C

#include<stdio.h>
int main(){
 char name[50];
 printf("Give your name please : ");
 scanf("%s",name);
 printf("Welcome %s",name);

return 0;
}


// problem 07 : change variable value

#include<stdio.h>
int main(){
 int a=1;
 // printf("a=%d\n",a);
 a=2;
 printf("New a=%d",a);



return 0;
}


// problem 08 : Add variables togather

#include<stdio.h>
int main (){
    int a=1;
    int b=2;
    int sum=a+b;
    printf("add sum =%d",sum);

return 0;
}

// problem 09 : Declare multiple variables

#include<stdio.h>
int main (){
 int a=1,b=2,c=3,d=4,e=5;
 printf("%d",a+b+c+d+e);
return 0;
}


// problem 10 : assign the same value in multipal variables

#include<stdio.h>
int main(){
int a,b,c;
a=b=c=1;
printf("%d",a+b+c);
return 0;
}



// problem 11 : Craet variables of different data type

#include<stdio.h>
int main(){
int items=15;
float price_per_items=55.555;
float total_cost=items*price_per_items;
char currency='$';
printf("Itmes = %d\n",items);
printf("Per itmes price = %f\n",price_per_items);
printf("Total cost = %f %c",total_cost,currency);
return 0;

}



// problem 12 : C conversion

 #include<stdio.h>
 int main(){
 int a,b;
 a=5,b=2;
 int div=a/b;
 printf("%d",div);
 return 0;
 }



// problem 13 : Implicit conversion


#include<stdio.h>
int main(){

 int a=1.55555;
 printf("%d\n",a);

                                 //change automatically
 float b=1;
 printf("%f",b);

return 0;
}



// problem 14 : Explicit conversion


#include<stdio.h>
int main (){
    int a=5;
    int b=2;
    float div =(float)a/b;                  //change manually
    printf("%f",div);

return 0;
}

*/

// problem 15 : Constant in C

#include<stdio.h>
int main(){

 /* a.wrong fromat

 const int a;
 a=1;
 printf("%d",a);

 */

 /*
  b. Also wrong fromat
 const int a=1;
 a=2;
 printf("%d",a);
 */


 // c. correct format
 const int a=1;
 printf("%d",a);
return 0;
}
