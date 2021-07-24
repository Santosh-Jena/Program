/*Write a program using pointers to read an array of integers and print its elements in
reverse order.
*/
   #include<stdio.h>
    int main(){
                  int max, a, array[25];
                  int *ptr;
                  ptr = &array[0];
                  printf("\nEnter the size of array : ");
                  scanf("%d", &max);
                  printf("\nEnter integers into array: ");
                  for (a = 0; a < max; ++a) {
                  scanf("%d", ptr);
                  ++ptr;
                  }
                  ptr = &array[max - 1];
                  printf("\nElements of array in reverse order are :  ");
                  for (a = max - 1; a >= 0; a--) {
                  printf("%d ", *ptr);
                  --ptr;
                  }
    getch();
    }
