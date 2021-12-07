#include<stdio.h>
int main(){
    int arr[]={23,43,55,65,77};
    int *p;
    p=arr; // array names contraions the base address so that we can declare like this 
    // oth9erwise we can declare p=&b;
  //  printf("Enter the all element of the array=");
   // printf("/n%d",arr);
    printf("\n%d",p);
    printf("\n%d",*p);
    printf("\n%d",arr);
    printf("\n%d",&arr);
    printf("\n%d",*arr);
    printf("\n%d",*arr+1);
    printf("\n%d",*(arr+1));
    printf("\n%d",arr[4]);
    printf("\n%d",*(arr+1));
    printf("\n%d",*(p+1));
    return 0;
    

}