#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    int p[n];
    int s[n];
    for (int i=0; i<n; i++) 
    {
        p[i]=(tr[i].a+tr[i].b+tr[i].c)/2;
        s[i]=sqrt(p[i]*(p[i]-tr[i].a)*(p[i]-tr[i].b)*(p[i]-tr[i].c));
    }
   
    for (int i=n-2; i>=0;i--)
 {
    for (int j=0; j<=i;j++) {
    if (p[j]>p[j+1])
    {
        int tempp,tempa,tempb,tempc;
        tempp=p[j];
         tempa=tr[j].a;
         tempb=tr[j].b;
         tempc=tr[j].c;
         p[j]=p[j+1];
         tr[j].a=tr[j+1].a;
         tr[j].b=tr[j+1].b;
         tr[j].c=tr[j+1].c;
         p[j+1]=tempp;
         tr[j+1].a=tempa;
         tr[j+1].b=tempb;
         tr[j+1].c=tempc;
         
    }
    // free(p[j]);
    }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}