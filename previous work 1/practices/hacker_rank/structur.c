#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box                                     // declaration of structure       
{
	/**
	* Define three fields of type int: length, width and height
	*/
    int length;
    int width ;
    int height;
};

typedef struct box box;                       // initialsation and changing of name 

int get_volume(box b)                         // here my box structure is pointer 
 {                                            // because all the stru is pointer type
	/**
	* Return the volume of the box
	*/
    int volume;
    volume=b.length*b.height*b.width;
    return volume;
}

int is_lower_than_max_height(box b) {
	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
    if (b.height>=41) {
    return 0;
    }
    else {
    return 1;
    }
}

int main()
{   printf("ENTER TOTAL NUMBER OF BOXES:");
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));                // initialsation of struct using pointer 
    // like int *a=malloc(n * sizeof(int))
	for (int i = 0; i < n; i++) {                       // here my boxes is pointer of box structure     
        printf("\nENTER LENGTH WIDTH HEIGHT:");
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}