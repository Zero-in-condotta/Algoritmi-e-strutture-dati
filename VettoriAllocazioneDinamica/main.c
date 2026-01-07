#include <stdio.h>
#include <stdlib.h>



int main(){
    int NumberOfElements;
    int* PArray = NULL;
    
    int i;
    
    printf("\nInsert how many elements (0 for exit): ");
    scanf("%d",&NumberOfElements);

    if(NumberOfElements == 0)
        return 0;

    PArray=(int*)(malloc(sizeof(int)*NumberOfElements));
    
    if (PArray==NULL){
        printf("\nNo Memory area available for allocation. Exiting...");
        return 0;
    }

    for (i=0; i<NumberOfElements;i++){
        int curValue;
        printf("insert integer for element %d: ", i);
        scanf ("%d",&curValue);
        *(PArray + i) = curValue;
    }
    
    
    for (i=0; i<NumberOfElements;i++){
        printf ("Array[%d]=%d;\n",i,PArray[i]);

    }
   


}
