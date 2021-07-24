/*
Write a menu-based program that takes two linear arrays A and B as input and displays
the results of the following operations based on user’s choice.
1. Traverse A.
2. Traverse B.
3. Insert a new element in A (after insertion, the size of A should increase by 1).
4. Insert a new element in B (after insertion, the size of B should increase by 1).
5. Delete an element from A.
6. Delete an element from B.
7. Search an element in A.
8. Search an element in B.
9. Sort A (in ascending order).
10. Sort B (in ascending order).
11. Merge A and B to form a new array C.
*/
#include<stdio.h>
#include<conio.h>
void main() {
    int A[1000],B[1000],C[2000],m,n,o,t,d;
    m=n=o=0;
    while(1) {
        printf("\n1. Traverse A.\n2. Traverse B.\n3. Insert a new element in A .\n");
        printf("4. Insert a new element in B .\n5. Delete an element from A.\n6. Delete an element from B.\n");
        printf("7. Search an element in A.\n8. Search an element in B.\n9. Sort A (in ascending order).\n10. Sort B (in ascending order).\n");
        printf("11. Merge A and B to form a new array C.\n");
        printf("Choose any option to perform : ");
        int choice;
        scanf("%d",&choice);
        switch(choice) {
        case 1:
            printf("\nTraverse A\n");
            for(int i=0;i<m;i++)
                printf("%d  ",A[i]);
            break;
        case 2:
            printf("\nTraverse B\n");
            for(int i=0;i<n;i++)
                printf("%d  ",B[i]);
            break;
        case 3:
            printf("\nInsert a new element in A\nEnter a number : ");
            scanf("%d",&A[m++]);
            printf("%d inserted\n",A[m-1]);
            break;
        case 4:
            printf("\nInsert a new element in B\nEnter a number : ");
            scanf("%d",&B[n++]);
            printf("%d inserted\n",B[n-1]);
            break;
        case 5:
            printf("\nDelete an element from A.\nEnter the index of number : ");
            scanf("%d",&t);
            d=A[t];
            for(int i=t;i<m-1;i++)
                A[i]=A[i+1];
            m--;
            printf("%d deleted\n",d);
            break;
        case 6:
            printf("\nDelete an element from B.\nEnter the index of number : ");
            scanf("%d",&t);
            d=B[t];
            for(int i=t;i<n-1;i++)
                B[i]=B[i+1];
            n--;
            printf("%d deleted\n",d);
            break;
        case 7:
            printf("\nSearch an element in A.\nEnter the number : ");
            scanf("%d",&d);
            t=-1;
            for(int i=0;i<m;i++) {
                if(A[i]==d) {
                    t=i;
                    break;
                }
            }
            if(t>=0)
                printf("%d founded at index %d\n",d,t);
            else
                printf("%d not found\n",d);
            break;
        case 8:
            printf("\nSearch an element in B.\nEnter the number : ");
            scanf("%d",&d);
            t=-1;
            for(int i=0;i<n;i++) {
                if(B[i]==d) {
                    t=i;
                    break;
                }
            }
            if(t>=0)
                printf("%d founded at index %d\n",d,t);
            else
                printf("%d not found\n",d);
            break;
        case 9:
            printf("\nSort A (in ascending order)\n");
            for(int i=0;i<m-1;i++) {
                for(int j=i+1;j<m;j++) {
                    if(A[i]>A[j]) {
                        d=A[i];
                        A[i]=A[j];
                        A[j]=d;
                    }
                }
            }
            for(int i=0;i<m;i++)
                printf("%d  ",A[i]);
            break;
        case 10:
            printf("\nSort B (in ascending order)\n");
            for(int i=0;i<n-1;i++) {
                for(int j=i+1;j<n;j++) {
                    if(B[i]>B[j]) {
                        d=B[i];
                        B[i]=B[j];
                        B[j]=d;
                    }
                }
            }
            for(int i=0;i<n;i++)
                printf("%d  ",B[i]);
            break;
        case 11:
            printf("\nMerge A and B to form a new array C.\n");
            for(int i=0;i<m;i++)
                C[i]=A[i];
            for(int i=0;i<n;i++)
                C[m+i]=B[i];
            o=m+n;
            for(int i=0;i<o;i++)
                printf("%d  ",C[i]);
            break;

        default :
            return;
        }
    }
}
