#include <stdio.h>
#include<process.h>
#include<conio.h>
/*
This function will read array of size 'size'
*/
void readArray(int x[], int size)
    {
        int k;
        printf("\n Enter %d items:",size);
        for(k=0; k<size; k++) // repeat for 'size'
        scanf("%d",&x[k]); // read item of array
    }
/*
This function will print array x of size 'size'
*/
void printArray(int x[], int size)
    {
        int k;
        printf("\n The array items are:\n");
        for(k= 0; k<size; k++) // repeat for all items in array x
        printf("%d ",x[k]);
    }
/*
This function will partition the array x with
lower boundary l and upper boundary u.
This function will return position where the is partitioned.
*/
int partition(int x[], int l, int u)
    {
        int pivote, pivotepos, temp;
        pivote = x[l];// mark lth item as pivote item
        pivotepos = l; // position of pivote item
        while(l<= u) // While l (lower boundry) does not crosses u (upper boundry) repeat following
            {
            // move 'l' to next location till pivote >= x[l]
            while(l<=u && pivote >= x[l])
            l++;
            // move 'u' to previous location till pivote < x[u]
            while(l <= u && pivote < x[u])
            u--;
            //if l and u are not crossed each other then
            if(l < u)
                {// swap x[l] and x[u]
                    temp = x[l];
                    x[l]= x[u];
                    x[u]= temp;
                }
            }
        // If l crosses u then array is divided at u
        // swap x[pivotepos] and x[u]
        temp = x[u];
        x[u] = x[pivotepos];
        x[pivotepos] = temp;
        return u; // return position where array is divided into two parts
    }
/*
This function will sort array x with lower boundary l
and upper boundary u
*/
void quickSort(int x[], int l, int u)
    {
    int mid;
    // if there are two or more item array x the do following
    if(l<u)
        {
            mid = partition(x,l,u); // partion array x from l to u
            //call quicksort on lower half array
            quickSort(x,l,mid-1);
            //call quicksort on upper half array
            quickSort(x,mid+1,u);
        }
    }
int main()
    {
        int n; 
        
        printf("\n Enter the array length - ");
        scanf("%d",&n);
        int x[n];
        printf("\n Read array x:");
        readArray(x,n);
        printf("\n Array x before sort is :");
        printArray(x,n);
        quickSort(x,0,n-1); // sort the array
        printf("\n Array x after Quick sort is :");
        printArray(x,n);
        return 0;
    }