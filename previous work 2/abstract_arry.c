#include<stdio.h>
#include<stdlib.h>
struct my_arry                        // delceration of structure
    {
        int total_size;
        int used_size;
        int *ptr;
    };
 void creat_arry(struct my_arry *a,int total_size,int used_size)        // struct pointer created
 {
   a->used_size=used_size;                                 // also way to use '.' opretor
   a->total_size=total_size;                                // struct element   
   a->ptr=(int*)malloc(total_size*sizeof(int));  // intialising dyanamic arry this give me~~
   // ~~ memory in heap so after return function my memory getstored my arry is safe in *****heap 
   // it is not stored in stack memory so*********
    // (*a).total_size=total_size;
    // (*a).used_size=used_size;                          
    // (*a).ptr=(int*)malloc(total_size*sizeof(int));
 };
 void show(struct my_arry *a)
 {
     for (int i = 0; i < (a->used_size); i++)
     {  
        printf("\n%d ",(a->ptr)[i]) ;                   // it is simlar as we use a[i]
    
     }
     
 }
 void set(struct my_arry *a)
 {
     for (int i = 0; i < (a->used_size); i++)
     {  
       printf("enter the marks for student %d:",i);
       scanf("%d",&a->ptr[i]);                         // it is simlar as we use a[i]
                                                      // value of a[i] is printed.
     }
     
 }


int main()
{   
    int totals=50,useds;
    struct my_arry marks;                   // my struct variable is created      
    printf("Enter the total number to want use:");
    scanf("%d",&useds);
    creat_arry(&marks,totals,useds);        
    set(&marks);
    show(&marks);

}