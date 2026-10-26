<!-- qrun:topic-start id="topic-00" -->

<!-- qrun:field-start topic id="topic-00" -->

# Single-Dimensional Arrays

<!-- qrun:field-end topic id="topic-00" -->

<!-- qrun:entry-start id="q-00-01" -->

<!-- qrun:field-start question id="q-00-01" -->

## Q 01 : Enter an array from the user and display all its values.

<!-- qrun:field-end question id="q-00-01" -->

### CODE

<!-- qrun:field-start code id="q-00-01" -->

```c
// Single-Dimensional Arrays -> Q 01 : Enter an array from the user and display all its values.

#include <stdio.h>

int main(){

    int arr[10];
    int s = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i< s ; i++ ){
        printf("The element number %d is -> %d \n",i+1,arr[i]);
    }



    return 0;
}

```

<!-- qrun:field-end code id="q-00-01" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-01" -->



<!-- qrun:field-end freshness id="q-00-01" -->

<!-- qrun:field-start output id="q-00-01" -->

```text
$ gcc q-00-01.c -o ./bin/q-00-01.out && ./bin/q-00-01.out
Enter the element 1 -> 1
Enter the element 2 -> 2
Enter the element 3 -> 3
Enter the element 4 -> 4232
Enter the element 5 -> 53
Enter the element 6 -> -32
Enter the element 7 -> 3
Enter the element 8 -> 32
Enter the element 9 -> 0
Enter the element 10 -> 41
The element number 1 is -> 1 
The element number 2 is -> 2 
The element number 3 is -> 3 
The element number 4 is -> 4232 
The element number 5 is -> 53 
The element number 6 is -> -32 
The element number 7 is -> 3 
The element number 8 is -> 32 
The element number 9 is -> 0 
The element number 10 is -> 41 
```

<!-- qrun:field-end output id="q-00-01" -->
<!-- qrun:entry-end id="q-00-01" -->


<!-- qrun:entry-start id="q-00-02" -->

<!-- qrun:field-start question id="q-00-02" -->

## Q 02 : Enter an array from the user and print it in reverse order.

<!-- qrun:field-end question id="q-00-02" -->

### CODE

<!-- qrun:field-start code id="q-00-02" -->

```c
// Single-Dimensional Arrays -> Q 02 : Enter an array from the user and print it in reverse order.

#include <stdio.h>

int main(){

    int arr[10];
    int s = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Reverse Order :\n");
    for (int i = s-1; i >=0 ; i-- ){
        printf("The element number %d is -> %d \n",i+1,arr[i]);
    }



    return 0;
}

```

<!-- qrun:field-end code id="q-00-02" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-02" -->



<!-- qrun:field-end freshness id="q-00-02" -->

<!-- qrun:field-start output id="q-00-02" -->

```text
$ gcc q-00-02.c -o ./bin/q-00-02.out && ./bin/q-00-02.out
Enter the element 1 -> 1
Enter the element 2 -> 3
Enter the element 3 -> 4
Enter the element 4 -> 3
Enter the element 5 -> 32
Enter the element 6 -> 32
Enter the element 7 -> 33
Enter the element 8 -> 2556
Enter the element 9 -> -23
Enter the element 10 -> 3
Reverse Order :
The element number 10 is -> 3 
The element number 9 is -> -23 
The element number 8 is -> 2556 
The element number 7 is -> 33 
The element number 6 is -> 32 
The element number 5 is -> 32 
The element number 4 is -> 3 
The element number 3 is -> 4 
The element number 2 is -> 3 
The element number 1 is -> 1 
```

<!-- qrun:field-end output id="q-00-02" -->
<!-- qrun:entry-end id="q-00-02" -->


<!-- qrun:entry-start id="q-00-03" -->

<!-- qrun:field-start question id="q-00-03" -->

## Q 03 : Enter an array from the user and copy it into a second array.

<!-- qrun:field-end question id="q-00-03" -->

### CODE

<!-- qrun:field-start code id="q-00-03" -->

```c
// Single-Dimensional Arrays -> Q 03 : Enter an array from the user and copy it into a second array.

#include <stdio.h>

int main(){

    int arr[10],arr2[10];
    int s = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Copping array :\n");
    
    for (int i = 0; i< s ; i++ ){
        arr2[i]=arr[i];
    }
    
    printf("Coppied array elemnts :\n");
    for (int i = 0; i <s ; i++ ){
        printf("The element number %d is -> %d \n",i+1,arr2[i]);
    }



    return 0;
}

```

<!-- qrun:field-end code id="q-00-03" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-03" -->



<!-- qrun:field-end freshness id="q-00-03" -->

<!-- qrun:field-start output id="q-00-03" -->

```text
$ gcc q-00-03.c -o ./bin/q-00-03.out && ./bin/q-00-03.out
Enter the element 1 -> 3
Enter the element 2 -> 24
Enter the element 3 -> 53
Enter the element 4 -> 
6
Enter the element 5 -> 664
Enter the element 6 -> 54
Enter the element 7 -> 3
Enter the element 8 -> 3
Enter the element 9 -> 22
Enter the element 10 -> 1
Copping array :
Coppied array elemnts :
The element number 1 is -> 3 
The element number 2 is -> 24 
The element number 3 is -> 53 
The element number 4 is -> 6 
The element number 5 is -> 664 
The element number 6 is -> 54 
The element number 7 is -> 3 
The element number 8 is -> 3 
The element number 9 is -> 22 
The element number 10 is -> 1 
```

<!-- qrun:field-end output id="q-00-03" -->
<!-- qrun:entry-end id="q-00-03" -->


<!-- qrun:entry-start id="q-00-04" -->

<!-- qrun:field-start question id="q-00-04" -->

## Q 04 : Enter an array from the user and copy it into another array in reverse order.

<!-- qrun:field-end question id="q-00-04" -->

### CODE

<!-- qrun:field-start code id="q-00-04" -->

```c
// Single-Dimensional Arrays -> Q 04 : Enter an array from the user and copy it into another array in reverse order.

#include <stdio.h>

int main(){

    int arr[10],arr2[10];
    int s = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Copping array :\n");
    
    for (int i = 0; i< s ; i++ ){
        arr2[s-i-1]=arr[i];
    }
    
    printf("Coppied array elemnts (initial array reverse):\n");
    for (int i = 0; i <s ; i++ ){
        printf("The element number %d is -> %d \n",i+1,arr2[i]);
    }



    return 0;
}

```

<!-- qrun:field-end code id="q-00-04" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-04" -->



<!-- qrun:field-end freshness id="q-00-04" -->

<!-- qrun:field-start output id="q-00-04" -->

```text
$ gcc q-00-04.c -o ./bin/q-00-04.out && ./bin/q-00-04.out
Enter the element 1 -> 3
Enter the element 2 -> 2
Enter the element 3 -> 3
Enter the element 4 -> -1
Enter the element 5 -> 32
Enter the element 6 -> -22
Enter the element 7 -> 3
Enter the element 8 -> 4
Enter the element 9 -> 7664
Enter the element 10 -> 3
Copping array :
Coppied array elemnts (initial array reverse):
The element number 1 is -> 3 
The element number 2 is -> 7664 
The element number 3 is -> 4 
The element number 4 is -> 3 
The element number 5 is -> -22 
The element number 6 is -> 32 
The element number 7 is -> -1 
The element number 8 is -> 3 
The element number 9 is -> 2 
The element number 10 is -> 3 
```

<!-- qrun:field-end output id="q-00-04" -->
<!-- qrun:entry-end id="q-00-04" -->


<!-- qrun:entry-start id="q-00-05" -->

<!-- qrun:field-start question id="q-00-05" -->

## Q 05 : Enter an array from the user and print all even numbers.

<!-- qrun:field-end question id="q-00-05" -->

### CODE

<!-- qrun:field-start code id="q-00-05" -->

```c
// Single-Dimensional Arrays -> Q 05 : Enter an array from the user and print all even numbers.

#include <stdio.h>

int main(){

    int arr[10];
    int s = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i< s ; i++ ){
        if (arr[i] % 2 == 0 )
        printf("The even element is -> %d \n",arr[i]);
    }



    return 0;
}

```

<!-- qrun:field-end code id="q-00-05" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-05" -->



<!-- qrun:field-end freshness id="q-00-05" -->

<!-- qrun:field-start output id="q-00-05" -->

```text
$ gcc q-00-05.c -o ./bin/q-00-05.out && ./bin/q-00-05.out
Enter the element 1 -> 3
Enter the element 2 -> 322
Enter the element 3 -> 32
Enter the element 4 -> 3
Enter the element 5 -> 75
Enter the element 6 -> -22
Enter the element 7 -> 33
Enter the element 8 -> 43
Enter the element 9 -> 4
Enter the element 10 -> 5
The even element is -> 322 
The even element is -> 32 
The even element is -> -22 
The even element is -> 4 
```

<!-- qrun:field-end output id="q-00-05" -->
<!-- qrun:entry-end id="q-00-05" -->


<!-- qrun:entry-start id="q-00-06" -->

<!-- qrun:field-start question id="q-00-06" -->

## Q 06 : Enter an array from the user and print all positive numbers.

<!-- qrun:field-end question id="q-00-06" -->

### CODE

<!-- qrun:field-start code id="q-00-06" -->

```c
// Single-Dimensional Arrays -> Q 06 : Enter an array from the user and print all positive numbers.

#include <stdio.h>

int main(){

    int arr[5];
    int s = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i< s ; i++ ){
        if (arr[i] > 0 )
        printf("The +ve element is -> %d \n",arr[i]);
    }



    return 0;
}

```

<!-- qrun:field-end code id="q-00-06" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-06" -->



<!-- qrun:field-end freshness id="q-00-06" -->

<!-- qrun:field-start output id="q-00-06" -->

```text
$ gcc q-00-06.c -o ./bin/q-00-06.out && ./bin/q-00-06.out
Enter the element 1 -> 2
Enter the element 2 -> 3233
Enter the element 3 -> 32
Enter the element 4 -> 4
Enter the element 5 -> 5
The +ve element is -> 2 
The +ve element is -> 3233 
The +ve element is -> 32 
The +ve element is -> 4 
The +ve element is -> 5 
```

<!-- qrun:field-end output id="q-00-06" -->
<!-- qrun:entry-end id="q-00-06" -->


<!-- qrun:entry-start id="q-00-07" -->

<!-- qrun:field-start question id="q-00-07" -->

## Q 07 : Enter an array from the user and square all its values.

<!-- qrun:field-end question id="q-00-07" -->

### CODE

<!-- qrun:field-start code id="q-00-07" -->

```c
// Single-Dimensional Arrays -> Q 07 : Enter an array from the user and square all its values.

#include <stdio.h>

int main(){

    int arr[5];
    int s = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i< s ; i++ ){
        printf("The element sq is -> %d \n",arr[i] * arr[i]);
    }



    return 0;
}

```

<!-- qrun:field-end code id="q-00-07" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-07" -->



<!-- qrun:field-end freshness id="q-00-07" -->

<!-- qrun:field-start output id="q-00-07" -->

```text
$ gcc q-00-07.c -o ./bin/q-00-07.out && ./bin/q-00-07.out
Enter the element 1 -> 4
Enter the element 2 -> 232
Enter the element 3 -> 3
Enter the element 4 -> 2
Enter the element 5 -> -65
The element sq is -> 16 
The element sq is -> 53824 
The element sq is -> 9 
The element sq is -> 4 
The element sq is -> 4225 
```

<!-- qrun:field-end output id="q-00-07" -->
<!-- qrun:entry-end id="q-00-07" -->


<!-- qrun:entry-start id="q-00-08" -->

<!-- qrun:field-start question id="q-00-08" -->

## Q 08 : Enter an array from the user and find the maximum and minimum values.

<!-- qrun:field-end question id="q-00-08" -->

### CODE

<!-- qrun:field-start code id="q-00-08" -->

```c
// Single-Dimensional Arrays -> Q 08 : Enter an array from the user and find the maximum and minimum values.

#include <stdio.h>

int main(){

    int arr[5];
    int s = sizeof(arr)/sizeof(arr[0]);

    int min = 99999, max = -99999;

    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i< s ; i++ ){
        if (arr[i] > max){
            max = arr[i];
        }
        else if (arr[i] < min){
            min = arr[i];
        }
    }

    printf("Minimun value is  -> %d \n",min);
    printf("Maximum value is  -> %d ",max);



    return 0;
}

```

<!-- qrun:field-end code id="q-00-08" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-08" -->



<!-- qrun:field-end freshness id="q-00-08" -->

<!-- qrun:field-start output id="q-00-08" -->

```text
$ gcc q-00-08.c -o ./bin/q-00-08.out && ./bin/q-00-08.out
Enter the element 1 -> 4
Enter the element 2 -> 0
Enter the element 3 -> -22
Enter the element 4 -> 4344
Enter the element 5 -> 4
Minimun value is  -> -22 
Maximum value is  -> 4344 
```

<!-- qrun:field-end output id="q-00-08" -->
<!-- qrun:entry-end id="q-00-08" -->


<!-- qrun:entry-start id="q-00-09" -->

<!-- qrun:field-start question id="q-00-09" -->

## Q 09 : Enter an array from the user and find the k-th smallest value.

<!-- qrun:field-end question id="q-00-09" -->

### CODE

<!-- qrun:field-start code id="q-00-09" -->

```c
// Single-Dimensional Arrays -> Q 09 : Enter an array from the user and find the k-th smallest value.


#include <stdio.h>

int main(){

    int arr[10] , k ;
    int s = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
        
    }

    for (int i = 0; i < s - 1; i++) {
        for (int j = i + 1; j < s; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    printf("Enter the k th Position -> ");
    scanf("%d",&k);
    printf("The k th Position Element is -> %d ",arr[k-1]);




    return 0;
}

```

<!-- qrun:field-end code id="q-00-09" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-09" -->



<!-- qrun:field-end freshness id="q-00-09" -->

<!-- qrun:field-start output id="q-00-09" -->

```text
$ gcc q-00-09.c -o ./bin/q-00-09.out && ./bin/q-00-09.out
Enter the element 1 -> 1
Enter the element 2 -> 24
Enter the element 3 -> 1
Enter the element 4 -> 434
Enter the element 5 -> 34
Enter the element 6 -> 2
Enter the element 7 -> 3
Enter the element 8 -> 23
Enter the element 9 -> 53
Enter the element 10 -> 43
Enter the k th Position -> 5
The k th Position Element is -> 24 
```

<!-- qrun:field-end output id="q-00-09" -->
<!-- qrun:entry-end id="q-00-09" -->


<!-- qrun:entry-start id="q-00-10" -->

<!-- qrun:field-start question id="q-00-10" -->

## Q 10 : Enter an array from the user and find the sum of all its values.

<!-- qrun:field-end question id="q-00-10" -->

### CODE

<!-- qrun:field-start code id="q-00-10" -->

```c
// Single-Dimensional Arrays -> Q 10 : Enter an array from the user and find the sum of all its values.

#include <stdio.h>

int main(){

    int arr[5],sum;
    int s = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i< s ; i++ ){
        sum = sum + arr[i];
    }
    printf("The Sum is -> %d \n",sum);

    return 0;
}

```

<!-- qrun:field-end code id="q-00-10" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-10" -->



<!-- qrun:field-end freshness id="q-00-10" -->

<!-- qrun:field-start output id="q-00-10" -->

```text
$ gcc q-00-10.c -o ./bin/q-00-10.out && ./bin/q-00-10.out
Enter the element 1 -> 1
Enter the element 2 -> 353
Enter the element 3 -> 563
Enter the element 4 -> -90
Enter the element 5 -> 32
The Sum is -> 861 
```

<!-- qrun:field-end output id="q-00-10" -->
<!-- qrun:entry-end id="q-00-10" -->


<!-- qrun:entry-start id="q-00-11" -->

<!-- qrun:field-start question id="q-00-11" -->

## Q 11 : Enter an array from the user and find the duplicate values.

<!-- qrun:field-end question id="q-00-11" -->

### CODE

<!-- qrun:field-start code id="q-00-11" -->

```c
// Single-Dimensional Arrays -> Q 11 : Enter an array from the user and find the duplicate values.

#include <stdio.h>

int main(){

    int arr[10],map[10][11] = {0},found,x=0;
    int s = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i< s ; i++ ){

        found = 0;
        for (int k = 0; k < x; k++){
            if (arr[i] == map[k][0]){
                found = 1;
                break;
            }
        }
        
        if (found == 0){
            map[x][0] = arr[i];
            
            for (int j = 0; j< s ; j++ ){
                if (arr[i] == arr[j]){
                    map[x][j+1] = 1;
                }
            }
            
            x++;

        }


    }

    for(int i = 0;i < x; i++){
    printf("\nValue %d found at index positoins - > ",map[i][0]);
        for (int j = 0; j< s ; j++ ){
            if (map[i][j+1] == 1)
            printf("%d,",j);
        }

    }



    return 0;
}

```

<!-- qrun:field-end code id="q-00-11" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-11" -->



<!-- qrun:field-end freshness id="q-00-11" -->

<!-- qrun:field-start output id="q-00-11" -->

```text
$ gcc q-00-11.c -o ./bin/q-00-11.out && ./bin/q-00-11.out
Enter the element 1 -> 1
Enter the element 2 -> 1
Enter the element 3 -> 1
Enter the element 4 -> 1
Enter the element 5 -> 13
Enter the element 6 -> 13
Enter the element 7 -> 13
Enter the element 8 -> 5
Enter the element 9 -> 13
Enter the element 10 -> 1

Value 1 found at index positoins - > 0,1,2,3,9,
Value 13 found at index positoins - > 4,5,6,8,
Value 5 found at index positoins - > 7,
```

<!-- qrun:field-end output id="q-00-11" -->
<!-- qrun:entry-end id="q-00-11" -->


<!-- qrun:entry-start id="q-00-12" -->

<!-- qrun:field-start question id="q-00-12" -->

## Q 12 : Enter an array from the user, remove duplicate values, and replace them with zeros.

<!-- qrun:field-end question id="q-00-12" -->

### CODE

<!-- qrun:field-start code id="q-00-12" -->

```c
// Single-Dimensional Arrays -> Q 12 : Enter an array from the user, remove duplicate values, and replace them with zeros.


#include <stdio.h>

int main(){

    int arr[10],map[10][11] = {0},found,x=0;
    int s = sizeof(arr)/sizeof(arr[0]);



    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nArray After -> [");
    for (int i = 0 ; i <s ; i ++){
        printf("%d, ",arr[i]);
    }
    printf("]\n");

    for (int i = 0; i< s ; i++ ){

        found = 0;
        for (int k = 0; k < x; k++){
            if (arr[i] == map[k][0]){
                found = 1;
                break;
            }
        }
        
        if (found == 0){
            map[x][0] = arr[i];
            int first = 1;
            
            for (int j = 0; j< s ; j++ ){

                if (arr[i] == arr[j]){
                    if (first) {
                        map[x][j+1] = 2;
                        first = 0;
                        continue;
                    }
                    map[x][j+1] = 1;
                }
            }
            
            x++;

        }


    }

    for(int i = 0;i < x; i++){
        int sum = 0;
        for (int j = 0; j< s ; j++ ){
            sum = sum + map[i][j+1];
        }
        if (sum != 2){
            printf("\nDuplicated value found -> %d , removed duplicates at index positons -> ",map[i][0]);
            for (int k=0 ; k<s; k++){
                if (map[i][k+1] == 1){
                    arr[k] = 0;
                    printf("%d, ",k);
                }
            }
        }
    }

    printf("\n\nArray After -> [");
    for (int i = 0 ; i <s ; i ++){
        printf("%d, ",arr[i]);
    }
    printf("]\n");



    return 0;
}

```

<!-- qrun:field-end code id="q-00-12" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-12" -->



<!-- qrun:field-end freshness id="q-00-12" -->

<!-- qrun:field-start output id="q-00-12" -->

```text
$ gcc q-00-12.c -o ./bin/q-00-12.out && ./bin/q-00-12.out
Enter the element 1 -> 1
Enter the element 2 -> 1
Enter the element 3 -> 1
Enter the element 4 -> 1
Enter the element 5 -> 2
Enter the element 6 -> 2
Enter the element 7 -> 2
Enter the element 8 -> 4
Enter the element 9 -> 4
Enter the element 10 -> 5

Array After -> [1, 1, 1, 1, 2, 2, 2, 4, 4, 5, ]

Duplicated value found -> 1 , removed duplicates at index positons -> 1, 2, 3, 
Duplicated value found -> 2 , removed duplicates at index positons -> 5, 6, 
Duplicated value found -> 4 , removed duplicates at index positons -> 8, 

Array After -> [1, 0, 0, 0, 2, 0, 0, 4, 0, 5, ]
```

<!-- qrun:field-end output id="q-00-12" -->
<!-- qrun:entry-end id="q-00-12" -->


<!-- qrun:entry-start id="q-00-13" -->

<!-- qrun:field-start question id="q-00-13" -->

## Q 13 : Enter an array from the user and count the duplicate values.

<!-- qrun:field-end question id="q-00-13" -->

### CODE

<!-- qrun:field-start code id="q-00-13" -->

```c
// Single-Dimensional Arrays -> Q 13 : Enter an array from the user and count the duplicate values.


#include <stdio.h>

int main(){

    int arr[10],map[10][11] = {0},found,x=0;
    int s = sizeof(arr)/sizeof(arr[0]);
    int count = 0;



    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nArray Before -> [");
    for (int i = 0 ; i <s ; i ++){
        printf("%d, ",arr[i]);
    }
    printf("]\n");

    for (int i = 0; i< s ; i++ ){

        found = 0;
        for (int k = 0; k < x; k++){
            if (arr[i] == map[k][0]){
                found = 1;
                break;
            }
        }
        
        if (found == 0){
            map[x][0] = arr[i];
            int first = 1;
            
            for (int j = 0; j< s ; j++ ){

                if (arr[i] == arr[j]){
                    if (first) {
                        map[x][j+1] = 2;
                        first = 0;
                        continue;
                    }
                    map[x][j+1] = 1;
                }
            }
            
            x++;

        }


    }

    for(int i = 0;i < x; i++){
        int sum = 0;
        for (int j = 0; j< s ; j++ ){
            sum = sum + map[i][j+1];
        }
        if (sum != 2){
            count++;
        }
    }


    printf("No of duplicated eleemts  is %d ",count);


    return 0;
}

```

<!-- qrun:field-end code id="q-00-13" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-13" -->



<!-- qrun:field-end freshness id="q-00-13" -->

<!-- qrun:field-start output id="q-00-13" -->

```text
$ gcc q-00-13.c -o ./bin/q-00-13.out && ./bin/q-00-13.out
Enter the element 1 -> 1
Enter the element 2 -> 1
Enter the element 3 -> 1
Enter the element 4 -> 1
Enter the element 5 -> 2
Enter the element 6 -> 2
Enter the element 7 -> 2
Enter the element 8 -> 4
Enter the element 9 -> 4
Enter the element 10 -> 2

Array Before -> [1, 1, 1, 1, 2, 2, 2, 4, 4, 2, ]
No of duplicated eleemts  is 3 
```

<!-- qrun:field-end output id="q-00-13" -->
<!-- qrun:entry-end id="q-00-13" -->


<!-- qrun:entry-start id="q-00-14" -->

<!-- qrun:field-start question id="q-00-14" -->

## Q 14 : Enter an array from the user and print all possible combinations of its elements.

<!-- qrun:field-end question id="q-00-14" -->

### CODE

<!-- qrun:field-start code id="q-00-14" -->

```c
// Single-Dimensional Arrays -> Q 14 : Enter an array from the user and print all possible combinations of its elements.

#include <stdio.h>

void permute(int arr[], int start, int n) {
    if (start == n) {
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }

    for (int i = start; i < n; i++) {
        // swap 
        int temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;

        permute(arr, start + 1, n);

        // undo it 
        temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[4];
    int n =  sizeof(arr)/sizeof(arr[0]);

    for (int i = 0 ; i < n ; i++) {
        printf("Enter element %d ->  ", i+1);
        scanf("%d", &arr[i]);
    }

    permute(arr, 0, n);

    return 0;
}
```

<!-- qrun:field-end code id="q-00-14" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-14" -->



<!-- qrun:field-end freshness id="q-00-14" -->

<!-- qrun:field-start output id="q-00-14" -->

```text
$ gcc q-00-14.c -o ./bin/q-00-14.out && ./bin/q-00-14.out
Enter element 1 ->  1
Enter element 2 ->  2
Enter element 3 ->  3
Enter element 4 ->  0
1 2 3 0 
1 2 0 3 
1 3 2 0 
1 3 0 2 
1 0 3 2 
1 0 2 3 
2 1 3 0 
2 1 0 3 
2 3 1 0 
2 3 0 1 
2 0 3 1 
2 0 1 3 
3 2 1 0 
3 2 0 1 
3 1 2 0 
3 1 0 2 
3 0 1 2 
3 0 2 1 
0 2 3 1 
0 2 1 3 
0 3 2 1 
0 3 1 2 
0 1 3 2 
0 1 2 3 
```

<!-- qrun:field-end output id="q-00-14" -->
<!-- qrun:entry-end id="q-00-14" -->


<!-- qrun:entry-start id="q-00-15" -->

<!-- qrun:field-start question id="q-00-15" -->

## Q 15 : Enter an array from the user and print all palindrome numbers.

<!-- qrun:field-end question id="q-00-15" -->

### CODE

<!-- qrun:field-start code id="q-00-15" -->

```c
// Single-Dimensional Arrays -> Q 15 : Enter an array from the user and print all palindrome numbers.

#include <stdio.h>

int palindrome_check(int n){

    int a = n, rev = 0, d;

        while (n > 0) {
            d = n % 10;
            rev = rev* 10 + d;
            n = n/10;
        }

        return a == rev;
    }


int main(){

    int arr[5];
    int s = sizeof(arr)/sizeof(arr[0]);


    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nArray      -> [");
    for (int i = 0 ; i <s ; i ++){
        printf("%d,",arr[i]);
    }
    printf("]\n");

    printf("\nPlaindrome -> [");
    for (int i = 0 ; i <s ; i ++){
        if (palindrome_check(arr[i]) == 1){
        printf("%d,",arr[i]);
        continue;
        }
        printf(" NO  ,");
    }
    printf("]\n");


    return 0;
}
```

<!-- qrun:field-end code id="q-00-15" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-15" -->



<!-- qrun:field-end freshness id="q-00-15" -->

<!-- qrun:field-start output id="q-00-15" -->

```text
$ gcc q-00-15.c -o ./bin/q-00-15.out && ./bin/q-00-15.out
Enter the element 1 -> 12121
Enter the element 2 -> 50000
Enter the element 3 -> 33333
Enter the element 4 -> 55655
Enter the element 5 -> 23322

Array      -> [12121,50000,33333,55655,23322,]

Plaindrome -> [12121, NO  ,33333,55655, NO  ,]
```

<!-- qrun:field-end output id="q-00-15" -->
<!-- qrun:entry-end id="q-00-15" -->


<!-- qrun:entry-start id="q-00-16" -->

<!-- qrun:field-start question id="q-00-16" -->

## Q 16 : Enter two arrays from the user and check whether they are identical.

<!-- qrun:field-end question id="q-00-16" -->

### CODE

<!-- qrun:field-start code id="q-00-16" -->

```c
// Single-Dimensional Arrays -> Q 16 : Enter two arrays from the user and check whether they are identical.

#include <stdio.h>

int main(){

    int arr[5],arr2[5];
    int s1 = sizeof(arr)/sizeof(arr[0]);
    int s2 = sizeof(arr2)/sizeof(arr2[0]);


    printf("Enter for the Array 1 ->\n\n");
    for (int i = 0; i< s1 ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }


    printf("\nEnter for the Array 2 ->\n\n");
    for (int i = 0; i< s2 ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr2[i]);
    }

    printf("\nArray  1   -> [");
    for (int i = 0 ; i <s1 ; i ++){
        printf("%d,",arr[i]);
    }
    printf("]\n");

    printf("\nArray  2   -> [");
    for (int i = 0 ; i <s2 ; i ++){
        printf("%d,",arr2[i]);
    }
    printf("]\n");

    int same = 1;
    for (int i = 0 ; i < s1 ; i++){
        if (arr[i] != arr2[i]){
            same = 0;
            break;
        }
    }

    if (same){
        printf("\nArray 1 and 2 have identical elements \n");
        return 0;
    }
    
    printf("\nArray 1 and 2 Dont have identical elements \n");
    return 0;

}
```

<!-- qrun:field-end code id="q-00-16" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-16" -->



<!-- qrun:field-end freshness id="q-00-16" -->

<!-- qrun:field-start output id="q-00-16" -->

```text
$ gcc q-00-16.c -o ./bin/q-00-16.out && ./bin/q-00-16.out
Enter for the Array 1 ->

Enter the element 1 -> 12
Enter the element 2 -> 223
Enter the element 3 -> 43
Enter the element 4 -> 64
Enter the element 5 -> 7

Enter for the Array 2 ->

Enter the element 1 -> 12
Enter the element 2 -> 223
Enter the element 3 -> 43
Enter the element 4 -> 64
Enter the element 5 -> 7

Array  1   -> [12,223,43,64,7,]

Array  2   -> [12,223,43,64,7,]

Array 1 and 2 have identical elements 
```

<!-- qrun:field-end output id="q-00-16" -->
<!-- qrun:entry-end id="q-00-16" -->


<!-- qrun:entry-start id="q-00-17" -->

<!-- qrun:field-start question id="q-00-17" -->

## Q 17 : Merge two sorted arrays into a single sorted array.

<!-- qrun:field-end question id="q-00-17" -->

### CODE

<!-- qrun:field-start code id="q-00-17" -->

```c
// Single-Dimensional Arrays -> Q 17 : Merge two sorted arrays into a single sorted array.

#include <stdio.h>
#define SIZE 7

void mergearr(int arr[], int u, int l)
{
    int mid = (u + l + 1) / 2;
    int newarr[u - l + 1];
    int k = 0;
    int j = mid;

    for (int i = l; i < mid; i++){
        while (j <= u){
            if (arr[i] > arr[j]){
                newarr[k] = arr[j];
                k++;
                j++;
            }
            else{
                newarr[k] = arr[i];
                k++;
                break;
            }
        }

        if (j > u){
            i++;
            while (i < mid){
                newarr[k] = arr[i];
                k++;
                i++;
            }
            break;
        }
    }

    while (j <= u){
        newarr[k] = arr[j];
        k++;
        j++;
    }

    for (int i = 0; i < u - l + 1; i++){
        arr[l + i] = newarr[i];
    }
}


void mergesort(int arr[], int l, int u){
    if (l >= u){
        return;
    }

    int mid = (l + u) / 2;

    mergesort(arr, l, mid);
    mergesort(arr, mid + 1, u);

    mergearr(arr, u, l);
}


int main(){

    int arr[SIZE],arr2[SIZE], arr3[2 * SIZE];
    int s1 = sizeof(arr)/sizeof(arr[0]);
    int s2 = sizeof(arr2)/sizeof(arr2[0]);
    int s3 = sizeof(arr3)/sizeof(arr3[0]);


    printf("Enter for the Array 1 ->\n\n");
    for (int i = 0; i< s1 ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }


    printf("\nEnter for the Array 2 ->\n\n");
    for (int i = 0; i< s2 ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr2[i]);
    }

    printf("\nArray  1   -> [");
    for (int i = 0 ; i <s1 ; i ++){
        printf("%d,",arr[i]);
    }
    printf("]\n");

    printf("\nArray  2   -> [");
    for (int i = 0 ; i <s2 ; i ++){
        printf("%d,",arr2[i]);
    }
    printf("]\n");

    for (int i = 0 ; i <s3 ; i++){
        if (i <s1){
            arr3[i] = arr[i];
            continue;
        }
        
        arr3[i] = arr2[i-s2];

    }

    mergesort(arr3,0,s3-1);

    printf("\nSorted Array -> [");
    for (int i = 0 ; i <s3 ; i ++){
        printf("%d,",arr3[i]);
    }
    printf("]\n");

    return 0;

}
```

<!-- qrun:field-end code id="q-00-17" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-17" -->



<!-- qrun:field-end freshness id="q-00-17" -->

<!-- qrun:field-start output id="q-00-17" -->

```text
$ gcc q-00-17.c -o ./bin/q-00-17.out && ./bin/q-00-17.out
Enter for the Array 1 ->

Enter the element 1 -> 1
Enter the element 2 -> 3
Enter the element 3 -> 5
Enter the element 4 -> 7
Enter the element 5 -> 9
Enter the element 6 -> 11
Enter the element 7 -> 13

Enter for the Array 2 ->

Enter the element 1 -> 2
Enter the element 2 -> 4
Enter the element 3 -> 6
Enter the element 4 -> 8
Enter the element 5 -> 10
Enter the element 6 -> 12
Enter the element 7 -> 14

Array  1   -> [1,3,5,7,9,11,13,]

Array  2   -> [2,4,6,8,10,12,14,]

Sorted Array -> [1,2,3,4,5,6,7,8,9,10,11,12,13,14,]
```

<!-- qrun:field-end output id="q-00-17" -->
<!-- qrun:entry-end id="q-00-17" -->


<!-- qrun:entry-start id="q-00-18" -->

<!-- qrun:field-start question id="q-00-18" -->

## Q 18 : Find the local minima in an array.

<!-- qrun:field-end question id="q-00-18" -->

### CODE

<!-- qrun:field-start code id="q-00-18" -->

```c
// Single-Dimensional Arrays -> Q 18 : Find the local minima in an array.

#include <stdio.h>
int main(){

    int arr[5];
    int s = sizeof(arr)/sizeof(arr[0]);


    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nArray      -> [");
    for (int i = 0 ; i <s ; i ++){
        printf("%d,",arr[i]);
    }
    printf("]\n");

    for (int i = 1 ; i <s-1 ; i++){
        if (arr[i] < arr[i-1] && arr[i] < arr[i+1]){
            printf("%d is local minima",arr[i]);
        }
    }

    return 0;
}
```

<!-- qrun:field-end code id="q-00-18" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-18" -->



<!-- qrun:field-end freshness id="q-00-18" -->

<!-- qrun:field-start output id="q-00-18" -->

```text
$ gcc q-00-18.c -o ./bin/q-00-18.out && ./bin/q-00-18.out
Enter the element 1 -> ^C
```

<!-- qrun:field-end output id="q-00-18" -->
<!-- qrun:entry-end id="q-00-18" -->


<!-- qrun:entry-start id="q-00-19" -->

<!-- qrun:field-start question id="q-00-19" -->

## Q 19 : Find the local maxima in an array.

<!-- qrun:field-end question id="q-00-19" -->

### CODE

<!-- qrun:field-start code id="q-00-19" -->

```c
// Single-Dimensional Arrays -> Q 19 : Find the local maxima in an array.

#include <stdio.h>
int main(){

    int arr[5];
    int s = sizeof(arr)/sizeof(arr[0]);


    for (int i = 0; i< s ; i++ ){
        printf("Enter the element %d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nArray      -> [");
    for (int i = 0 ; i <s ; i ++){
        printf("%d,",arr[i]);
    }
    printf("]\n");

    for (int i = 1 ; i <s-1 ; i++){
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            printf("%d is local Maxima\n",arr[i]);
        }
    }

    return 0;
}
```

<!-- qrun:field-end code id="q-00-19" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-19" -->



<!-- qrun:field-end freshness id="q-00-19" -->

<!-- qrun:field-start output id="q-00-19" -->

```text
$ gcc q-00-19.c -o ./bin/q-00-19.out && ./bin/q-00-19.out
Enter the element 1 -> 13
Enter the element 2 -> 324
Enter the element 3 -> 42
Enter the element 4 -> 3232
Enter the element 5 -> 1

Array      -> [13,324,42,3232,1,]
324 is local Maxima
3232 is local Maxima
```

<!-- qrun:field-end output id="q-00-19" -->
<!-- qrun:entry-end id="q-00-19" -->


<!-- qrun:entry-start id="q-00-20" -->

<!-- qrun:field-start question id="q-00-20" -->

## Q 20 : **Trapping Rain Water Problem:** Given an array of non-negative integers representing an elevation map, where each bar has a width of 1, calculate how much water it can trap after raining.

<!-- qrun:field-end question id="q-00-20" -->

### CODE

<!-- qrun:field-start code id="q-00-20" -->

```c
// Single-Dimensional Arrays -> Q 20 : **Trapping Rain Water Problem:** Given an array of non-negative integers representing an elevation map, where each bar has a width of 1, calculate how much water it can trap after raining.

#include <stdio.h>

int main(){

    int arr[10] = {10,3,5,32,3,3,4,53,42,9} ;
    int s = sizeof(arr)/sizeof(arr[0]);
    int volume = 0 ;

    printf("\nArray      -> [");
    for (int i = 0 ; i <s ; i ++){
        printf("%d,",arr[i]);
    }
    printf("]\n");



    /*
        FORMULA:

        water[i] = min(lmax, rmax) - arr[i]

        lmax = Maximum height from index 0 to i.
        rmax = Maximum height from index i to s-1.
        arr[i] = Height of the current bar.

        We use the smaller maximum because water spills
        over the shorter boundary.

        Total water = Sum of water[i] for all indices.
    */


    for (int i = 0; i < s; i++) {
        int lmax = arr[0];
        int rmax = arr[s - 1];

        // maximum on the left
        for (int j = 0; j <= i; j++) {
            if (arr[j] > lmax) {
                lmax = arr[j];
            }
        }

        // maximum  on the right
        for (int j = i; j < s; j++) {
            if (arr[j] > rmax) {
                rmax = arr[j];
            }
        }

        // Water level = minimum of left and right 
        int water_level = (lmax < rmax) ? lmax : rmax;

        // Water trapped above the current bar
        int water = water_level - arr[i];
        volume += water;

        printf("Index %d | Height: %d | Lmax: %d | Rmax: %d | Water: %d\n",i, arr[i], lmax, rmax, water);
    }

    printf("\nTotal trapped water -> %d \n", volume);

    return 0;
}
```

<!-- qrun:field-end code id="q-00-20" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-00-20" -->



<!-- qrun:field-end freshness id="q-00-20" -->

<!-- qrun:field-start output id="q-00-20" -->

```text
$ gcc q-00-20.c -o ./bin/q-00-20.out && ./bin/q-00-20.out

Array      -> [10,3,5,32,3,3,4,53,42,9,]
Index 0 | Height: 10 | Lmax: 10 | Rmax: 53 | Water: 0
Index 1 | Height: 3 | Lmax: 10 | Rmax: 53 | Water: 7
Index 2 | Height: 5 | Lmax: 10 | Rmax: 53 | Water: 5
Index 3 | Height: 32 | Lmax: 32 | Rmax: 53 | Water: 0
Index 4 | Height: 3 | Lmax: 32 | Rmax: 53 | Water: 29
Index 5 | Height: 3 | Lmax: 32 | Rmax: 53 | Water: 29
Index 6 | Height: 4 | Lmax: 32 | Rmax: 53 | Water: 28
Index 7 | Height: 53 | Lmax: 53 | Rmax: 53 | Water: 0
Index 8 | Height: 42 | Lmax: 53 | Rmax: 42 | Water: 0
Index 9 | Height: 9 | Lmax: 53 | Rmax: 9 | Water: 0

Total trapped water -> 98 
```

<!-- qrun:field-end output id="q-00-20" -->
<!-- qrun:entry-end id="q-00-20" -->

<!-- qrun:topic-end id="topic-00" -->

<!-- qrun:topic-start id="topic-03" -->

<!-- qrun:field-start topic id="topic-03" -->

# Multi-Dimensional Arrays

<!-- qrun:field-end topic id="topic-03" -->

<!-- qrun:entry-start id="q-03-01" -->

<!-- qrun:field-start question id="q-03-01" -->

## Q 01 : Enter a matrix of 4 rows and 2 columns from the user and display it in matrix format.

<!-- qrun:field-end question id="q-03-01" -->

### CODE

<!-- qrun:field-start code id="q-03-01" -->

```c
// Multi-Dimensional Arrays -> Q 01 : Enter a matrix of 4 rows and 2 columns from the user and display it in matrix format.

#include <stdio.h>

int main(){

    int matrix[4][2] = {0};

    for (int i = 0; i < 4 ; i++){
        for (int j = 0; j < 2 ; j++){
            printf("Enter the element (row : %d, col : %d) -> ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("+--------+--------+\n");
    for (int i = 0; i < 4 ; i++){
        printf("|                  |\n|");
        for (int j = 0; j < 2 ; j++){
            printf("  %3d   |",matrix[i][j]);
        }
        printf("\n|                  |\n");
        printf("+--------+--------+\n");
            
    }
    

    return 0;
}
```

<!-- qrun:field-end code id="q-03-01" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-03-01" -->



<!-- qrun:field-end freshness id="q-03-01" -->

<!-- qrun:field-start output id="q-03-01" -->

```text
$ gcc q-03-01.c -o ./bin/q-03-01.out && ./bin/q-03-01.out
Enter the element (row : 0, col : 0) -> 1
Enter the element (row : 0, col : 1) -> 2
Enter the element (row : 1, col : 0) -> 3
Enter the element (row : 1, col : 1) -> 4
Enter the element (row : 2, col : 0) -> 5
Enter the element (row : 2, col : 1) -> 6
Enter the element (row : 3, col : 0) -> 3
Enter the element (row : 3, col : 1) -> 23
+--------+--------+
|                  |
|    1   |    2   |
|                  |
+--------+--------+
|                  |
|    3   |    4   |
|                  |
+--------+--------+
|                  |
|    5   |    6   |
|                  |
+--------+--------+
|                  |
|    3   |   23   |
|                  |
+--------+--------+
```

<!-- qrun:field-end output id="q-03-01" -->
<!-- qrun:entry-end id="q-03-01" -->


<!-- qrun:entry-start id="q-03-02" -->

<!-- qrun:field-start question id="q-03-02" -->

## Q 02 : Enter two matrices from the user, add them, and display the result.

<!-- qrun:field-end question id="q-03-02" -->

### CODE

<!-- qrun:field-start code id="q-03-02" -->

```c
// Multi-Dimensional Arrays -> Q 02 : Enter two matrices from the user, add them, and display the result.

#include <stdio.h>
#define MATSIZE 3

int main(){

    int matrix1[MATSIZE][MATSIZE] = {0};
    int matrix2[MATSIZE][MATSIZE] = {0};
    int mat_sum[MATSIZE][MATSIZE] = {0};

    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            printf("For Matrix 1, Enter the element (row : %d, col : %d) -> ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            printf("For Matrix 2, Enter the element (row : %d, col : %d) -> ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            mat_sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("+---------+---------+---------+\n");
    for (int i = 0; i < MATSIZE ; i++){
        printf("|         |         |         |\n|");
        for (int j = 0; j < MATSIZE ; j++){
            printf("   %3d   |",mat_sum[i][j]);
            
        }
        printf("\n|         |         |         |\n");
        printf("+---------+---------+---------+\n");
    }

    return 0;
}
```

<!-- qrun:field-end code id="q-03-02" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-03-02" -->



<!-- qrun:field-end freshness id="q-03-02" -->

<!-- qrun:field-start output id="q-03-02" -->

```text
$ gcc q-03-02.c -o ./bin/q-03-02.out && ./bin/q-03-02.out
For Matrix 1, Enter the element (row : 0, col : 0) -> 1
For Matrix 1, Enter the element (row : 0, col : 1) -> 2
For Matrix 1, Enter the element (row : 0, col : 2) -> 3
For Matrix 1, Enter the element (row : 1, col : 0) -> 4
For Matrix 1, Enter the element (row : 1, col : 1) -> 5
For Matrix 1, Enter the element (row : 1, col : 2) -> 6
For Matrix 1, Enter the element (row : 2, col : 0) -> 7
For Matrix 1, Enter the element (row : 2, col : 1) -> 8
For Matrix 1, Enter the element (row : 2, col : 2) -> 9
For Matrix 2, Enter the element (row : 0, col : 0) -> 9
For Matrix 2, Enter the element (row : 0, col : 1) -> 8
For Matrix 2, Enter the element (row : 0, col : 2) -> 7
For Matrix 2, Enter the element (row : 1, col : 0) -> 6
For Matrix 2, Enter the element (row : 1, col : 1) -> 5
For Matrix 2, Enter the element (row : 1, col : 2) -> 4
For Matrix 2, Enter the element (row : 2, col : 0) -> 3
For Matrix 2, Enter the element (row : 2, col : 1) -> 2
For Matrix 2, Enter the element (row : 2, col : 2) -> 1
+---------+---------+---------+
|         |         |         |
|    10   |    10   |    10   |
|         |         |         |
+---------+---------+---------+
|         |         |         |
|    10   |    10   |    10   |
|         |         |         |
+---------+---------+---------+
|         |         |         |
|    10   |    10   |    10   |
|         |         |         |
+---------+---------+---------+
```

<!-- qrun:field-end output id="q-03-02" -->
<!-- qrun:entry-end id="q-03-02" -->


<!-- qrun:entry-start id="q-03-03" -->

<!-- qrun:field-start question id="q-03-03" -->

## Q 03 : Enter two matrices from the user, subtract them, and display the result.

<!-- qrun:field-end question id="q-03-03" -->

### CODE

<!-- qrun:field-start code id="q-03-03" -->

```c
// Multi-Dimensional Arrays -> Q 03 : Enter two matrices from the user, subtract them, and display the result.

#include <stdio.h>
#define MATSIZE 3

int main(){

    int matrix1[MATSIZE][MATSIZE] = {0};
    int matrix2[MATSIZE][MATSIZE] = {0};
    int mat_sub[MATSIZE][MATSIZE] = {0};

    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            printf("For Matrix 1, Enter the element (row : %d, col : %d) -> ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            printf("For Matrix 2, Enter the element (row : %d, col : %d) -> ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            mat_sub[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("+-------+-Subtraction-+-------+\n");
    printf("+---------+---------+---------+\n");
    for (int i = 0; i < MATSIZE ; i++){
        printf("|         |         |         |\n|");
        for (int j = 0; j < MATSIZE ; j++){
            printf("   %3d   |",mat_sub[i][j]);
            
        }
        printf("\n|         |         |         |\n");
        printf("+---------+---------+---------+\n");
    }

    return 0;
}
```

<!-- qrun:field-end code id="q-03-03" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-03-03" -->



<!-- qrun:field-end freshness id="q-03-03" -->

<!-- qrun:field-start output id="q-03-03" -->

```text
$ gcc q-03-03.c -o ./bin/q-03-03.out && ./bin/q-03-03.out
For Matrix 1, Enter the element (row : 0, col : 0) -> 1
For Matrix 1, Enter the element (row : 0, col : 1) -> 23
For Matrix 1, Enter the element (row : 0, col : 2) -> 4
For Matrix 1, Enter the element (row : 1, col : 0) -> 26
For Matrix 1, Enter the element (row : 1, col : 1) -> 75
For Matrix 1, Enter the element (row : 1, col : 2) -> 24
For Matrix 1, Enter the element (row : 2, col : 0) -> 5
For Matrix 1, Enter the element (row : 2, col : 1) -> 32
For Matrix 1, Enter the element (row : 2, col : 2) -> 
2
For Matrix 2, Enter the element (row : 0, col : 0) -> 456
For Matrix 2, Enter the element (row : 0, col : 1) -> 4
For Matrix 2, Enter the element (row : 0, col : 2) -> 32
For Matrix 2, Enter the element (row : 1, col : 0) -> 3
For Matrix 2, Enter the element (row : 1, col : 1) -> 46
For Matrix 2, Enter the element (row : 1, col : 2) -> 89
For Matrix 2, Enter the element (row : 2, col : 0) -> 85
For Matrix 2, Enter the element (row : 2, col : 1) -> 9
For Matrix 2, Enter the element (row : 2, col : 2) -> 54
+-------+-Subtraction-+-------+
+---------+---------+---------+
|         |         |         |
|   -455   |    19   |   -28   |
|         |         |         |
+---------+---------+---------+
|         |         |         |
|    23   |    29   |   -65   |
|         |         |         |
+---------+---------+---------+
|         |         |         |
|   -80   |    23   |   -52   |
|         |         |         |
+---------+---------+---------+
```

<!-- qrun:field-end output id="q-03-03" -->
<!-- qrun:entry-end id="q-03-03" -->


<!-- qrun:entry-start id="q-03-04" -->

<!-- qrun:field-start question id="q-03-04" -->

## Q 04 : Enter two matrices from the user, multiply them, and display the result.

<!-- qrun:field-end question id="q-03-04" -->

### CODE

<!-- qrun:field-start code id="q-03-04" -->

```c
// Multi-Dimensional Arrays -> Q 04 : Enter two matrices from the user, multiply them, and display the result.

#include <stdio.h>
#define MATSIZE 3

int main(){

    int matrix1[MATSIZE][MATSIZE] = {0};
    int matrix2[MATSIZE][MATSIZE] = {0};
    int mat_mul[MATSIZE][MATSIZE] = {0};

    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            printf("For Matrix 1, Enter the element (row : %d, col : %d) -> ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            printf("For Matrix 2, Enter the element (row : %d, col : %d) -> ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            int sum = 0;
            for (int k = 0; k < MATSIZE; k++) {
                        sum += matrix1[i][k] * matrix2[k][j];
                    }

                    mat_mul[i][j] = sum;

        }
    }

    printf("\n+--------+-Multiiply-+--------+\n");
    printf("+---------+---------+---------+\n");
    for (int i = 0; i < MATSIZE ; i++){
        printf("|         |         |         |\n|");
        for (int j = 0; j < MATSIZE ; j++){
            printf("   %3d   |",mat_mul[i][j]);
            
        }
        printf("\n|         |         |         |\n");
        printf("+---------+---------+---------+\n");
    }

    return 0;
}
```

<!-- qrun:field-end code id="q-03-04" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-03-04" -->



<!-- qrun:field-end freshness id="q-03-04" -->

<!-- qrun:field-start output id="q-03-04" -->

```text
$ gcc q-03-04.c -o ./bin/q-03-04.out && ./bin/q-03-04.out
For Matrix 1, Enter the element (row : 0, col : 0) -> 1
For Matrix 1, Enter the element (row : 0, col : 1) -> 2
For Matrix 1, Enter the element (row : 0, col : 2) -> 3
For Matrix 1, Enter the element (row : 1, col : 0) -> 1
For Matrix 1, Enter the element (row : 1, col : 1) -> 
2
For Matrix 1, Enter the element (row : 1, col : 2) -> 2
For Matrix 1, Enter the element (row : 2, col : 0) -> 2
For Matrix 1, Enter the element (row : 2, col : 1) -> 1
For Matrix 1, Enter the element (row : 2, col : 2) -> 2
For Matrix 2, Enter the element (row : 0, col : 0) -> 3
For Matrix 2, Enter the element (row : 0, col : 1) -> 1
For Matrix 2, Enter the element (row : 0, col : 2) -> 3
For Matrix 2, Enter the element (row : 1, col : 0) -> 2
For Matrix 2, Enter the element (row : 1, col : 1) -> 2
For Matrix 2, Enter the element (row : 1, col : 2) -> 3
For Matrix 2, Enter the element (row : 2, col : 0) -> 1
For Matrix 2, Enter the element (row : 2, col : 1) -> 3
For Matrix 2, Enter the element (row : 2, col : 2) -> 2

+--------+-Multiiply-+--------+
+---------+---------+---------+
|         |         |         |
|    10   |    14   |    15   |
|         |         |         |
+---------+---------+---------+
|         |         |         |
|     9   |    11   |    13   |
|         |         |         |
+---------+---------+---------+
|         |         |         |
|    10   |    10   |    13   |
|         |         |         |
+---------+---------+---------+
```

<!-- qrun:field-end output id="q-03-04" -->
<!-- qrun:entry-end id="q-03-04" -->


<!-- qrun:entry-start id="q-03-05" -->

<!-- qrun:field-start question id="q-03-05" -->

## Q 05 : Enter a matrix from the user and copy it into another matrix of the same size.

<!-- qrun:field-end question id="q-03-05" -->

### CODE

<!-- qrun:field-start code id="q-03-05" -->

```c
// Multi-Dimensional Arrays -> Q 05 : Enter a matrix from the user and copy it into another matrix of the same size.

#include <stdio.h>
#define MATSIZE 3

int main(){

    int matrix1[MATSIZE][MATSIZE] = {0};
    int copied[MATSIZE][MATSIZE] = {0};

    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            printf("For Matrix 1, Enter the element (row : %d, col : %d) -> ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            copied[i][j] = matrix1[i][j];
        }
    }

    printf("\n+--------+-CopiedMat-+--------+\n");
    printf("+---------+---------+---------+\n");
    for (int i = 0; i < MATSIZE ; i++){
        printf("|         |         |         |\n|");
        for (int j = 0; j < MATSIZE ; j++){
            printf("   %3d   |",copied[i][j]);
            
        }
        printf("\n|         |         |         |\n");
        printf("+---------+---------+---------+\n");
    }

    return 0;
}
```

<!-- qrun:field-end code id="q-03-05" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-03-05" -->



<!-- qrun:field-end freshness id="q-03-05" -->

<!-- qrun:field-start output id="q-03-05" -->

```text
$ gcc q-03-05.c -o ./bin/q-03-05.out && ./bin/q-03-05.out
For Matrix 1, Enter the element (row : 0, col : 0) -> 1
For Matrix 1, Enter the element (row : 0, col : 1) -> 2
For Matrix 1, Enter the element (row : 0, col : 2) -> 2
For Matrix 1, Enter the element (row : 1, col : 0) -> 3
For Matrix 1, Enter the element (row : 1, col : 1) -> 2
For Matrix 1, Enter the element (row : 1, col : 2) -> 2
For Matrix 1, Enter the element (row : 2, col : 0) -> 2
For Matrix 1, Enter the element (row : 2, col : 1) -> 45
For Matrix 1, Enter the element (row : 2, col : 2) -> 5

+--------+-CopiedMat-+--------+
+---------+---------+---------+
|         |         |         |
|     1   |     2   |     2   |
|         |         |         |
+---------+---------+---------+
|         |         |         |
|     3   |     2   |     2   |
|         |         |         |
+---------+---------+---------+
|         |         |         |
|     2   |    45   |     5   |
|         |         |         |
+---------+---------+---------+
```

<!-- qrun:field-end output id="q-03-05" -->
<!-- qrun:entry-end id="q-03-05" -->


<!-- qrun:entry-start id="q-03-06" -->

<!-- qrun:field-start question id="q-03-06" -->

## Q 06 : Enter a matrix from the user, multiply it by a scalar value, and display the result.

<!-- qrun:field-end question id="q-03-06" -->

### CODE

<!-- qrun:field-start code id="q-03-06" -->

```c
// Multi-Dimensional Arrays -> Q 06 : Enter a matrix from the user, multiply it by a scalar value, and display the result.

#include <stdio.h>
#define MATSIZE 3

int main(){

    int matrix1[MATSIZE][MATSIZE] = {0};
    int scalar;


    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            printf("For Matrix , Enter the element (row : %d, col : %d) -> ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    
    printf("Enter The scalar -> ");
    scanf("%d",&scalar);

    for (int i = 0; i < MATSIZE ; i++){
        for (int j = 0; j < MATSIZE ; j++){
            matrix1[i][j] = matrix1[i][j] * scalar;
        }
    }

    printf("\n+--------+-ScalarMUL-+--------+\n");
    printf("+---------+---------+---------+\n");
    for (int i = 0; i < MATSIZE ; i++){
        printf("|         |         |         |\n|");
        for (int j = 0; j < MATSIZE ; j++){
            printf("   %3d   |",matrix1[i][j]);
            
        }
        printf("\n|         |         |         |\n");
        printf("+---------+---------+---------+\n");
    }

    return 0;
}
```

<!-- qrun:field-end code id="q-03-06" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-03-06" -->



<!-- qrun:field-end freshness id="q-03-06" -->

<!-- qrun:field-start output id="q-03-06" -->

```text
$ gcc q-03-06.c -o ./bin/q-03-06.out && ./bin/q-03-06.out
For Matrix , Enter the element (row : 0, col : 0) -> 1
For Matrix , Enter the element (row : 0, col : 1) -> 2
For Matrix , Enter the element (row : 0, col : 2) -> 1
For Matrix , Enter the element (row : 1, col : 0) -> 2
For Matrix , Enter the element (row : 1, col : 1) -> 1
For Matrix , Enter the element (row : 1, col : 2) -> 2
For Matrix , Enter the element (row : 2, col : 0) -> 1
For Matrix , Enter the element (row : 2, col : 1) -> 2
For Matrix , Enter the element (row : 2, col : 2) -> 1
Enter The scalar -> 5

+--------+-ScalarMUL-+--------+
+---------+---------+---------+
|         |         |         |
|     5   |    10   |     5   |
|         |         |         |
+---------+---------+---------+
|         |         |         |
|    10   |     5   |    10   |
|         |         |         |
+---------+---------+---------+
|         |         |         |
|     5   |    10   |     5   |
|         |         |         |
+---------+---------+---------+
```

<!-- qrun:field-end output id="q-03-06" -->
<!-- qrun:entry-end id="q-03-06" -->


<!-- qrun:entry-start id="q-03-07" -->

<!-- qrun:field-start question id="q-03-07" -->

## Q 07 : Create a Tic-Tac-Toe game using 2D arrays.

<!-- qrun:field-end question id="q-03-07" -->

### CODE

<!-- qrun:field-start code id="q-03-07" -->

```c
// Multi-Dimensional Arrays -> Q 07 : Create a Tic-Tac-Toe game using 2D arrays.
#include <iostream>
#include <string>

    class tictactoe{


    private:

    char board[3][3] = { {' ',' ',' '} , {' ',' ',' '} , {' ',' ',' '} };
    int choice = 0;
    int state = 0;
    int o_count = 0 , x_count = 0 ;
    bool turn_o = true ;

    public:


    void display(){

    char turn = 'O';
    if (turn_o == true){
        turn = 'O';
    }
    else {
        turn = 'X';
    }

        
    std::cout << "\n\n--------------------------------------------------------------\n\n\n";
    
    std::cout << "-------------------------------\n";
    std::cout << "|         |         |         |\n";
    std::cout << "|    "<<board[0][0]<<"    |    "<<board[0][1]<<"    |    "<<board[0][2]<< "    |\n";
    std::cout << "|        1|        2|        3|\n";
    std::cout << "-------------------------------\n";
    std::cout << "|         |         |         |" << "             O : " << o_count << "\n";
    std::cout << "|    "<<board[1][0]<<"    |    "<<board[1][1]<<"    |    "<< board[1][2]<< "    |"<<"             X : " << x_count << "\n";;
    std::cout << "|        4|        5|        6|"<<"             "<< turn << "'s Turn\n";
    std::cout << "-------------------------------\n";
    std::cout << "|         |         |         |\n";
    std::cout << "|    "<<board[2][0]<<"    |    "<<board[2][1]<<"    |    "<< board[2][2]<< "    |\n";
    std::cout << "|        7|        8|        9|\n";
    std::cout << "-------------------------------\n";
    
    std::cout << "\n\n--------------------------------------------------------------\n\n\n";
    
    };

    void enter(char player){

            do {
            std::cout << "\n-> Enter the Choice of Player "<<player<<" :";
            std::cin >> choice;

            if (std::cin.fail() || !(choice > 0 && choice <= 9)){
                std::cin.clear();
                std::cin.ignore(1000 , '\n');
                std::cout << "  -> Enter a Valid Position ! \n";
                continue;
            }

            break;

            }while(true);

        }

    int set_choice(int position , char player){

        switch (position){

            case 1:
            {
                board[0][0] = player;
                break;
            };

            case 2:
            {
                board[0][1] = player;
                break;
            };

            case 3:
            {
                board[0][2] = player;
                break;
            };

            case 4:
            {
                board[1][0] = player;
                break;
            };

            case 5:
            {
                board[1][1] = player;
                break;
            };

            case 6:
            {
                board[1][2] = player;
                break;
            };

            case 7:
            {
                board[2][0] = player;
                break;
            };

            case 8:
            {
                board[2][1] = player;
                break;
            };

            case 9:
            {
                board[2][2] = player;
                break;
            };

            default:
            return  0;

        }

        return 1;

    }
    

    bool check_available(int position){

    bool a = false;
    switch (position){

            case 1:
            {
                if (board[0][0] == ' ') 
                a = true;
                break;
            };

            case 2:
            {
                if (board[0][1] == ' ') 
                a = true;
                break;
            };

            case 3:
            {
                if (board[0][2] == ' ') 
                a = true;
                break;
            };

            case 4:
            {
                if (board[1][0] == ' ') 
                a = true;
                break;
            };

            case 5:
            {
                if (board[1][1] == ' ') 
                a = true;
                break;
            };

            case 6:
            {
                if (board[1][2] == ' ') 
                a = true;
                break;
            };

            case 7:
            {
                if (board[2][0] == ' ') 
                a = true;
                break;
            };

            case 8:
            {
                if (board[2][1] == ' ') 
                a = true;
                break;
            };

            case 9:
            {
                if (board[2][2] == ' ') 
                a = true;
                break;
            };
        }

        return a;

    }


    // 00  01  02
    // 10  11  12
    // 20  21  22

    char check_win(){
        // if (state < 5) {
        //     return 0;
        // }

        char a = ' ';
        int o = 0 , x = 0;
        for (int i = 0 ; i < 3 ; i ++){
            if (board[i][0] == ' '){
                continue;
            }

            for (int j = 0 ; j < 3 ; j ++){
                if (board[i][j] == ' '){
                    continue;
                }
                else if (board[i][j] == 'O'){
                    o ++;
                }
                else if (board[i][j] == 'X'){
                    x ++;
                }
            }

            if (o == 3){
                return 'O';
            }
            else if (x == 3){
                return 'X';
            }
            o = 0 , x = 0;
        }

        
        o = 0 , x = 0;
        
        
        for (int i = 0 ; i < 3 ; i ++){
            if (board[0][i] == ' '){
                continue;
            }
            for (int j = 0 ; j < 3 ; j ++){
                if (board[j][i] == ' '){
                    continue;
                }
                else if (board[j][i] == 'O'){
                    o ++;
                }
                else if (board[j][i] == 'X'){
                    x ++;
                }
            }
            if (o == 3){
                return 'O';
            }
            else if (x == 3){
                return 'X';
            }
            o = 0 , x = 0;
        }


        // o = 0 , x = 0;

        if ((board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O' ) || (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O' )){
            return 'O';
        }

        else if ((board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X' ) || (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X' ) ){
            return 'X';
        }

        return ' ';

    }

    int play(){

    char player = 'O' , win = ' ';
    
    
    do {

        if ((o_count + x_count) == 9 ){
            std::cout << "-> Game Draw ";
            return 1;
        }

        if (turn_o == true){
            player = 'O';
        }
        else {
            player = 'X';
        }
        
        // ________________

        if (state > 5){
            win = check_win();
            if (win == ' ');
            else {
                display();
                std::cout << "-> Player "<< win << " Won\n";
                break;
            }
        }
        
        // ________________

        display();

        // _______________

        do{

        enter(player); // -> choic set

        if (check_available(choice)){
            set_choice(choice,player);
            break;
        }
        else{
            std::cout<<"    -> Already Filled\n";
        }
        }while(true);

        // ___________

        if (turn_o == true){
            // player = 'O';
            o_count++;
        }
        else {
            // player = 'X';
            x_count++;
        }

        // ____________


        turn_o = !turn_o;
        state++;

    }while(true); 

    return 1;

    }




    };


    void play(){
    int choice;
    
    
    do {
        tictactoe a;
        std::cout<< "\n-> Menu : \n";
        std::cout<< "   -> 1 : Play \n";
        std::cout<< "   -> 0 : Exit \n\n";
        std::cout<< "-> Enter the Choice : ";
        std::cin >> choice;
        if (std::cin.fail()){
                    std::cin.clear();
                    std::cin.ignore(1000 , '\n');
                    std::cout << "  -> Enter a Valid Choice ! \n";
                    continue;
                }
        if (choice == 1){
            a.play();
        }
        else if (choice == 0){
            std::cout << "  -> Exiting \n";
            break;
        }
        else {
            std::cout << "  -> Enter a Valid Choice ! \n";
        }

    }while (true);
    }


int main(){

    play();
    
    return 0;
};
```

<!-- qrun:field-end code id="q-03-07" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-03-07" -->



<!-- qrun:field-end freshness id="q-03-07" -->

<!-- qrun:field-start output id="q-03-07" -->

```text
$ g++ -x c++ q-03-07.c -o ./bin/q-03-07.out && ./bin/q-03-07.out

-> Menu : 
   -> 1 : Play 
   -> 0 : Exit 

-> Enter the Choice : 1


--------------------------------------------------------------


-------------------------------
|         |         |         |
|         |         |         |
|        1|        2|        3|
-------------------------------
|         |         |         |             O : 0
|         |         |         |             X : 0
|        4|        5|        6|             O's Turn
-------------------------------
|         |         |         |
|         |         |         |
|        7|        8|        9|
-------------------------------


--------------------------------------------------------------



-> Enter the Choice of Player O :1


--------------------------------------------------------------


-------------------------------
|         |         |         |
|    O    |         |         |
|        1|        2|        3|
-------------------------------
|         |         |         |             O : 1
|         |         |         |             X : 0
|        4|        5|        6|             X's Turn
-------------------------------
|         |         |         |
|         |         |         |
|        7|        8|        9|
-------------------------------


--------------------------------------------------------------



-> Enter the Choice of Player X :3


--------------------------------------------------------------


-------------------------------
|         |         |         |
|    O    |         |    X    |
|        1|        2|        3|
-------------------------------
|         |         |         |             O : 1
|         |         |         |             X : 1
|        4|        5|        6|             O's Turn
-------------------------------
|         |         |         |
|         |         |         |
|        7|        8|        9|
-------------------------------


--------------------------------------------------------------



-> Enter the Choice of Player O :5


--------------------------------------------------------------


-------------------------------
|         |         |         |
|    O    |         |    X    |
|        1|        2|        3|
-------------------------------
|         |         |         |             O : 2
|         |    O    |         |             X : 1
|        4|        5|        6|             X's Turn
-------------------------------
|         |         |         |
|         |         |         |
|        7|        8|        9|
-------------------------------


--------------------------------------------------------------



-> Enter the Choice of Player X :9


--------------------------------------------------------------


-------------------------------
|         |         |         |
|    O    |         |    X    |
|        1|        2|        3|
-------------------------------
|         |         |         |             O : 2
|         |    O    |         |             X : 2
|        4|        5|        6|             O's Turn
-------------------------------
|         |         |         |
|         |         |    X    |
|        7|        8|        9|
-------------------------------


--------------------------------------------------------------



-> Enter the Choice of Player O :7


--------------------------------------------------------------


-------------------------------
|         |         |         |
|    O    |         |    X    |
|        1|        2|        3|
-------------------------------
|         |         |         |             O : 3
|         |    O    |         |             X : 2
|        4|        5|        6|             X's Turn
-------------------------------
|         |         |         |
|    O    |         |    X    |
|        7|        8|        9|
-------------------------------


--------------------------------------------------------------



-> Enter the Choice of Player X :6


--------------------------------------------------------------


-------------------------------
|         |         |         |
|    O    |         |    X    |
|        1|        2|        3|
-------------------------------
|         |         |         |             O : 3
|         |    O    |    X    |             X : 3
|        4|        5|        6|             O's Turn
-------------------------------
|         |         |         |
|    O    |         |    X    |
|        7|        8|        9|
-------------------------------


--------------------------------------------------------------


-> Player X Won

-> Menu : 
   -> 1 : Play 
   -> 0 : Exit 

-> Enter the Choice : 0
  -> Exiting 
```

<!-- qrun:field-end output id="q-03-07" -->
<!-- qrun:entry-end id="q-03-07" -->

<!-- qrun:topic-end id="topic-03" -->

<!-- qrun:topic-start id="topic-01" -->

<!-- qrun:field-start topic id="topic-01" -->

# Strings

<!-- qrun:field-end topic id="topic-01" -->

<!-- qrun:entry-start id="q-01-01" -->

<!-- qrun:field-start question id="q-01-01" -->

## Q 01 : Enter a string from the user and convert it to uppercase.

<!-- qrun:field-end question id="q-01-01" -->

### CODE

<!-- qrun:field-start code id="q-01-01" -->

```c
// Strings -> Q 01 : Enter a string from the user and convert it to uppercase.

#include <stdio.h>
// #include <conio.>

int main(){

    char str[10],ch;
    int s = sizeof(str)/sizeof(str[0]) , i;
    printf("Enter the string -> ") ;
    for(i = 0 ; i < s-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    for(i = 0; i < s-1 ; i++){
        if (str[i] >= 97 && str[i] <= 122 ){
            str[i] = str[i] -32;
        }
    }

    printf("The String you entered in UPPERCASE -> %s",str);
    
    return 0;
}
```

<!-- qrun:field-end code id="q-01-01" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-01" -->



<!-- qrun:field-end freshness id="q-01-01" -->

<!-- qrun:field-start output id="q-01-01" -->

```text
$ gcc q-01-01.c -o ./bin/q-01-01.out && ./bin/q-01-01.out
Enter the string -> hello ad
The String you entered in UPPERCASE -> HELLO AD
```

<!-- qrun:field-end output id="q-01-01" -->
<!-- qrun:entry-end id="q-01-01" -->


<!-- qrun:entry-start id="q-01-03" -->

<!-- qrun:field-start question id="q-01-03" -->

## Q 03 : Enter a string from the user and convert it into sentence case.

<!-- qrun:field-end question id="q-01-03" -->

### CODE

<!-- qrun:field-start code id="q-01-03" -->

```c
// Strings -> Q 03 : Enter a string from the user and convert it into sentence case.

#include <stdio.h>
// #include <conio.>

int main(){

    char str[100],ch;
    int s = sizeof(str)/sizeof(str[0]) , i;
    printf("Enter the string -> ") ;
    for(i = 0 ; i < s-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    int flag = 0;
    for(i = 0; i < s-1 ; i++){
        if (str[i] >= 97 && str[i] <= 122 ){
            if (flag == 0){
                str[i] = str[i] -32;
            flag = 1;}
        }
        else if(str[i] >= 65 && str[i] <= 90 ){
            if (flag == 0){
                flag = 1;
            }
            else{
            str[i] = str[i] + 32;}
        }
        else if (str[i] == ' ' && flag == 1){
            flag = 0;
        }
    }

    printf("The String you entered in Sentence case -> %s",str);
    
    return 0;
}
```

<!-- qrun:field-end code id="q-01-03" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-03" -->



<!-- qrun:field-end freshness id="q-01-03" -->

<!-- qrun:field-start output id="q-01-03" -->

```text
$ gcc q-01-03.c -o ./bin/q-01-03.out && ./bin/q-01-03.out
Enter the string -> hello MISTER toNY sTAnK
The String you entered in Sentence case -> Hello Mister Tony Stank
```

<!-- qrun:field-end output id="q-01-03" -->
<!-- qrun:entry-end id="q-01-03" -->


<!-- qrun:entry-start id="q-01-02" -->

<!-- qrun:field-start question id="q-01-02" -->

## Q 02 : Enter a string from the user and convert it to lowercase.

<!-- qrun:field-end question id="q-01-02" -->

### CODE

<!-- qrun:field-start code id="q-01-02" -->

```c
// Strings -> Q 02 : Enter a string from the user and convert it to lowercase.

#include <stdio.h>
// #include <conio.>

int main(){

    char str[10],ch;
    int s = sizeof(str)/sizeof(str[0]) , i;
    printf("Enter the string -> ") ;
    for(i = 0 ; i < s-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    for(i = 0; i < s-1 ; i++){
        if (str[i] >= 65 && str[i] <= 90 ){
            str[i] = str[i] + 32;
        }
    }

    printf("The String you entered in lowercase -> %s",str);
    
    return 0;
}
```

<!-- qrun:field-end code id="q-01-02" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-02" -->



<!-- qrun:field-end freshness id="q-01-02" -->

<!-- qrun:field-start output id="q-01-02" -->

```text
$ gcc q-01-02.c -o ./bin/q-01-02.out && ./bin/q-01-02.out
Enter the string -> HELLO JR
The String you entered in lowercase -> hello jr
```

<!-- qrun:field-end output id="q-01-02" -->
<!-- qrun:entry-end id="q-01-02" -->


<!-- qrun:entry-start id="q-01-04" -->

<!-- qrun:field-start question id="q-01-04" -->

## Q 04 : Enter a string from the user and convert it into title case.

<!-- qrun:field-end question id="q-01-04" -->

### CODE

<!-- qrun:field-start code id="q-01-04" -->

```c
// Strings -> Q 04 : Enter a string from the user and convert it into title case.

#include <stdio.h>
// #include <conio.>

int main(){

    char str[100],ch;
    int s = sizeof(str)/sizeof(str[0]) , i;
    printf("Enter the string -> ") ;
    for(i = 0 ; i < s-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    int flag = 0;
    for(i = 0; i < s-1 ; i++){
        if (str[i]>='a' && str[i]<='z'){
            if (flag == 0){
                flag = 1;
                str[i] -= 32; 
            }
        }
        else if (str[i]>='A' && str[i]<='Z'){
            if (flag == 0){
                flag = 1;
            }
            else {
                str[i] += 32;
            }
        }

    }

    printf("The String you entered in Title  case -> %s",str);
    
    return 0;
}
```

<!-- qrun:field-end code id="q-01-04" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-04" -->



<!-- qrun:field-end freshness id="q-01-04" -->

<!-- qrun:field-start output id="q-01-04" -->

```text
$ gcc q-01-04.c -o ./bin/q-01-04.out && ./bin/q-01-04.out
Enter the string -> Hello MISTER tONY sTARK
The String you entered in Title  case -> Hello mister tony stark
```

<!-- qrun:field-end output id="q-01-04" -->
<!-- qrun:entry-end id="q-01-04" -->


<!-- qrun:entry-start id="q-01-05" -->

<!-- qrun:field-start question id="q-01-05" -->

## Q 05 : Enter a string from the user and convert it into toggle case.

<!-- qrun:field-end question id="q-01-05" -->

### CODE

<!-- qrun:field-start code id="q-01-05" -->

```c
// Strings -> Q 05 : Enter a string from the user and convert it into toggle case.

#include <stdio.h>
// #include <conio.>

int main(){

    char str[100],ch;
    int s = sizeof(str)/sizeof(str[0]) , i;
    printf("Enter the string -> ") ;
    for(i = 0 ; i < s-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    for(i = 0; i < s-1 ; i++){
        if (str[i]>='a' && str[i]<='z'){
                str[i] -= 32; 

        }
        else if (str[i]>='A' && str[i]<='Z'){
                str[i] += 32;
        }

    }

    printf("The String you entered in Toggle  case -> %s",str);
    
    return 0;
}
```

<!-- qrun:field-end code id="q-01-05" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-05" -->



<!-- qrun:field-end freshness id="q-01-05" -->

<!-- qrun:field-start output id="q-01-05" -->

```text
$ gcc q-01-05.c -o ./bin/q-01-05.out && ./bin/q-01-05.out
Enter the string -> Hello Mister Tony StARK
The String you entered in Toggle  case -> hELLO mISTER tONY sTark
```

<!-- qrun:field-end output id="q-01-05" -->
<!-- qrun:entry-end id="q-01-05" -->


<!-- qrun:entry-start id="q-01-06" -->

<!-- qrun:field-start question id="q-01-06" -->

## Q 06 : Enter a string from the user and find its length.

<!-- qrun:field-end question id="q-01-06" -->

### CODE

<!-- qrun:field-start code id="q-01-06" -->

```c
// Strings -> Q 06 : Enter a string from the user and find its length.

#include <stdio.h>
// #include <conio.>

int main(){

    char str[100],ch;
    int s = sizeof(str)/sizeof(str[0]) , i;
    printf("Enter the string -> ") ;
    for(i = 0 ; i < s-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    printf("The String you entered -> ");
    int length = printf("%s",str);
    printf("\nLength of the string is -> %d",length);
    
    return 0;
}
```

<!-- qrun:field-end code id="q-01-06" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-06" -->



<!-- qrun:field-end freshness id="q-01-06" -->

<!-- qrun:field-start output id="q-01-06" -->

```text
$ gcc q-01-06.c -o ./bin/q-01-06.out && ./bin/q-01-06.out
Enter the string -> Hello To the World
The String you entered -> Hello To the World
Length of the string is -> 18
```

<!-- qrun:field-end output id="q-01-06" -->
<!-- qrun:entry-end id="q-01-06" -->


<!-- qrun:entry-start id="q-01-07" -->

<!-- qrun:field-start question id="q-01-07" -->

## Q 07 : Enter two strings from the user and compare whether they are equal.

<!-- qrun:field-end question id="q-01-07" -->

### CODE

<!-- qrun:field-start code id="q-01-07" -->

```c
// Strings -> Q 07 : Enter two strings from the user and compare whether they are equal.

#include <stdio.h>
// #include <conio.>

int main(){

    char str[100],ch;
    char str2[100];
    int s = sizeof(str)/sizeof(str[0]) , i,j;

    printf("Enter the string 1 -> ") ;
    for(i = 0 ; i < s-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    printf("Enter the string 2 -> ") ;
    for(j= 0 ; j < s-1;j++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str2[j] = ch;
    }
    str2[j] ='\0';


    printf("The String 1 you entered -> %s\n",str);
    printf("The String 2 you entered -> %s\n",str2);

    if (i != j){
        printf("Not Equal\n");
        return 0;
    }
    for(int k = 0 ; k<i ; i++){
        if (str[k] != str2[k]){
            printf("Not Equal\n");
            return 0;
        }
    }
    printf("Equal\n");
    
    return 1;
}
```

<!-- qrun:field-end code id="q-01-07" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-07" -->



<!-- qrun:field-end freshness id="q-01-07" -->

<!-- qrun:field-start output id="q-01-07" -->

```text
$ gcc q-01-07.c -o ./bin/q-01-07.out && ./bin/q-01-07.out
Enter the string 1 -> Hello World
Enter the string 2 -> Hello World
The String 1 you entered -> Hello World
The String 2 you entered -> Hello World
Equal
```

<!-- qrun:field-end output id="q-01-07" -->
<!-- qrun:entry-end id="q-01-07" -->


<!-- qrun:entry-start id="q-01-08" -->

<!-- qrun:field-start question id="q-01-08" -->

## Q 08 : Enter two strings from the user, concatenate them into another string, and display the result.

<!-- qrun:field-end question id="q-01-08" -->

### CODE

<!-- qrun:field-start code id="q-01-08" -->

```c
// Strings -> Q 08 : Enter two strings from the user, concatenate them into another string, and display the result.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    char str2[STR_SIZE];
    char str_cat[STR_SIZE * 2];
    int i,j;

    printf("Enter the string 1 -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
        str_cat[i] = ch;
    }
    str[i] ='\0';

    printf("Enter the string 2 -> ") ;
    for(j= 0 ; j < STR_SIZE-1;j++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str2[j] = ch;
    }
    str2[j] ='\0';


    printf("The String 1 you entered -> %s\n",str);
    printf("The String 2 you entered -> %s\n",str2);
    
    strcat(str_cat,str2);
    printf("The String Concatinated -> %s\n",str_cat);


    return 0;
}
```

<!-- qrun:field-end code id="q-01-08" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-08" -->



<!-- qrun:field-end freshness id="q-01-08" -->

<!-- qrun:field-start output id="q-01-08" -->

```text
$ gcc q-01-08.c -o ./bin/q-01-08.out && ./bin/q-01-08.out
Enter the string 1 -> Hello World
Enter the string 2 -> How are You
The String 1 you entered -> Hello World
The String 2 you entered -> How are You
The String Concatinated -> Hello WorldHow are You
```

<!-- qrun:field-end output id="q-01-08" -->
<!-- qrun:entry-end id="q-01-08" -->


<!-- qrun:entry-start id="q-01-09" -->

<!-- qrun:field-start question id="q-01-09" -->

## Q 09 : Enter a string from the user and copy it into another string variable.

<!-- qrun:field-end question id="q-01-09" -->

### CODE

<!-- qrun:field-start code id="q-01-09" -->

```c
// Strings -> Q 09 : Enter a string from the user and copy it into another string variable.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    char str2[STR_SIZE];
    int i,j;

    printf("Enter the string 1 -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    for( j = 0 ; j < i;j++){
        str2[j] = str[j];
    }
    str2[j] ='\0';


    printf("The String you entered -> %s\n",str);
    printf("The String copied as   -> %s\n",str2);

    return 0;
}
```

<!-- qrun:field-end code id="q-01-09" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-09" -->



<!-- qrun:field-end freshness id="q-01-09" -->

<!-- qrun:field-start output id="q-01-09" -->

```text
$ gcc q-01-09.c -o ./bin/q-01-09.out && ./bin/q-01-09.out
Enter the string 1 -> Hello World  ,   , dd ,
The String you entered -> Hello World  ,   , dd ,
The String copied as   -> Hello World  ,   , dd ,
```

<!-- qrun:field-end output id="q-01-09" -->
<!-- qrun:entry-end id="q-01-09" -->


<!-- qrun:entry-start id="q-01-10" -->

<!-- qrun:field-start question id="q-01-10" -->

## Q 10 : Enter a string and an index number from the user, then print the character at that index.

<!-- qrun:field-end question id="q-01-10" -->

### CODE

<!-- qrun:field-start code id="q-01-10" -->

```c
// Strings -> Q 10 : Enter a string and an index number from the user, then print the character at that index.

#include <stdio.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    int i,index;

    printf("Enter the string  -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    printf("Enter the index number (0 to %d) ->",i-1);
    scanf("%d",&index);
    if (index <= i){
        printf("The Charachter at index %d is -> %c\n",index,str[index]);
    }
    else {
        printf("Invalid index");
    }
    return 0;
}
```

<!-- qrun:field-end code id="q-01-10" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-10" -->



<!-- qrun:field-end freshness id="q-01-10" -->

<!-- qrun:field-start output id="q-01-10" -->

```text
$ gcc q-01-10.c -o ./bin/q-01-10.out && ./bin/q-01-10.out
Enter the string  -> Hello Worlf asd, fhdhf kd, ,,,, s ,
Enter the index number (0 to 34) ->34
The Charachter at index 34 is -> ,
```

<!-- qrun:field-end output id="q-01-10" -->
<!-- qrun:entry-end id="q-01-10" -->


<!-- qrun:entry-start id="q-01-11" -->

<!-- qrun:field-start question id="q-01-11" -->

## Q 11 : Enter a string from the user and check whether it is a palindrome.

<!-- qrun:field-end question id="q-01-11" -->

### CODE

<!-- qrun:field-start code id="q-01-11" -->

```c
// Strings -> Q 11 : Enter a string from the user and check whether it is a palindrome.
#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    char str2[STR_SIZE];
    int i,j;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';
    
    for(j= 0 ; j<i ; j++){
        str2[i-j-1] = str[j];
    }
    str2[i] ='\0';

    printf("The String you entered -> %s\n",str);
    printf("The String reverse     -> %s\n",str2);
    if (strcmp(str,str2) == 1){
        printf("Not a palindrome\n");
    }
    else{
        printf("A palindrome\n");
    }

    
    
    return 0;
}
```

<!-- qrun:field-end code id="q-01-11" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-11" -->



<!-- qrun:field-end freshness id="q-01-11" -->

<!-- qrun:field-start output id="q-01-11" -->

```text
$ gcc q-01-11.c -o ./bin/q-01-11.out && ./bin/q-01-11.out
Enter the string -> wwwll i  oooTTTTrTTTTooo  i llwww
The String you entered -> wwwll i  oooTTTTrTTTTooo  i llwww
The String reverse     -> wwwll i  oooTTTTrTTTTooo  i llwww
A palindrome
```

<!-- qrun:field-end output id="q-01-11" -->
<!-- qrun:entry-end id="q-01-11" -->


<!-- qrun:entry-start id="q-01-12" -->

<!-- qrun:field-start question id="q-01-12" -->

## Q 12 : Enter a string from the user and print each character on a new line.

<!-- qrun:field-end question id="q-01-12" -->

### CODE

<!-- qrun:field-start code id="q-01-12" -->

```c
// Strings -> Q 12 : Enter a string from the user and print each character on a new line.
#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    int i;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';
    
    printf("Each element in new line -> \n") ;
    for (int j = 0 ; j < i ; j++){
        printf("%c\n",str[j]);
    }


    return 0;
}
```

<!-- qrun:field-end code id="q-01-12" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-12" -->



<!-- qrun:field-end freshness id="q-01-12" -->

<!-- qrun:field-start output id="q-01-12" -->

```text
$ gcc q-01-12.c -o ./bin/q-01-12.out && ./bin/q-01-12.out
Enter the string -> hello World
Each element in new line -> 
h
e
l
l
o
 
W
o
r
l
d
```

<!-- qrun:field-end output id="q-01-12" -->
<!-- qrun:entry-end id="q-01-12" -->


<!-- qrun:entry-start id="q-01-13" -->

<!-- qrun:field-start question id="q-01-13" -->

## Q 13 : Enter a string from the user and copy its reverse into another string.

<!-- qrun:field-end question id="q-01-13" -->

### CODE

<!-- qrun:field-start code id="q-01-13" -->

```c
// Strings -> Q 13 : Enter a string from the user and copy its reverse into another string.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    char str2[STR_SIZE];
    int i,j;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';
    
    for(j= 0 ; j<i ; j++){
        str2[i-j-1] = str[j];
    }
    str2[i] ='\0';

    printf("The String you entered -> %s\n",str);
    printf("The String reverse     -> %s\n",str2);


    return 0;
}
```

<!-- qrun:field-end code id="q-01-13" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-13" -->



<!-- qrun:field-end freshness id="q-01-13" -->

<!-- qrun:field-start output id="q-01-13" -->

```text
$ gcc q-01-13.c -o ./bin/q-01-13.out && ./bin/q-01-13.out
Enter the string -> Hello World <3
The String you entered -> Hello World <3
The String reverse     -> 3< dlroW olleH
```

<!-- qrun:field-end output id="q-01-13" -->
<!-- qrun:entry-end id="q-01-13" -->


<!-- qrun:entry-start id="q-01-14" -->

<!-- qrun:field-start question id="q-01-14" -->

## Q 14 : Enter a string from the user and print the difference between the ASCII values of consecutive characters.

<!-- qrun:field-end question id="q-01-14" -->

### CODE

<!-- qrun:field-start code id="q-01-14" -->

```c
// Strings -> Q 14 : Enter a string from the user and print the difference between the ASCII values of consecutive characters.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    int i;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';
    

    printf("The String you entered -> %s\n",str);
    
    printf("\nThe Diff of ASCII in Adjacent values -> \n");
    for(int j =1 ; j < i ; j++){
        printf("%c (%d) - %c (%d) = %d\n",str[j],j,str[j-1],j-1,str[j]-str[j-1]);
    }


    return 0;
}
```

<!-- qrun:field-end code id="q-01-14" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-14" -->



<!-- qrun:field-end freshness id="q-01-14" -->

<!-- qrun:field-start output id="q-01-14" -->

```text
$ gcc q-01-14.c -o ./bin/q-01-14.out && ./bin/q-01-14.out
Enter the string -> Hello World
The String you entered -> Hello World

The Diff of ASCII in Adjacent values -> 
e (1) - H (0) = 29
l (2) - e (1) = 7
l (3) - l (2) = 0
o (4) - l (3) = 3
  (5) - o (4) = -79
W (6) -   (5) = 55
o (7) - W (6) = 24
r (8) - o (7) = 3
l (9) - r (8) = -6
d (10) - l (9) = -8
```

<!-- qrun:field-end output id="q-01-14" -->
<!-- qrun:entry-end id="q-01-14" -->


<!-- qrun:entry-start id="q-01-15" -->

<!-- qrun:field-start question id="q-01-15" -->

## Q 15 : Enter a string and a character from the user, then search for the character in the string.

<!-- qrun:field-end question id="q-01-15" -->

### CODE

<!-- qrun:field-start code id="q-01-15" -->

```c
// Strings -> Q 15 : Enter a string and a character from the user, then search for the character in the string.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    int i;
    char srch;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';
    
    printf("Enter the Charachter to search -> ");
    scanf("%c",&srch);

    printf("The String you entered -> %s\n",str);
    printf("The Char   you entered -> %c\n",srch);

    for (int j = 0 ; j < i; j ++){
        if (str[j] ==  srch ){
            printf("Found at index pos -> %d",j);
            return 1;
        }
    }
    
    printf("Not Fouund\n");
    
    return 0;
}
```

<!-- qrun:field-end code id="q-01-15" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-15" -->



<!-- qrun:field-end freshness id="q-01-15" -->

<!-- qrun:field-start output id="q-01-15" -->

```text
$ gcc q-01-15.c -o ./bin/q-01-15.out && ./bin/q-01-15.out
Enter the string -> Helo qhsdksaj fbgd A djfnfh E
Enter the Charachter to search -> A
The String you entered -> Helo qhsdksaj fbgd A djfnfh E
The Char   you entered -> A
Found at index pos -> 19
```

<!-- qrun:field-end output id="q-01-15" -->
<!-- qrun:entry-end id="q-01-15" -->


<!-- qrun:entry-start id="q-01-16" -->

<!-- qrun:field-start question id="q-01-16" -->

## Q 16 : Enter a string and a character from the user, then print the character's index if it exists; otherwise, print -1.

<!-- qrun:field-end question id="q-01-16" -->

### CODE

<!-- qrun:field-start code id="q-01-16" -->

```c
// Strings -> Q 16 : Enter a string and a character from the user, then print the character's index if it exists; otherwise, print -1.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    int i;
    char srch;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';
    
    printf("Enter the Charachter to search -> ");
    scanf("%c",&srch);

    printf("The String you entered -> %s\n",str);
    printf("The Char   you entered -> %c\n",srch);

    for (int j = 0 ; j < i; j ++){
        if (str[j] ==  srch ){
            printf("Found at index pos -> %d",j);
            return 1;
        }
    }
    
    printf("Not Fouund , -1\n");
    
    return 0;
}
```

<!-- qrun:field-end code id="q-01-16" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-16" -->



<!-- qrun:field-end freshness id="q-01-16" -->

<!-- qrun:field-start output id="q-01-16" -->

```text
$ gcc q-01-16.c -o ./bin/q-01-16.out && ./bin/q-01-16.out
Enter the string -> fghjsghd HElLLO World 
Enter the Charachter to search -> l
The String you entered -> fghjsghd HElLLO World 
The Char   you entered -> l
Found at index pos -> 11
```

<!-- qrun:field-end output id="q-01-16" -->
<!-- qrun:entry-end id="q-01-16" -->


<!-- qrun:entry-start id="q-01-17" -->

<!-- qrun:field-start question id="q-01-17" -->

## Q 17 : Enter a string from the user and count the number of vowels.

<!-- qrun:field-end question id="q-01-17" -->

### CODE

<!-- qrun:field-start code id="q-01-17" -->

```c
// Strings -> Q 17 : Enter a string from the user and count the number of vowels.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    int i,count = 0;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        if (ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' ||ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U'){count++;}

        str[i] = ch;
    }
    str[i] ='\0';
    

    printf("The String you entered -> %s\n",str);
    printf("The No of vowels in str -> %d\n",count);

    return 0;
}
```

<!-- qrun:field-end code id="q-01-17" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-17" -->



<!-- qrun:field-end freshness id="q-01-17" -->

<!-- qrun:field-start output id="q-01-17" -->

```text
$ gcc q-01-17.c -o ./bin/q-01-17.out && ./bin/q-01-17.out
Enter the string -> AEIOU aeiou AEIOU aeiou UOIEA
The String you entered -> AEIOU aeiou AEIOU aeiou UOIEA
The No of vowels in str -> 25
```

<!-- qrun:field-end output id="q-01-17" -->
<!-- qrun:entry-end id="q-01-17" -->


<!-- qrun:entry-start id="q-01-18" -->

<!-- qrun:field-start question id="q-01-18" -->

## Q 18 : Enter a string from the user and convert it into an integer.

<!-- qrun:field-end question id="q-01-18" -->

### CODE

<!-- qrun:field-start code id="q-01-18" -->

```c
// Strings -> Q 18 : Enter a string from the user and convert it into an integer.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    int i;
    int value = 0;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        if (!(ch>='0' && ch<='9')){
            printf("Non Integer char\n");
            return 0;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    for (int j = 0 ; j < i ; j++){
        value = value* 10 + (str[j] - '0');
    }
    
    printf("The String you entered -> %s\n",str);
    printf("The Integer value become -> %d\n",value);

    return 0;
}
```

<!-- qrun:field-end code id="q-01-18" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-18" -->



<!-- qrun:field-end freshness id="q-01-18" -->

<!-- qrun:field-start output id="q-01-18" -->

```text
$ gcc q-01-18.c -o ./bin/q-01-18.out && ./bin/q-01-18.out
Enter the string -> 3456
The String you entered -> 3456
The Integer value become -> 3456
```

<!-- qrun:field-end output id="q-01-18" -->
<!-- qrun:entry-end id="q-01-18" -->


<!-- qrun:entry-start id="q-01-19" -->

<!-- qrun:field-start question id="q-01-19" -->

## Q 19 : Enter a string from the user and convert it into a float.

<!-- qrun:field-end question id="q-01-19" -->

### CODE

<!-- qrun:field-start code id="q-01-19" -->

```c
// Strings -> Q 19 : Enter a string from the user and convert it into a float.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    int i;
    float value = 0;
    float dec = 0;
    float place = 0.1f;
    int flag = 0;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        if (!((ch>='0' && ch<='9') || ch == '.')){
            printf("Non Float char\n");
            return 0;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    for (int j = 0 ; j < i ; j++){
        if (str[j] == '.') { flag = 1; continue;}
        if (flag == 0){
        value = value* 10 + (str[j] - '0');
        }

        else {
            dec = dec  + (str[j] - '0') * place;
            place /= 10;
        }
    }

    value += dec;
    
    printf("The String you entered -> %s\n",str);
    printf("The Float value become -> %f\n",value);

    return 0;
}
```

<!-- qrun:field-end code id="q-01-19" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-19" -->



<!-- qrun:field-end freshness id="q-01-19" -->

<!-- qrun:field-start output id="q-01-19" -->

```text
$ gcc q-01-19.c -o ./bin/q-01-19.out && ./bin/q-01-19.out
Enter the string -> 23324.332
The String you entered -> 23324.332
The Float value become -> 23324.332031
```

<!-- qrun:field-end output id="q-01-19" -->
<!-- qrun:entry-end id="q-01-19" -->


<!-- qrun:entry-start id="q-01-20" -->

<!-- qrun:field-start question id="q-01-20" -->

## Q 20 : Enter a string from the user and count the number of characters, words, spaces, and lines.

<!-- qrun:field-end question id="q-01-20" -->

### CODE

<!-- qrun:field-start code id="q-01-20" -->

```c
// Strings -> Q 20 : Enter a string from the user and count the number of characters, words, spaces, and lines.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    int i;
    int c_count = 0;
    int w_count = 0;
    int s_count = 0;
    int l_count = 0;

    int in_word = 0;

    printf("Enter the string, enter ` when done enterin -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '`'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';
    for (int j = 0; j < i; j++) {
        c_count++;

        if (str[j] == ' ') {
            s_count++;
        }

        if (str[j] == '\n') {
            l_count++;
        }

        if (str[j] != ' ' && str[j] != '\n' && str[j] != '\t') {
            if (in_word == 0) {
                w_count++;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
    }

    printf("The string you entered:\n%s\n", str);
    printf("Characters: %d\n", c_count);
    printf("Words: %d\n", w_count);
    printf("Spaces: %d\n", s_count);
    printf("Lines: %d\n", l_count + (i > 0 && str[i - 1] != '\n'));

    return 0;
}
```

<!-- qrun:field-end code id="q-01-20" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-20" -->



<!-- qrun:field-end freshness id="q-01-20" -->

<!-- qrun:field-start output id="q-01-20" -->

```text
$ gcc q-01-20.c -o ./bin/q-01-20.out && ./bin/q-01-20.out
Enter the string, enter ` when done enterin -> ^C
```

<!-- qrun:field-end output id="q-01-20" -->
<!-- qrun:entry-end id="q-01-20" -->


<!-- qrun:entry-start id="q-01-21" -->

<!-- qrun:field-start question id="q-01-21" -->

## Q 21 : Print all permutations of a string, e.g., "ABCDE".

<!-- qrun:field-end question id="q-01-21" -->

### CODE

<!-- qrun:field-start code id="q-01-21" -->

```c
// Strings -> Q 21 : Print all permutations of a string, e.g., "ABCDE".


#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


void permute(char arr[], int start, int n) {
    if (start == n) {
        for (int i = 0; i < n; i++) {
            printf("%c ", arr[i]);
        }
        printf("\n");
        return;
    }

    for (int i = start; i < n; i++) {
        // swap 
        char temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;

        permute(arr, start + 1, n);

        // undo it 
        temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;
    }
}



int main(){

    char str[STR_SIZE],ch;
    int i;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }

        str[i] = ch;
    }
    str[i] ='\0';


    printf("The string you entered -> %s\n",str);
    permute(str,0,i);

    return 0;
}
```

<!-- qrun:field-end code id="q-01-21" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-21" -->



<!-- qrun:field-end freshness id="q-01-21" -->

<!-- qrun:field-start output id="q-01-21" -->

```text
$ gcc q-01-21.c -o ./bin/q-01-21.out && ./bin/q-01-21.out
Enter the string -> XDRJ
The string you entered -> XDRJ
X D R J 
X D J R 
X R D J 
X R J D 
X J R D 
X J D R 
D X R J 
D X J R 
D R X J 
D R J X 
D J R X 
D J X R 
R D X J 
R D J X 
R X D J 
R X J D 
R J X D 
R J D X 
J D R X 
J D X R 
J R D X 
J R X D 
J X R D 
J X D R 
```

<!-- qrun:field-end output id="q-01-21" -->
<!-- qrun:entry-end id="q-01-21" -->


<!-- qrun:entry-start id="q-01-22" -->

<!-- qrun:field-start question id="q-01-22" -->

## Q 22 : Enter a string from the user, sort its characters in ascending order, and print it.

<!-- qrun:field-end question id="q-01-22" -->

### CODE

<!-- qrun:field-start code id="q-01-22" -->

```c
// Strings -> Q 22 : Enter a string from the user, sort its characters in ascending order, and print it.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100



void mergearr(char arr[], int u, int l)
{
    int mid = (u + l ) / 2;
    char newarr[u - l + 1];
    int i = l;
    int k = 0;
    int j = mid + 1;

    while (i <= mid && j <= u) {
        if (arr[i] <= arr[j]) {
            newarr[k] = arr[i];
            i++;
        }
        else {
            newarr[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        newarr[k] = arr[i];
        i++;
        k++;
    }

    while (j <= u) {
        newarr[k] = arr[j];
        j++;
        k++;
    }

    for (int x = 0; x < k; x++) {
        arr[l + x] = newarr[x];
    }

}


void mergesort(char arr[], int l, int u){
    if (l >= u){
        return;
    }

    int mid = (l + u) / 2;

    mergesort(arr, l, mid);
    mergesort(arr, mid + 1, u);

    mergearr(arr, u, l);
}


int main(){

    char str[STR_SIZE],ch;
    int i;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    printf("The String you entered -> %s\n",str);
    mergesort(str,0,i-1);

    

    printf("The Sorted String now  -> %s\n",str);



    return 0;
}
```

<!-- qrun:field-end code id="q-01-22" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-22" -->



<!-- qrun:field-end freshness id="q-01-22" -->

<!-- qrun:field-start output id="q-01-22" -->

```text
$ gcc q-01-22.c -o ./bin/q-01-22.out && ./bin/q-01-22.out
Enter the string -> sbdndj bskdh sn..f.s uaa fhjs bbcc a
The String you entered -> sbdndj bskdh sn..f.s uaa fhjs bbcc a
The Sorted String now  ->       ...aaabbbbccdddffhhjjknnsssssu
```

<!-- qrun:field-end output id="q-01-22" -->
<!-- qrun:entry-end id="q-01-22" -->


<!-- qrun:entry-start id="q-01-23" -->

<!-- qrun:field-start question id="q-01-23" -->

## Q 23 : Enter a sentence and a word from the user, then count the occurrences of that word in the sentence.

<!-- qrun:field-end question id="q-01-23" -->

### CODE

<!-- qrun:field-start code id="q-01-23" -->

```c
// Strings -> Q 23 : Enter a sentence and a word from the user, then count the occurrences of that word in the sentence.


#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    char word[STR_SIZE/4];

    int i,j,flag = 0,count = 0;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';
    
    printf("Enter the word   -> ") ;
    for(j = 0 ; j < STR_SIZE/4 -1;j++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        word[j] = ch;
    }
    word[j] ='\0';int word_len = strlen(word);

    if (word_len > 0) {
        for (int k = 0; k <= i - word_len; k++) {

            if (strncmp(&str[k], word, word_len) == 0) {

                if (k == 0 || str[k - 1] == ' ' ||
                    str[k - 1] == '\t') {

                    if (str[k + word_len] == '\0' ||
                        str[k + word_len] == ' ' ||
                        str[k + word_len] == '\t' ||
                        str[k + word_len] == '.' ||
                        str[k + word_len] == ',' ||
                        str[k + word_len] == '!' ||
                        str[k + word_len] == '?' ||
                        str[k + word_len] == ';' ||
                        str[k + word_len] == ':') {

                        count++;
                    }
                }
            }
        }
    }

    printf("The String you entered -> %s\n",str);
    printf("The Word   you entered -> %s\n",word);
    printf("The Occurance of Word  -> %d\n",count);


    return 0;
}
```

<!-- qrun:field-end code id="q-01-23" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-23" -->



<!-- qrun:field-end freshness id="q-01-23" -->

<!-- qrun:field-start output id="q-01-23" -->

```text
$ gcc q-01-23.c -o ./bin/q-01-23.out && ./bin/q-01-23.out
Enter the string -> the the ht eb adhdj th the the 
Enter the word   -> the
The String you entered -> the the ht eb adhdj th the the 
The Word   you entered -> the
The Occurance of Word  -> 4
```

<!-- qrun:field-end output id="q-01-23" -->
<!-- qrun:entry-end id="q-01-23" -->


<!-- qrun:entry-start id="q-01-24" -->

<!-- qrun:field-start question id="q-01-24" -->

## Q 24 : Enter a sentence and a word from the user, then replace the first occurrence of that word with another word.

<!-- qrun:field-end question id="q-01-24" -->

### CODE

<!-- qrun:field-start code id="q-01-24" -->

```c
// Strings -> Q 24 : Enter a sentence and a word from the user, then replace the first occurrence of that word with another word.

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100

int main()
{
    char str[STR_SIZE], ch;
    char word[STR_SIZE / 4];
    char newword[STR_SIZE / 4];
    char result[STR_SIZE * 2];

    int i, j, k, p;
    int word_len, newword_len;
    int flag, found = 0;


    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';
    
    printf("Enter the word to replace  -> ") ;
    for(j = 0 ; j < STR_SIZE/4 -1;j++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        word[j] = ch;
    }
    word[j] ='\0';

    printf("Enter the new word  -> ");
    for (k = 0; k < STR_SIZE / 4 - 1; k++) {
        ch = getchar();
        if (ch == '\n'){
            break;
        }
        newword[k] = ch;
    }
    newword[k] = '\0';

    word_len = strlen(word);
    newword_len = strlen(newword);

    k = 0;

    for (i = 0; str[i] != '\0'; ) {
        flag = 0;
        if (word_len > 0 &&
            strncmp(&str[i], word, word_len) == 0) {
            if ((i == 0 || str[i - 1] == ' ' ||
                 str[i - 1] == '\t') &&
                (str[i + word_len] == '\0' ||
                 str[i + word_len] == ' ' ||
                 str[i + word_len] == '\t' ||
                 str[i + word_len] == '.' ||
                 str[i + word_len] == ',' ||
                 str[i + word_len] == '!' ||
                 str[i + word_len] == '?' ||
                 str[i + word_len] == ';' ||
                 str[i + word_len] == ':')) {
                flag = 1;
            }
        }

        if (flag == 1 && found == 0) {
            for (p = 0; p < newword_len; p++) {
                result[k++] = newword[p];
            }

            i += word_len;
            found = 1;
        }
        else {
            result[k++] = str[i];
            i++;
        }
    }

    result[k] = '\0';

    printf("The String you entered -> %s\n",str);
    printf("The String after replaceemnt  -> %s\n",str);

    return 0;
}
```

<!-- qrun:field-end code id="q-01-24" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-24" -->



<!-- qrun:field-end freshness id="q-01-24" -->

<!-- qrun:field-start output id="q-01-24" -->

```text
$ gcc q-01-24.c -o ./bin/q-01-24.out && ./bin/q-01-24.out
Enter the string -> the the the hte shdgb stthr the 
Enter the word to replace  -> the 
Enter the new word  -> yes
The String you entered -> the the the hte shdgb stthr the 
The String after replaceemnt  -> the the the hte shdgb stthr the 
```

<!-- qrun:field-end output id="q-01-24" -->
<!-- qrun:entry-end id="q-01-24" -->


<!-- qrun:entry-start id="q-01-25" -->

<!-- qrun:field-start question id="q-01-25" -->

## Q 25 : Enter a string from the user and trim spaces from both ends, if any.

<!-- qrun:field-end question id="q-01-25" -->

### CODE

<!-- qrun:field-start code id="q-01-25" -->

```c
// Strings -> Q 25 : Enter a string from the user and trim spaces from both ends, if any.


#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    char str2[STR_SIZE];
    int i,start= 0;
    int end;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';
    
    printf("The String you entered -> %s\n",str);
    
    end = i - 1;
    
    while (str[start] == ' ' && start < i) {
        start++;
    }
    
    while (end >= start && str[end] == ' ') {
        end--;
    }
    
    int j = 0;
    for (int k = start; k <= end; k++) {
        str[j] = str[k];
        j++;
    }
    str[j] = '\0';
    
    printf("The String after Trimming -> %s\n",str);


    return 0;
}
```

<!-- qrun:field-end code id="q-01-25" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-25" -->



<!-- qrun:field-end freshness id="q-01-25" -->

<!-- qrun:field-start output id="q-01-25" -->

```text
$ gcc q-01-25.c -o ./bin/q-01-25.out && ./bin/q-01-25.out
Enter the string ->     hello     world                    
The String you entered ->     hello     world                    
The String after Trimming -> hello     world
```

<!-- qrun:field-end output id="q-01-25" -->
<!-- qrun:entry-end id="q-01-25" -->


<!-- qrun:entry-start id="q-01-26" -->

<!-- qrun:field-start question id="q-01-26" -->

## Q 26 : Enter a string from the user, split the first and second words, and return the starting index of the second word.

<!-- qrun:field-end question id="q-01-26" -->

### CODE

<!-- qrun:field-start code id="q-01-26" -->

```c
// Strings -> Q 26 : Enter a string from the user, split the first and second words, and return the starting index of the second word.


#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    char word1[STR_SIZE/4];
    char word2[STR_SIZE];
    int i,inword = 0,n=0;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';
    

    

    for (int j = 0 ; j < i ; j++){
        if ((str[j] >= 'a' && str[j] <='z') || ((str[j] >= 'A' && str[j] <='Z'))){
            inword = 1;
            word1[n] = str[j];
            n++;
        }
        else if ((inword = 1) && (str[j] == ' ')){
            int x = 0;
            while (j<i)
            {
                word2[x] = str[j];
                x++;
                j++;
            }

            break;
        }
    }

    printf("The String you entered -> %s\n",str);
    printf("The First Word         -> %s\n",word1);
    printf("The Second Word        -> %s\n",word2);
    
    return 0;
}
```

<!-- qrun:field-end code id="q-01-26" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-26" -->



<!-- qrun:field-end freshness id="q-01-26" -->

<!-- qrun:field-start output id="q-01-26" -->

```text
$ gcc q-01-26.c -o ./bin/q-01-26.out && ./bin/q-01-26.out
Enter the string -> hello world aaa aaa aaa gggg
The String you entered -> hello world aaa aaa aaa gggg
The First Word         -> hello
The Second Word        ->  world aaa aaa aaa gggg
```

<!-- qrun:field-end output id="q-01-26" -->
<!-- qrun:entry-end id="q-01-26" -->


<!-- qrun:entry-start id="q-01-27" -->

<!-- qrun:field-start question id="q-01-27" -->

## Q 27 : Display a string using the alignment option selected by the user (1 for left, 2 for center, 3 for right).

<!-- qrun:field-end question id="q-01-27" -->

### CODE

<!-- qrun:field-start code id="q-01-27" -->

```c
// Strings -> Q 27 : Display a string using the alignment option selected by the user (1 for left, 2 for center, 3 for right).


#include <stdio.h>
#include <string.h>
#define STR_SIZE 100
#define WIDTH 100


int main(){

    char str[STR_SIZE],ch;
    int i,option;
    int terminal_width = 100;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';
    

    printf("The String you entered -> %s\n",str);
    printf("The Options ->\n1 -> Left\n2 -> Center\n3 -> Right\n");
    scanf("%d",&option);
    if (option == 1) {
        printf("%-*s\n", WIDTH, str);
    }
    else if (option == 2) {
        int spaces = (WIDTH - i) / 2;

        for (i = 0; i < spaces; i++) {
            printf(" ");
        }

        printf("%s\n", str);
    }
    else if (option == 3) {
        printf("%*s\n", WIDTH, str);
    }

    



    return 0;
}
```

<!-- qrun:field-end code id="q-01-27" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-27" -->



<!-- qrun:field-end freshness id="q-01-27" -->

<!-- qrun:field-start output id="q-01-27" -->

```text
$ gcc q-01-27.c -o ./bin/q-01-27.out && ./bin/q-01-27.out
Enter the string -> Hello World 
The String you entered -> Hello World 
The Options ->
1 -> Left
2 -> Center
3 -> Right
3
                                                                                        Hello World 
```

<!-- qrun:field-end output id="q-01-27" -->
<!-- qrun:entry-end id="q-01-27" -->


<!-- qrun:entry-start id="q-01-29" -->

<!-- qrun:field-start question id="q-01-29" -->

## Q 29 : Enter a string from the user and convert its characters into their ASCII values in an integer array (e.g., 10 characters).

<!-- qrun:field-end question id="q-01-29" -->

### CODE

<!-- qrun:field-start code id="q-01-29" -->

```c
// Strings -> Q 29 : Enter a string from the user and convert its characters into their ASCII values in an integer array (e.g., 10 characters).

#include <stdio.h>
#include <string.h>
#define STR_SIZE 100


int main(){

    char str[STR_SIZE],ch;
    int arr[STR_SIZE];
    int i;

    printf("Enter the string -> ") ;
    for(i = 0 ; i < STR_SIZE-1;i++){
        ch =  getchar();
        if (ch == '\n'){
            break;
        }
        str[i] = ch;
    }
    str[i] ='\0';

    for(int j = 0 ; j < i ; j++){
        arr[j] = (str[j]);
    }
    

    printf("The String you entered -> %s\n",str);
    printf("The Array of ASCII val -> [");
    for(int j = 0 ; j < i ; j++){
        printf(" %d,",arr[j]);
    }
    printf("]\n");

    
    return 0;
}
```

<!-- qrun:field-end code id="q-01-29" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-29" -->



<!-- qrun:field-end freshness id="q-01-29" -->

<!-- qrun:field-start output id="q-01-29" -->

```text
$ gcc q-01-29.c -o ./bin/q-01-29.out && ./bin/q-01-29.out
Enter the string -> Hello World i am here!
The String you entered -> Hello World i am here!
The Array of ASCII val -> [ 72, 101, 108, 108, 111, 32, 87, 111, 114, 108, 100, 32, 105, 32, 97, 109, 32, 104, 101, 114, 101, 33,]
```

<!-- qrun:field-end output id="q-01-29" -->
<!-- qrun:entry-end id="q-01-29" -->


<!-- qrun:entry-start id="q-01-28" -->

<!-- qrun:field-start question id="q-01-28" -->

## Q 28 : Create a dictionary containing 10 words and their meanings, with operations to create, delete, and search.

<!-- qrun:field-end question id="q-01-28" -->

### CODE

<!-- qrun:field-start code id="q-01-28" -->

```c
// Strings -> Q 28 : Create a dictionary containing 10 words and their meanings, with operations to create, delete, and search.

#include <stdio.h>
#include <string.h>

#define N_WORD 10
#define S_MENG 100

int main()
{
    char dict[N_WORD][2][S_MENG] = {
        {"Apple", "A fruit"},
        {"Book", "Something used for reading"},
        {"Cat", "A small domesticated animal"},
        {"Dog", "A domesticated animal"},
        {"Earth", "The planet we live on"}
    };
    
    int count = 5;
    
    char word[S_MENG],ch;
    int i,j;
    int choice, index = -1 ;

    while (1) {

        printf("\n1 -> Search word\n");
        printf("2 -> Create word\n");
        printf("3 -> Delete word\n");
        printf("4 -> Display dictionary\n");
        printf("5 -> Exit\n");
        
        scanf("%d", &choice);
        getchar();

        switch(choice){
        case 1 : {

            index = -1;

            printf("Enter word to search -> ");            
            for(i = 0 ; i < S_MENG-1;i++){
                ch =  getchar();
                if (ch == '\n'){
                    break;
                }
                word[i] = ch;
            }
            word[i] ='\0';


            for (j = 0; j < count ; j++){
                if (strcmp(word,dict[j][0]) == 0){
                    index = j;
                    break;
                }
            }

            if (index == -1){ printf("The Word -> '%s' Not found\n",word);}
            else {printf("The Word -> '%s' found at index -> %d\n",word,index);}
            break;
        }


        case 2 : {
            if (count >= 10){
                printf("Maximum Word limit Reached\n");
                break;
            }

            if ((count<=10) && (count>=0)){
                printf("Enter word to enter -> ");            
                for(i = 0 ; i < S_MENG-1;i++){
                    ch =  getchar();
                    if (ch == '\n'){
                        break;
                    }
                    word[i] = ch;
                }
                word[i] ='\0';

                count;


                strcpy(dict[count][0],word);

                printf("Enter Meaning to enter -> ");            
                for(i = 0 ; i < S_MENG-1;i++){
                    ch =  getchar();
                    if (ch == '\n'){
                        break;
                    }
                    word[i] = ch;
                }
                word[i] ='\0';
    
                strcpy(dict[count][1],word);
                count++;

                printf("Word Entered at index -> %d\n",count-1);
                break;

            }}


            case 3: {

                if (count == 0){
                    printf("Dict Empty\n");
                    break;
                }
                
                printf("Enter word to delete -> ");          
                for(i = 0 ; i < S_MENG-1;i++){
                    ch =  getchar();
                    if (ch == '\n'){
                        break;
                    }
                    word[i] = ch;
                }
                word[i] ='\0';
                index = -1;

                for (j = 0; j < count ; j++){
                if (strcmp(word,dict[j][0]) == 0){
                    index = j;
                    break;
                }}
            
                if (j == -1){ printf("The Word -> '%s' Not found\n",word);}
                else {printf("The Word -> '%s' found at index -> %d\n",word,j);
                    dict[index][0][0] = '\0';
                    dict[index][1][0] = '\0';
                        printf("Word Removed !\n");}
                break;
            
            }

            case 4: {

                if (count == 0){
                    printf("Dict Empty\n");
                    break;
                }
                
                printf("\nDictionary ->>\n\n");
                for (j = 0 ; j < count ; j++){
                    if (dict[j][0][0] == 0){continue;}
                    printf("%d -> %s :\n",j,dict[j][0]);
                    printf("%s\n",dict[j][1]);
                    printf("\n");
                }

                break;

            }

            case 5:{
                return 0;
            }

            default: {
                printf("Invalid Input\n");
            }

            
            
        }
    
    
    }
    return 0;
        }

```

<!-- qrun:field-end code id="q-01-28" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-01-28" -->



<!-- qrun:field-end freshness id="q-01-28" -->

<!-- qrun:field-start output id="q-01-28" -->

```text
$ gcc q-01-28.c -o ./bin/q-01-28.out && ./bin/q-01-28.out

1 -> Search word
2 -> Create word
3 -> Delete word
4 -> Display dictionary
5 -> Exit
4

Dictionary ->>

0 -> Apple :
A fruit

1 -> Book :
Something used for reading

2 -> Cat :
A small domesticated animal

3 -> Dog :
A domesticated animal

4 -> Earth :
The planet we live on


1 -> Search word
2 -> Create word
3 -> Delete word
4 -> Display dictionary
5 -> Exit
1
Enter word to search -> Cat
The Word -> 'Cat' found at index -> 2

1 -> Search word
2 -> Create word
3 -> Delete word
4 -> Display dictionary
5 -> Exit
1
Enter word to search -> Book
The Word -> 'Book' found at index -> 1

1 -> Search word
2 -> Create word
3 -> Delete word
4 -> Display dictionary
5 -> Exit
2
Enter word to enter -> Causality
Enter Meaning to enter -> the principle that there is a cause for everything that happens
Word Entered at index -> 5

1 -> Search word
2 -> Create word
3 -> Delete word
4 -> Display dictionary
5 -> Exit
4

Dictionary ->>

0 -> Apple :
A fruit

1 -> Book :
Something used for reading

2 -> Cat :
A small domesticated animal

3 -> Dog :
A domesticated animal

4 -> Earth :
The planet we live on

5 -> Causality :
the principle that there is a cause for everything that happens


1 -> Search word
2 -> Create word
3 -> Delete word
4 -> Display dictionary
5 -> Exit
3
Enter word to delete -> Causality
The Word -> 'Causality' found at index -> 5
Word Removed !

1 -> Search word
2 -> Create word
3 -> Delete word
4 -> Display dictionary
5 -> Exit
4

Dictionary ->>

0 -> Apple :
A fruit

1 -> Book :
Something used for reading

2 -> Cat :
A small domesticated animal

3 -> Dog :
A domesticated animal

4 -> Earth :
The planet we live on


1 -> Search word
2 -> Create word
3 -> Delete word
4 -> Display dictionary
5 -> Exit
5
```

<!-- qrun:field-end output id="q-01-28" -->
<!-- qrun:entry-end id="q-01-28" -->

<!-- qrun:topic-end id="topic-01" -->

<!-- qrun:topic-start id="topic-04" -->

<!-- qrun:field-start topic id="topic-04" -->

# Stacks

<!-- qrun:field-end topic id="topic-04" -->

<!-- qrun:entry-start id="q-04-01" -->

<!-- qrun:field-start question id="q-04-01" -->

## Q 01 : Create a stack using an integer array and implement push, pop, peek, isEmpty, and isFull operations.

<!-- qrun:field-end question id="q-04-01" -->

### CODE

<!-- qrun:field-start code id="q-04-01" -->

```c
// Stacks -> Q 01 : Create a stack using an integer array and implement push, pop, peek, isEmpty, and isFull operations.

#include <stdio.h>

#define STACK_SIZE 6

int push(int arr[], int *top, int num){
    if (*top >= STACK_SIZE - 1){return 0;}
    arr[++(*top)] = num;
    return 1;
}

int pop(int arr[], int *top, int *value){
    if (*top < 0){return 0;}
    *value = arr[*top];
    (*top)--;
    return 1;
}

int peek(int arr[], int *top, int *value){
    if (*top < 0){return 0;}
    *value = arr[*top];
    return 1;
}

int size_st(int *top){
    return (*top) + 1;
}

int isempty(int *top){
    return (*top == -1);
}

void show_st(int arr[], int *top)
{
    if (*top == -1){
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements :\n\n");
      for (int i = 0 ; i < *top ; i++){
        printf("|  %3d  |", arr[i]);
    }
    printf("|> %3d <|\n", arr[*top]);

}

int main()
{
    int arr[STACK_SIZE];
    int top = -1;
    int choice;
    int input_val;
    int out;
    int temp;

    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : push\n");
        printf("2 : pop\n");
        printf("3 : peek\n");
        printf("4 : size\n");
        printf("5 : isempty\n");
        printf("6 : show\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number to push : ");
            scanf("%d", &input_val);

            out = push(arr, &top, input_val);
            if (out == 1)
                printf("%d pushed to stack\n", input_val);
            else
                printf("Stack overflow \n");
            break;

        case 2:
            out = pop(arr, &top, &temp);
            if (out == 1)
                printf("Popped value : %d\n", temp);
            else
                printf("Stack underflow \n");
            break;

        case 3:
            out = peek(arr, &top, &temp);
            if (out == 1)
                printf("Top value : %d\n", temp);
            else
                printf("Stack is empty \n");
            break;

        case 4:
            printf("Size of stack : %d\n", size_st(&top));
            break;

        case 5:
            if (isempty(&top))
                printf("Stack is empty \n");
            else
                printf("Stack is not empty\n");
            break;

        case 6:
            show_st(arr, &top);
            break;

        case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}
```

<!-- qrun:field-end code id="q-04-01" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-04-01" -->



<!-- qrun:field-end freshness id="q-04-01" -->

<!-- qrun:field-start output id="q-04-01" -->

```text
$ gcc q-04-01.c -o ./bin/q-04-01.out && ./bin/q-04-01.out

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 6
Stack is empty

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 1
Enter the number to push : 24
24 pushed to stack

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 1
Enter the number to push : 24
24 pushed to stack

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 1
Enter the number to push : 64
64 pushed to stack

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 1
Enter the number to push : 45
45 pushed to stack

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 3
Top value : 45

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 4
Size of stack : 4

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 5
Stack is not empty

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 6
Stack elements :

|   24  ||   24  ||   64  ||>  45 <|

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 2
Popped value : 45

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 6
Stack elements :

|   24  ||   24  ||>  64 <|

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 0
exitting ...
```

<!-- qrun:field-end output id="q-04-01" -->
<!-- qrun:entry-end id="q-04-01" -->


<!-- qrun:entry-start id="q-04-02" -->

<!-- qrun:field-start question id="q-04-02" -->

## Q 02 : Create a stack using a character array and implement push, pop, peek, isEmpty, and isFull operations.

<!-- qrun:field-end question id="q-04-02" -->

### CODE

<!-- qrun:field-start code id="q-04-02" -->

```c
// Stacks -> Q 02 : Create a stack using a character array and implement push, pop, peek, isEmpty, and isFull operations.

#include <stdio.h>

#define STACK_SIZE 6

int push(char arr[], int *top, char num){
    if (*top >= STACK_SIZE - 1){return 0;}
    arr[++(*top)] = num;
    return 1;
}

int pop(char arr[], int *top, char *value){
    if (*top < 0){return 0;}
    *value = arr[*top];
    (*top)--;
    return 1;
}

int peek(char arr[], int *top, char *value){
    if (*top < 0){return 0;}
    *value = arr[*top];
    return 1;
}

int size_st(int *top){
    return (*top) + 1;
}

int isempty(int *top){
    return (*top == -1);
}

void show_st(char arr[], int *top)
{
    if (*top == -1){
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements :\n\n");
      for (int i = 0 ; i < *top ; i++){
        printf("|  %3c  |", arr[i]);
    }
    printf("|> %c <|\n", arr[*top]);

}

int main()
{
    char arr[STACK_SIZE];
    int top = -1;
    int choice;
    char input_val;
    int out;
    char temp;

    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : push\n");
        printf("2 : pop\n");
        printf("3 : peek\n");
        printf("4 : size\n");
        printf("5 : isempty\n");
        printf("6 : show\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number to push : ");
            scanf(" %c", &input_val);

            out = push(arr, &top, input_val);
            if (out == 1)
                printf("%c pushed to stack\n", input_val);
            else
                printf("Stack overflow \n");
            break;

        case 2:
            out = pop(arr, &top, &temp);
            if (out == 1)
                printf("Popped value : %c\n", temp);
            else
                printf("Stack underflow \n");
            break;

        case 3:
            out = peek(arr, &top, &temp);
            if (out == 1)
                printf("Top value : %c\n", temp);
            else
                printf("Stack is empty \n");
            break;

        case 4:
            printf("Size of stack : %d\n", size_st(&top));
            break;

        case 5:
            if (isempty(&top))
                printf("Stack is empty \n");
            else
                printf("Stack is not empty\n");
            break;

        case 6:
            show_st(arr, &top);
            break;

        case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}
```

<!-- qrun:field-end code id="q-04-02" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-04-02" -->



<!-- qrun:field-end freshness id="q-04-02" -->

<!-- qrun:field-start output id="q-04-02" -->

```text
$ gcc q-04-02.c -o ./bin/q-04-02.out && ./bin/q-04-02.out

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 1
Enter the number to push : n
n pushed to stack

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 1
Enter the number to push : b
b pushed to stack

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 1
Enter the number to push : g
g pushed to stack

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 3
Top value : g

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 4
Size of stack : 3

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 5
Stack is not empty

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 6
Stack elements :

|    n  ||    b  ||> g <|

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 2
Popped value : g

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 2
Popped value : b

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 6
Stack elements :

|> n <|

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 2
Popped value : n

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 6
Stack is empty

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
0 : exit
Enter choice : 0
exitting ...
```

<!-- qrun:field-end output id="q-04-02" -->
<!-- qrun:entry-end id="q-04-02" -->


<!-- qrun:entry-start id="q-04-03" -->

<!-- qrun:field-start question id="q-04-03" -->

## Q 03 : Create a dynamically allocated stack using integer nodes and implement push, pop, peek, isEmpty, and isFull operations.

<!-- qrun:field-end question id="q-04-03" -->

### CODE

<!-- qrun:field-start code id="q-04-03" -->

```c
// Stacks -> Q 03 : Create a dynamically allocated stack using integer nodes and implement push, pop, peek, isEmpty, and isFull operations.
#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node * pre_ptr;
};

int add_node(struct node ** top, int data){

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    
    if (*top == NULL){
        new_node->pre_ptr = NULL;
        *top = new_node;
        return 1;
    }

    new_node->pre_ptr = *top;
    *top = new_node;
    return 1;
}


int pop_node(struct node **top)
{
    if (*top == NULL)
        return 0;

    struct node *temp = (*top)->pre_ptr;
    free(*top);
    *top = temp;
    return 1;
}

int is_empty(struct node *top){
    if (top == NULL){
        return 1;
    }
    else  return 0;
}



int peek_node(struct node *top){
        return top->data;
}




void show_node(struct node * top){
    if (top == NULL){
        printf("NO DATA\n");
        return;
    }

    printf("\n|> %3d <|", top->data);
    top=top->pre_ptr;

    while (top != NULL){

        printf("|  %3d  |", top->data);
        top=top->pre_ptr;
    }
    
}

int stack_size(struct node * top){
    int i=0;
    while (top != NULL){
        i++;
        top=top->pre_ptr;
    }
    return i;
}

void clear_stack(struct node ** top){
    struct node * temp;
    while (*top != NULL){
        temp = *top;
        *top = (*top)->pre_ptr;
        free(temp);
    }
}



int main(){

    struct node * top = NULL;
    int choice,input_val,out;

    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : push\n");
        printf("2 : pop\n");
        printf("3 : peek\n");
        printf("4 : size\n");
        printf("5 : isempty\n");
        printf("6 : show\n");
        printf("7 : clear\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter the number to push : ");
            scanf("%d", &input_val);

            out = add_node(&top,input_val);
            if (out == 1)
                printf("%d pushed to stack\n", input_val);
            else
                printf("Stack overflow \n");
            break;

        case 2:
            out = pop_node(&top);
            if (out == 1)
                printf("Popped");
            else
                printf("Stack underflow \n");
            break;

        case 3:
            out = is_empty(top);
            if (out == 0)
                printf("Top value : %d\n", peek_node(top));
            else
                printf("Stack is empty \n");
            break;

        case 4:
            printf("Size of stack : %d\n", stack_size(top));
            break;

        case 5:
            if (is_empty(top))
                printf("Stack is empty \n");
            else
                printf("Stack is not empty\n");
            break;

        case 6:
            show_node(top);
            break;

        case 7:
            clear_stack(&top);
            break;

        case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }

return 0;
}
```

<!-- qrun:field-end code id="q-04-03" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-04-03" -->



<!-- qrun:field-end freshness id="q-04-03" -->

<!-- qrun:field-start output id="q-04-03" -->

```text
$ gcc q-04-03.c -o ./bin/q-04-03.out && ./bin/q-04-03.out

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 1
Enter the number to push : 32
32 pushed to stack

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 1
Enter the number to push : 434
434 pushed to stack

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 1
Enter the number to push : 534
534 pushed to stack

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 3
Top value : 534

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 4
Size of stack : 3

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 5
Stack is not empty

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 6

|> 534 <||  434  ||   32  |
Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 2
Popped
Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 6

|> 434 <||   32  |
Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 7

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 0
exitting ...
```

<!-- qrun:field-end output id="q-04-03" -->
<!-- qrun:entry-end id="q-04-03" -->


<!-- qrun:entry-start id="q-04-04" -->

<!-- qrun:field-start question id="q-04-04" -->

## Q 04 : Create a dynamically allocated stack using character nodes and implement push, pop, peek, isEmpty, and isFull operations.

<!-- qrun:field-end question id="q-04-04" -->

### CODE

<!-- qrun:field-start code id="q-04-04" -->

```c
// Stacks -> Q 04 : Create a dynamically allocated stack using character nodes and implement push, pop, peek, isEmpty, and isFull operations.
#include <stdio.h>
#include <stdlib.h>


struct node{
    char data;
    struct node * pre_ptr;
};

int add_node(struct node ** top, char data){

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    
    if (*top == NULL){
        new_node->pre_ptr = NULL;
        *top = new_node;
        return 1;
    }

    new_node->pre_ptr = *top;
    *top = new_node;
    return 1;
}


int pop_node(struct node **top)
{
    if (*top == NULL)
        return 0;

    struct node *temp = (*top)->pre_ptr;
    free(*top);
    *top = temp;
    return 1;
}

int is_empty(struct node *top){
    if (top == NULL){
        return 1;
    }
    else  return 0;
}



char peek_node(struct node *top){
        return top->data;
}




void show_node(struct node * top){
    if (top == NULL){
        printf("NO DATA\n");
        return;
    }

    printf("\n|> %c <|", top->data);
    top=top->pre_ptr;

    while (top != NULL){

        printf("|  %3c  |", top->data);
        top=top->pre_ptr;
    }
    
}

int stack_size(struct node * top){
    int i=0;
    while (top != NULL){
        i++;
        top=top->pre_ptr;
    }
    return i;
}

void clear_stack(struct node ** top){
    struct node * temp;
    while (*top != NULL){
        temp = *top;
        *top = (*top)->pre_ptr;
        free(temp);
    }
}



int main(){

    struct node * top = NULL;
    int choice,out;
    char input_val;

    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : push\n");
        printf("2 : pop\n");
        printf("3 : peek\n");
        printf("4 : size\n");
        printf("5 : isempty\n");
        printf("6 : show\n");
        printf("7 : clear\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter the number to push : ");
            scanf(" %c", &input_val);

            out = add_node(&top,input_val);
            if (out == 1)
                printf("%c pushed to stack\n", input_val);
            else
                printf("Stack overflow \n");
            break;

        case 2:
            out = pop_node(&top);
            if (out == 1)
                printf("Popped");
            else
                printf("Stack underflow \n");
            break;

        case 3:
            out = is_empty(top);
            if (out == 0)
                printf("Top value : %c\n", peek_node(top));
            else
                printf("Stack is empty \n");
            break;

        case 4:
            printf("Size of stack : %d\n", stack_size(top));
            break;

        case 5:
            if (is_empty(top))
                printf("Stack is empty \n");
            else
                printf("Stack is not empty\n");
            break;

        case 6:
            show_node(top);
            break;

        case 7:
            clear_stack(&top);
            break;

        case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }

return 0;
}
```

<!-- qrun:field-end code id="q-04-04" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-04-04" -->



<!-- qrun:field-end freshness id="q-04-04" -->

<!-- qrun:field-start output id="q-04-04" -->

```text
$ gcc q-04-04.c -o ./bin/q-04-04.out && ./bin/q-04-04.out

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 1
Enter the number to push : g
g pushed to stack

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 1
Enter the number to push : h
h pushed to stack

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 1
Enter the number to push : h
h pushed to stack

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 1
Enter the number to push : g
g pushed to stack

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 3
Top value : g

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 4
Size of stack : 4

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 5
Stack is not empty

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 6

|> g <||    h  ||    h  ||    g  |
Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 2
Popped
Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 6

|> h <||    h  ||    g  |
Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 2
Popped
Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 6

|> h <||    g  |
Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 7

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 6
NO DATA

Enter the choice :
1 : push
2 : pop
3 : peek
4 : size
5 : isempty
6 : show
7 : clear
0 : exit
Enter choice : 0
exitting ...
```

<!-- qrun:field-end output id="q-04-04" -->
<!-- qrun:entry-end id="q-04-04" -->


<!-- qrun:entry-start id="q-04-06" -->

<!-- qrun:field-start question id="q-04-06" -->

## Q 06 : Create a program to match single brackets using a stack.

<!-- qrun:field-end question id="q-04-06" -->

### CODE

<!-- qrun:field-start code id="q-04-06" -->

```c
// Stacks -> Q 06 : Create a program to match single brackets using a stack.
#include <stdio.h>
#include <stdlib.h>

struct node{
    char data;
    struct node * ptr;
};


// QUEUES : IT is normal dynamic sized non circular queue with 
//          linked list with functions `enqueue`, `dequeue`, `front`, `rear`, `isempty`, `size`, `show`, `search`

int enqueue(struct node ** front,struct node ** rear, char data){

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    new_node->ptr = NULL;

    if (((*front) == NULL) && ((*rear) == NULL)){
        *front = new_node;
        *rear = *front;
        return 1;
    }
    
    if ((*rear)->ptr == NULL){
        (*rear)->ptr = new_node;
        (*rear) = (*rear)->ptr;
        return 1;
    } 

    return 0;
}


int dequeue(struct node ** front,struct node ** rear){
    if ((*front) == NULL){
        return 0;
    }

    if (((*front)->ptr == NULL) && ((*front) == (*rear))){
        free(*front);
        (*front) = NULL;
        (*rear) = NULL;
        return -1;
    }
    
    struct node * temp = (*front)->ptr;
    free(*front);
    (*front)=temp;
    return 1;
}


char fn_front(struct node * front){
    return front->data;
}

char fn_rear(struct node * rear){
    return rear->data;
}


int is_empty_queue(struct node * front,struct node * rear){
    if ((front == NULL) && (rear == front)){
        return 1;
    }
    return 0;
}


int fn_size(struct node * front){
    int i = 0;
    while(front != NULL){
        i++;
        front=front->ptr;
    }

    return i;
}


char get_one_by_one(struct node * front , struct node * rear, struct node ** ptr){

    if ((front == NULL) && (rear == front) && (*ptr == NULL)){
        return '\0';
    }

    // if ((*ptr) == NULL){
    //     (*ptr) = front->ptr;
    //     return front->data; 
    // }

    while((front) != NULL){
        if (front == *ptr){
            *ptr = front->ptr;

            return front->data;
        }
        front=front->ptr;
    }
    return '\0';    
}


void clear_queue(struct node ** front, struct node ** rear){
    struct node * temp;
    while (*front != NULL){
        temp = *front;
        *front = (*front)->ptr;
        free(temp);
    }
    *rear = NULL;   
}


// STACK 



int add_node(struct node ** top, char data){

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    
    if (*top == NULL){
        new_node->ptr = NULL;
        *top = new_node;
        return 1;
    }

    new_node->ptr = *top;
    *top = new_node;
    return 1;
}


int pop_node(struct node **top)
{
    if (*top == NULL)
        return 0;

    struct node *temp = (*top)->ptr;
    free(*top);
    *top = temp;
    return 1;
}

int is_empty_stack(struct node *top){
    if (top == NULL){
        return 1;
    }
    else  return 0;
}



char peek_node(struct node *top){
        return top->data;
}


void clear_stack(struct node ** top){
    struct node * temp;
    while (*top != NULL){
        temp = *top;
        *top = (*top)->ptr;
        free(temp);
    }
}




// -----------------------------------


// BRACKJET MATCHING FUNCTIONS 


int match_pair(char a, char b){
    if (a=='{' && b =='}'){
        return 1;
    }
    else if (a=='[' && b==']'){
        return 1;
    }
    else if (a=='(' && b==')'){
        return 1;
    }
    return 0;

}

int bracket_match(struct node ** front , struct node ** rear,struct node ** top){

    char front_data_queue;

    while(!is_empty_queue(*front,*rear)){

        front_data_queue = fn_front(*front);

        if (front_data_queue == '{' || front_data_queue == '[' || front_data_queue == '('){
            add_node(top,front_data_queue);}
        
        else if (front_data_queue==' '){}

        else if (front_data_queue == '}' || front_data_queue == ']' || front_data_queue == ')'){
            int state = is_empty_stack(*top);
            if (!state && match_pair(peek_node(*top),front_data_queue)){
                pop_node(top);
            }
            else{return 0;}
        }
        else{return 0;}
        dequeue(front,rear);
    }

        if (is_empty_stack(*top))
            return 1;
        else
            return 0;


};


int main(){

    struct node * front = NULL;
    struct node * rear = NULL;
    
    struct node * get_ptr = NULL;

    struct node * top = NULL;
    char temp;

    while (1){
        printf("Enter the brackets : ");
        while ((temp = getchar()) != '\n'){
            enqueue(&front,&rear,temp);
        }
        printf("\n");
        printf("+-----------+");
        printf("\n");
        printf("Brackets you entered : ");

        get_ptr = front;
        while((temp = get_one_by_one(front,rear,&get_ptr)) != '\0'){
            printf("%c",temp);
        }

        if (bracket_match(&front,&rear,&top) == 1){
            printf("\nMatched\n");
        }
        else {
            printf("\nDoesnt Matched\n");
            
        }
        printf("\n");
        printf("+-----------+");
        printf("\n");

        clear_queue(&front,&rear);
        clear_stack(&top);

        printf("Do you want to continue ? (Y/N)");
        temp = getchar();
        while (getchar() != '\n');
        if ((temp == 'N') || (temp == 'n')){
            break;
        }
        // fflush(stdin);
    }

    return 0;


}

// > fixesdone
// - clear/reset the nodes
// - here we have precidence conflict (temp = getchar()) != '\n'
// - increasing the frontn 
```

<!-- qrun:field-end code id="q-04-06" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-04-06" -->



<!-- qrun:field-end freshness id="q-04-06" -->

<!-- qrun:field-start output id="q-04-06" -->

```text
$ gcc q-04-06.c -o ./bin/q-04-06.out && ./bin/q-04-06.out
Enter the brackets : {}{}{}{}{}}{{][[][]][]][][][][[[][[]]

+-----------+
Brackets you entered : {}{}{}{}{}}{{][[][]][]][][][][[[][[]]
Doesnt Matched

+-----------+
Do you want to continue ? (Y/N)Y
Enter the brackets : {{{{{{{{{{{[][][][][]()()[][][][]}}}}}}}}}}

+-----------+
Brackets you entered : {{{{{{{{{{{[][][][][]()()[][][][]}}}}}}}}}}
Doesnt Matched

+-----------+
Do you want to continue ? (Y/N)N
```

<!-- qrun:field-end output id="q-04-06" -->
<!-- qrun:entry-end id="q-04-06" -->

<!-- qrun:topic-end id="topic-04" -->

<!-- qrun:topic-start id="topic-06" -->

<!-- qrun:field-start topic id="topic-06" -->

# Linked List

<!-- qrun:field-end topic id="topic-06" -->

<!-- qrun:entry-start id="q-06-01" -->

<!-- qrun:field-start question id="q-06-01" -->

## Q 01 : Implement a singly linked list storing integer values with insert at beginning, insert at position, insert at end, delete at beginning, delete at end, delete at position, isEmpty, isFull, display, and search operations.

<!-- qrun:field-end question id="q-06-01" -->

### CODE

<!-- qrun:field-start code id="q-06-01" -->

```c
// Linked List -> Q 01 : Implement a singly linked list storing integer values with insert at beginning, insert at position, insert at end, delete at beginning, delete at end, delete at position, isEmpty, isFull, display, and search operations.
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * nxt_ptr;
};


// |b| -> | | -> | | -> | | -> |e|
//  ^                           ^
//  |                           |
// beg                         end


int fn_size(struct node * beg,struct node *end);


int insert_at_beg(struct node ** beg,struct node ** end,int data){ 

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}

    new_node->data = data;
    new_node->nxt_ptr = NULL;

    if ((*beg) == NULL){
        (*beg) = new_node;
        (*end) = new_node;
        return -1;
    }
    // putting a new node nxy ptr to beg and theb beg = new node
    new_node->nxt_ptr = (*beg);
    (*beg) = new_node;
    
    
    return 1;
}


int insert_at_end(struct node ** end,struct node ** beg,int data){
    
    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    
    new_node->data = data;
    new_node->nxt_ptr = NULL;
    
    if (((*end) == NULL) && ((*beg) == NULL)) {
    (*beg) = new_node;
    (*end) = new_node;  
        return -1;
    }
    
    (*end)->nxt_ptr = new_node;
    (*end) = new_node;
    return 1;
}



int insert_at_pos(struct node ** end,struct node ** beg,int data,int pos){
    int n = 0; 
    int size = fn_size((*beg),(*end)) ;
    
    if (!((pos>=0) && (pos<=size))){return 0;}
    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    new_node->nxt_ptr = NULL;
    
    // if the ll is empty and adding at beg
    if (size == 0){                
        (*beg) = new_node;
        (*end) = new_node;
        return -1;
    }

    //if the insert at beg
    if (pos == 0){
        new_node->nxt_ptr = (*beg);
        (*beg) = new_node;
        return 1;
    }

    // if insert at end
    if (pos == size){
        (*end)->nxt_ptr = new_node;
        (*end) = new_node;
        return -2;
    }
    
    struct node * temp = (*beg);
    for (n;n<pos - 1;n++){
        temp = temp->nxt_ptr;
    }
    new_node->nxt_ptr = temp->nxt_ptr;
    temp->nxt_ptr = new_node;
    return 1;

}


int delete_at_beg(struct node ** beg,struct node ** end){
    
    if ((*beg) == NULL){
        return 0;
    }

    if (((*beg) == (*end)) && ((*beg)->nxt_ptr == NULL)){
        free((*beg));
        (*beg) = NULL;
        (*end) = NULL;
        return -1;
    }
    
    struct node * temp = (*beg)->nxt_ptr;
    free((*beg));
    (*beg) = temp;
    return 1;
}



int delete_at_end(struct node ** end,struct node ** beg){
    if ((*end) == NULL){
        return 0;
    }
    if (((*beg) == (*end)) && ((*beg)->nxt_ptr == NULL)){
        free((*beg));
        (*beg) = NULL;
        (*end) = NULL;
        return -1;
    }

    struct node * pre = (*beg);
    while(pre->nxt_ptr!=(*end)){
        // pre = temp;
        pre = pre->nxt_ptr;
    }

    pre->nxt_ptr = NULL;
    free((*end));
    (*end) = pre;
    return 1;
}

//so the thing if if size is 5 the
// index rtange os 0 - 4 , if i wnart to add at 2 , then i need
// the temp to hold the ptr of 1st indec becasue it have the next and next ; so i can insert the eleemnt 
//at that poistion change the address of n-1 index and the new node containing the ttemp->nxt_ptr ; FOR deletion we 
//also need the temp to has address of n-1 , temp will have to first get temp->nxtptr->nxtprt address and teh copy it to the temp nxtptr 


// IMPLEEMTAION

// but in fucntion impleemtion i did something weired insert utpo pre , delete upto the actual value then also trcked the pre 


int delete_at_pos(struct node ** end,struct node ** beg,int pos){
    int n = 0; 
    int size = fn_size((*beg),(*end));
    
    if (!((pos>=0) && (pos<=size))){return 0;}
    
    if ((size ==0)){
        return 0;
    }
    
    if (pos == 0){
        return (delete_at_beg(beg, end) == -1) ? -1 : 1;
    }
    if (pos == size - 1){
        return (delete_at_end(beg, end) == -1) ? -1 : 1;
    }
    
    struct node * temp = (*beg);
    struct node * pre = (*beg);
    for (n;n<pos;n++){
        pre=temp;
        temp=temp->nxt_ptr;
    }
    pre->nxt_ptr = temp->nxt_ptr;
    free(temp);
    return 1;
}


int search(struct node * end,struct node * beg,int data){
    if ((beg == NULL) && (end == beg)){
        return -2;
    }
    int i = 0;
    while(beg!=NULL){
        if (beg->data == data){
            return i;
        }
        i++;
        beg = beg->nxt_ptr;
    }
    return -1;
}


int sort(struct node **beg,struct node **end){

    int s = fn_size(*beg,*end);
    if (s==0){return 0;}
    int * arr = (int *)(malloc(sizeof(int)*s));

    struct node * temp = (*beg);
    for (int i = 0 ; i <s ; i++){
        arr[i]=temp->data;
        temp = temp->nxt_ptr;
    }
    temp = (*beg);
    
    //INSETION SORT 
    
    for (int i = 0 ; i < s - 1 ; i ++ ){
        for (int j = i+1 ; j > 0 ; j--){
            if (arr[j]<arr[j-1]){
                arr[j]=arr[j]+arr[j-1];
				arr[j-1]=arr[j]-arr[j-1];
				arr[j]=arr[j]-arr[j-1];
			}
            else{break;}
        }
    }
    
    for (int i = 0 ; i <s ; i++){
        temp->data=arr[i];
        temp = temp->nxt_ptr;
    }
    free(arr);
    return 1;

}


void show(struct node * beg,struct node * end){
    if ((end==NULL) && (end == beg)){
        printf("NO DATA");
        return;
    }
    
    if ((end == beg) && (end->nxt_ptr == NULL)){
        printf("|b>  %3d  <e|",beg->data);
        return;
    }
    
    int i = 0;
    
    printf("|b>   %3d   <%d|",beg->data,i);
    beg=beg->nxt_ptr;
    i++;
    while(beg->nxt_ptr!=NULL){
        printf("| >   %3d   <%d|", beg->data,i);
        beg = beg->nxt_ptr;
        i++;
    }
    printf("|e>   %3d   <%d|",beg->data,i);
    return;
}


int fn_size(struct node * beg,struct node * end){
    int i = 0;
    if ((end==NULL) && (end == beg)){
        return i;
    }
    while(beg!=NULL){
        i++;
        beg = beg->nxt_ptr;
    }
    return i;
}


int is_empty(struct node * beg,struct node * end){
    if (fn_size(beg,end) == 0){return 1;}
    return 0;
}


int clear_ll(struct node ** beg,struct node ** end){
    if (((*beg) == NULL) && ((*beg) == (*end))){
        return 0;
    }

    struct node * temp ;
    while((*beg)!= NULL){
        temp = (*beg);
        (*beg) = (*beg)->nxt_ptr;
        free(temp);
    }
    (*beg) = NULL;
    (*end) = NULL;
    return 1;
}



int main (){
   
    struct node * beg = NULL;
    struct node * end = NULL;
    int choice,input_val,out,pos;


    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : insert at beg\n");
        printf("2 : insert at end\n");
        printf("3 : delete at beg\n");
        printf("4 : delete at end\n");
        printf("5 : insert at pos\n");
        printf("6 : delete at pos\n");
        printf("7 : isempty\n");
        printf("8 : show\n");
        printf("9 : size\n");
        printf("10 : search\n");
        printf("11 : clear\n");
        printf("12 : sort\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number insert at beg : ");
            scanf("%d", &input_val);

            out = insert_at_beg(&beg,&end,input_val);
            if (out == 1)
                printf("%d inserted \n", input_val);
            else if (out == -1)
                printf("%d inserted and new linked list created \n", input_val);
            else
                printf("cant insert\n");
            break;
        case 2:
            printf("Enter the number insert at end : ");
            scanf("%d", &input_val);

            out = insert_at_end(&end,&beg,input_val);
            if (out == 1)
                printf("%d inserted \n", input_val);
            else if (out == -1)
                printf("%d inserted and new linked list created \n", input_val);
            else
                printf("cant insert\n");
            break;
            

        case 3:
            out = delete_at_beg(&beg,&end);
            if (out == 1)
                printf("Deleted value\n");
            else if (out == 0)
                printf("No Data \n");
            else
                printf("Linked List Reset \n");
            break;
        case 4:
            out = delete_at_end(&end,&beg);
            if (out == 1)
                printf("Deleted value\n");
            else if (out == 0)
                printf("No Data \n");
            else
                printf("Linked List Reset \n");
            break;

        case 5:
            printf("Enter the number insert : ");
            scanf("%d", &input_val);
            printf("Enter the position to insert  : ");
            scanf("%d", &pos);

            out = insert_at_pos(&end,&beg,input_val,pos);
            if (out == 1)
                printf("%d inserted at %d\n", input_val,pos);
            else if (out == -1)
                printf("%d inserted and new linked list created \n", input_val);
            else if (out == -2)
                printf("%d inserted at end \n", input_val);
            else
                printf("cant insert\n");
            break;

        case 6:
            show(beg,end);
            printf("\nEnter the position to delete : ");
            scanf("%d", &input_val);

            out = delete_at_pos(&end,&beg,input_val);
            if (out == 1)
                printf("%d Deleted \n", input_val);
            else if (out == -1)
                printf("%d deleted the last position \n", input_val);
            else if (out == -2)
                printf("deleted the beg eleement \n");
            else
                printf("Empty \n");
            break;

        case 7:
            out = is_empty(beg,end);
            if (out == 1)
                printf("Empty\n");
            else
                printf("Not empty \n");
            break;



        case 8:
            show(beg,end);
            break;
            
            case 9:
            printf("%d is the size of Linked List ", fn_size(beg,end));
            break;
            
            case 10:
            printf("Enter the element to search : ");
            scanf("%d", &input_val);
            out = search(end,beg,input_val);
            if (out == -2)
            printf("No data  \n");
            else if (out == -1)
            printf("Element Not Found\n");
            else
            printf("Element Found at %d \n",out);
            
            break;
            
            case 11:
                out = clear_ll(&beg,&end);
            if (out == 1)
                printf("Cleared \n");
            else
                printf("Cant Clear \n");
            break;

                
                case 12:
                if (is_empty(beg,end) != 1){show(beg,end);}
                    out = sort(&beg,&end);
                if (out == 1){
                    printf("Sorted\n");
                    show(beg,end);}
                else
                    printf("Cant Sort \n");
                break;

            case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }    


    return 0;
}
```

<!-- qrun:field-end code id="q-06-01" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-06-01" -->



<!-- qrun:field-end freshness id="q-06-01" -->

<!-- qrun:field-start output id="q-06-01" -->

```text
$ gcc q-06-01.c -o ./bin/q-06-01.out && ./bin/q-06-01.out

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 1
Enter the number insert at beg : 12
12 inserted and new linked list created 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>   12  <e|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 2
Enter the number insert at end : 244
244 inserted 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>    12   <0||e>   244   <1|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 5
Enter the number insert : 4435
Enter the position to insert  : 1
4435 inserted at 1

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>    12   <0|| >   4435   <1||e>   244   <2|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 7
Not empty 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 9
3 is the size of Linked List 
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 10
Enter the element to search : 12
Element Found at 0 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 12
|b>    12   <0|| >   4435   <1||e>   244   <2|Sorted
|b>    12   <0|| >   244   <1||e>   4435   <2|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 3
Deleted value

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>   244   <0||e>   4435   <1|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 4
Deleted value

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>  244  <e|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 6
|b>  244  <e|
Enter the position to delete : 0
0 deleted the last position 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
NO DATA
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 1
Enter the number insert at beg : 21313
21313 inserted and new linked list created 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 1
Enter the number insert at beg : 34
34 inserted 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 1
Enter the number insert at beg : 33
33 inserted 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 1
Enter the number insert at beg : 435
435 inserted 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>   435   <0|| >    33   <1|| >    34   <2||e>   21313   <3|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 11
Cleared 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
NO DATA
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 0
exitting ...
```

<!-- qrun:field-end output id="q-06-01" -->
<!-- qrun:entry-end id="q-06-01" -->


<!-- qrun:entry-start id="q-06-02" -->

<!-- qrun:field-start question id="q-06-02" -->

## Q 02 : Implement a singly circular linked list storing integer values with insert at beginning, insert at position, insert at end, delete at beginning, delete at end, delete at position, isEmpty, isFull, display, and search operations.

<!-- qrun:field-end question id="q-06-02" -->

### CODE

<!-- qrun:field-start code id="q-06-02" -->

```c
// Linked List -> Q 02 : Implement a singly circular linked list storing integer values with insert at beginning, insert at position, insert at end, delete at beginning, delete at end, delete at position, isEmpty, isFull, display, and search operations.
// CIRCULAR AND SIMPLEY LINEKLD LIST 

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * nxt_ptr;
};

//
// | | -> | | -> | | -> | | -> |e|
//  ^                           ^
//  | <----------------------- |
// beg                        end
//

int fn_size(struct node *end);

int insert_at_pos(struct node ** end,int data,int pos){

    int size = fn_size((*end));
    if (!((pos>=0) && (pos<=size))){return 0;}

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    new_node->nxt_ptr = NULL;

    // if the ll is empty and adding at beg
    if (size == 0){                
        (*end) = new_node;
        (*end)->nxt_ptr = new_node;
        return -1;    }

    //if the insert at beg
    if (pos == 0){
        new_node->nxt_ptr = (*end)->nxt_ptr;
        (*end)->nxt_ptr = new_node;
        return -2;
    }

    // if insert at end
    if (pos == size){
        new_node->nxt_ptr = (*end)->nxt_ptr; // adding the beg to new node
        (*end)->nxt_ptr = new_node;
        (*end) = new_node; // new end
        return -3;
    }

    struct node * temp = (*end)->nxt_ptr;
    for (int n= 0;n<pos-1;n++){ // we are doing ti because we havin temp hs nxtptr so like if we want to insert at 3 , 
        // we need to have the the temp ahving the address or 2nd pos 
        // because 2nd will have the addfress of 3rd pos waht er want to modify ,  
        // it will run for 0,1 
        // after 0 the temp = 1 , temp->nxt_ptr = 2
        // after 0 the temp = 2 , temp->nxt_ptr = 3
        // so we have to loop it pos -2 times as we are doing by -1 and <

        temp = temp->nxt_ptr;
    }
    new_node->nxt_ptr= temp->nxt_ptr; // so we are making new node nxt ptr to the prev3 pos node
    temp->nxt_ptr = new_node; // and then updating it 
    return 1;
}


int delete_at_pos(struct node ** end,int pos){

    int size = fn_size((*end));
    if (size == 0){return -1;} //if empty
    if (!((pos>=0) && (pos<size))){return 0;} // not valid pos

    if(size == 1){ //if one eleemnt only reset
        free((*end));
        (*end) =NULL;
        return -4;
    }

    if (pos==0){ //deleted beg
        struct node * temp = (*end)->nxt_ptr; // beg
        (*end)->nxt_ptr = temp->nxt_ptr; // updating the new beg
        free(temp); //delete the beg
        return -2;
    }


    if (pos==size-1){//delete at end
        struct node * temp = (*end)->nxt_ptr; //beg
        while(temp->nxt_ptr!=(*end)){ //traverse upto end - 1 node 
            temp=temp->nxt_ptr;
        }
        temp->nxt_ptr = (*end)->nxt_ptr; // end - 1 node ->nxt_ptr = beg 
        free((*end)); //free end
        (*end) = temp; // new end
        return -3;
    }

    struct node * temp = (*end)->nxt_ptr; // beg
    for(int i=0;i<pos-1;i++){ // upto pos -2 so  temp has ptr to pos node -1 and its nxtptr has the posptr  
        temp=temp->nxt_ptr;
    }
    // temp->nxt_ptr = temp->nxt_ptr->nxt_ptr ; we cant do this what if we had a while loop because we cant determin whetehr the nxt prt has a valid node or not
    //but beacuse of the size -1 conndtion it is granteed that temp-nt ptr has a node 
    struct node * temp2 = temp->nxt_ptr;
    temp->nxt_ptr = temp->nxt_ptr->nxt_ptr;
    free(temp2);
    return 1;

}


int fn_size(struct node *end){
    if (end == NULL){return 0;}
    int i = 0;
    struct node * temp = end->nxt_ptr;

    do {
        i++;
        temp=temp->nxt_ptr;
    }
    while(temp!=end->nxt_ptr);
    return i;
}


int search(struct node * end,int data){
    if (end == NULL){
        return -2;
    }
    int i=0;
    struct node * temp = end->nxt_ptr;
    // if (temp->data == data){ // we cna have do while here 
    //         return i;
    //     }
    // temp=temp->nxt_ptr;
    // i++;
    // while(temp != (end->nxt_ptr)){
    //     if (temp->data == data){
    //         return i;
    //     }
    //     i++;
    //     temp=temp->nxt_ptr;
    // }


    do {
        if (temp->data == data) {
            return i;
        }

        temp = temp->nxt_ptr;
        i++;

    } while (temp != end->nxt_ptr);

    return -1;

}


int sort(struct node **end){

    int s = fn_size(*end);
    if (s == 0){return 0;}// if size == 0
    int * arr = (int *)(malloc(sizeof(int)*s));
    if (arr == NULL){return 0;} // if malloc faisl

    struct node * temp = (*end)->nxt_ptr;
    for (int i = 0; i<s ; i++){
        arr[i]=temp->data;
        temp=temp->nxt_ptr;
    }
    temp=(*end)->nxt_ptr; //for reenter the sorted values in same ll

    for (int i = 0; i < s - 1; i++) {
        for (int j = i + 1; j > 0; j--) {   
            if (arr[j] < arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else {break;}
        }}

    for(int i =0;i<s;i++){ //updating sorted value in the same ll
        temp->data = arr[i];
        temp=temp->nxt_ptr;
    }
    free(arr);
    return 1;

}

void show(struct node * end){
    if ((end==NULL)){
        printf("NO DATA");
        return;
    }
    
    struct node * beg = end->nxt_ptr;
    if ((end == beg)){
        printf("|b>  %3d  <e|",beg->data);
        return;
    }
    
    int i = 0;
    printf("|b>   %3d   <%d|",beg->data,i); // first node 
    beg=beg->nxt_ptr;
    i++;
    while(beg->nxt_ptr!=end->nxt_ptr){ // will work last node - 1
        printf("| >   %3d   <%d|", beg->data,i);
        beg = beg->nxt_ptr;
        i++;
    }
    printf("|e>   %3d   <%d|",beg->data,i); // last node 
    return;
}


int is_empty(struct node * end){
    if (fn_size(end) == 0){return 1;}
    return 0;
}

int clear_ll(struct node ** end){
    if ((*end) == NULL){return 0;}
    struct node * stop = (*end);        
    struct node * curr = stop->nxt_ptr; 
    struct node * temp;

    while (curr != stop){               
        temp = curr;
        curr = curr->nxt_ptr;
        free(temp);
    }
    free(stop);                         
    (*end) = NULL;
    return 1;
}



int main (){
   
    struct node * end = NULL;
    int choice,input_val,out,pos;


    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : insert at beg\n");
        printf("2 : insert at end\n");
        printf("3 : delete at beg\n");
        printf("4 : delete at end\n");
        printf("5 : insert at pos\n");
        printf("6 : delete at pos\n");
        printf("7 : isempty\n");
        printf("8 : show\n");
        printf("9 : size\n");
        printf("10 : search\n");
        printf("11 : clear\n");
        printf("12 : sort\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number insert at beg : ");
            scanf("%d", &input_val);

            out = insert_at_pos(&end,input_val,0); //inser at beg
            if (out == -2)
                printf("%d inserted \n", input_val);
            else if (out == -1)
                printf("%d inserted and new linked list created \n", input_val);
            else
                printf("cant insert\n");
            break;
        case 2:
            printf("Enter the number insert at end : ");
            scanf("%d", &input_val);

            out = insert_at_pos(&end,input_val,fn_size(end)); //insert at end
            if (out == -3)
                printf("%d inserted \n", input_val);
            else if (out == -1)
                printf("%d inserted and new linked list created \n", input_val);
            else
                printf("cant insert\n");
            break;
            

        case 3:
            out = delete_at_pos(&end,0); //deelte at beg
            if (out == 1) // sucess
                printf("Deleted value at beg\n");
            else if (out == -1) // no data
                printf("No Data \n");
            else if(out == -4) // reset the ll if one eleemt only
                printf("Linked List Reset \n");
            break;


        case 4:
            out = delete_at_pos(&end,fn_size(end));//delete at end
            if (out == -3) //sucess
                printf("Deleted value at end\n");
            else if (out == -1) //no data 
                printf("No Data \n");
            else if (out == -4)//reset if only one eleement
                printf("Linked List Reset \n");
            break;

        case 5:
            printf("Enter the number insert : ");
            scanf("%d", &input_val);
            printf("Enter the position to insert  : ");
            scanf("%d", &pos);

            out = insert_at_pos(&end,input_val,pos);
            if (out == 1)
                printf("%d inserted at %d\n", input_val,pos);
            else if (out == -1)
                printf("%d inserted and new linked list created \n", input_val);
            else if (out == -2)
                printf("%d inserted at beg \n", input_val);
            else if (out == -3)
                printf("%d inserted at end \n", input_val);
            else
                printf("cant insert\n");
            break;

        case 6:
            show(end);
            out=is_empty(end);
            if (out == 1){break;}
            printf("\nEnter the position to delete : ");
            scanf("%d", &input_val);

            out = delete_at_pos(&end,input_val);
            if (out == 1)
                printf("%d Deleted \n", input_val);
            else if (out == -1)
                printf("no data \n");//if no data
            else if (out == -2)
                printf("%d deleted the beg \n", input_val);
            else if (out == -3)
                printf("deleted the end \n");
            else if (out == -4)
                printf("Resseted the ll\n"); // if onlu one eleemt
            else
                printf("Empty \n");
            break;

        case 7:
            out = is_empty(end);
            if (out == 1)
                printf("Empty\n");
            else
                printf("Not empty \n");
            break;


        case 8:
            show(end);
            break;
            
            case 9:
            printf("%d is the size of Linked List ", fn_size(end));
            break;
            
            case 10:
            printf("Enter the element to search : ");
            scanf("%d", &input_val);
            out = search(end,input_val);
            if (out == -2)
            printf("No data  \n");
            else if (out == -1)
            printf("Element Not Found\n");
            else
            printf("Element Found at %d \n",out);
            
            break;
            
            case 11:
                out = clear_ll(&end);
            if (out == 1)
                printf("Cleared \n");
            else
                printf("Already empty \n");
            break;

                
                case 12:
                if (is_empty(end) != 1){show(end);}

                out = sort(&end);

                if (out == 1){
                    printf("\nSorted\n");
                    show(end);}
                else
                    printf("Cant Sort \n");
                break;

            case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }    


    return 0;
}
```

<!-- qrun:field-end code id="q-06-02" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-06-02" -->



<!-- qrun:field-end freshness id="q-06-02" -->

<!-- qrun:field-start output id="q-06-02" -->

```text
$ gcc q-06-02.c -o ./bin/q-06-02.out && ./bin/q-06-02.out

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 1
Enter the number insert at beg : 244
244 inserted and new linked list created 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 2
Enter the number insert at end : 355
355 inserted 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 1
Enter the number insert at beg : 12
12 inserted 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>    12   <0|| >   244   <1||e>   355   <2|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 5
Enter the number insert : 1
Enter the position to insert  : 50
cant insert

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>    12   <0|| >   244   <1||e>   355   <2|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 3

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>   244   <0||e>   355   <1|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 4

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>   244   <0||e>   355   <1|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 7
Not empty 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 9
2 is the size of Linked List 
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 10
Enter the element to search : 244
Element Found at 0 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 1
Enter the number insert at beg : 34
34 inserted 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 1
Enter the number insert at beg : 56
56 inserted 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>    56   <0|| >    34   <1|| >   244   <2||e>   355   <3|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 12
|b>    56   <0|| >    34   <1|| >   244   <2||e>   355   <3|
Sorted
|b>    34   <0|| >    56   <1|| >   244   <2||e>   355   <3|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 11
Cleared 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
NO DATA
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 0
exitting ...
```

<!-- qrun:field-end output id="q-06-02" -->
<!-- qrun:entry-end id="q-06-02" -->


<!-- qrun:entry-start id="q-06-03" -->

<!-- qrun:field-start question id="q-06-03" -->

## Q 03 : Implement a doubly linked list storing integer values with insert at beginning, insert at position, insert at end, delete at beginning, delete at end, delete at position, isEmpty, isFull, display, and search operations.

<!-- qrun:field-end question id="q-06-03" -->

### CODE

<!-- qrun:field-start code id="q-06-03" -->

```c
// Linked List -> Q 03 : Implement a doubly linked list storing integer values with insert at beginning, insert at position, insert at end, delete at beginning, delete at end, delete at position, isEmpty, isFull, display, and search operations.
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * pre_ptr;
    struct node * nxt_ptr;
}; // doubly linked list node 

// |beg | -> | | -> | | -> | | -> |NULL|
// |NULL| <- | | <- | | <- | | <- |end |
//  ^                           ^
//  |                           |
// beg                         end


// size fn 

int fn_size(struct node * beg, struct node * end){
    if ((beg)==NULL && (end)==NULL){
        return 0;
    } // size is zero 
    int i = 0;
    while(beg!=NULL){
        i++;
        beg=beg->nxt_ptr;
    }
    return i;
}


// things to manage : size = 0,1 ; 

// 1. insert at 0,end when size = 0 ; 
// 2. insert at 0,end ; 
// 3. insert at pos ; 
// 4. insert at pos when s = 0; 
// 5. is malloc working ; 
// 6. insert at beg and end when size =! 0 , 1

int  insert_at_pos(struct node ** beg,struct node ** end,int data,int pos){
 
    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}

    new_node->data = data;
    new_node->pre_ptr = NULL;
    new_node->nxt_ptr = NULL;

    int s = fn_size(*beg,*end);

    if(pos>s){return 0;}

    if ((s == 0) && ((pos == 0) || (pos !=0))){  // it will manage the size  = 0 , and if size and pos = 0 and whatever pos when size =0 , abd end ie end will be calacuated by the fn_size while passing argunment 
        // beg 
        (*beg)=new_node;
        (*beg)->pre_ptr = NULL;
        (*beg)->nxt_ptr = NULL;
        
        //end
        (*end)=new_node;
        (*end)->pre_ptr = NULL;
        (*end)->nxt_ptr = NULL;

        return -1;
    }
    
    if (s == 1){ // if hte isze is one both are pointing to a single node with that node nxt and pre = null
        if (pos == 0){ // if the user want to put bfore the single eleement 
            (*beg)->pre_ptr = new_node; 
            new_node->nxt_ptr = (*beg); // size 1 and beg
            (*beg) = new_node;
            return -2;
        }

        if (pos == 1){ // if the user want to put afete the single element
            (*beg)->nxt_ptr = new_node;
            (new_node)->pre_ptr = (*beg); // size 1 and beg
            (*end) = new_node;
            return -3;
        }
    }

    struct node * temp;

    // if the user want to add at beg and end if size not =! 0 , 1
    if ((s!=0)&&(s!=1)) {
        if (pos==0){
            new_node->nxt_ptr = (*beg);
            (*beg)->pre_ptr = new_node;
            (*beg) = new_node ;
            return -4;
        }
        else if (pos == s){
            (new_node)->pre_ptr  = (*end);
            (*end)->nxt_ptr = (new_node);
            (*end) = new_node;
            return -7;
        }
    }



    // INSERT at pos when size != 0 

    if (pos < s/2){ // traverse form the beg
        temp = (*beg);
        for (int i = 0; i<pos-1; i++){
            temp = temp->nxt_ptr;
        }

        // position:   0       1       2       3
        //    [10] → [20] → [30] → [40]
        //              ↑       ↑
        //            temp     wanted that is why we need -1 
        new_node->nxt_ptr = temp->nxt_ptr;
        new_node->pre_ptr = temp;
        temp->nxt_ptr->pre_ptr = new_node;
        temp->nxt_ptr = new_node; 
        return -5;

    }
    else { //  traverse form the end
        temp = (*end);
        for(int i = 0; i<s-1-pos; i++){
            temp=temp->pre_ptr;
        }
        new_node->pre_ptr = temp->pre_ptr;
        new_node->nxt_ptr = temp;
        temp->pre_ptr->nxt_ptr = new_node;
        temp->pre_ptr = new_node; 
        return -6;
    }


    return 0;

}



//  DELETE 

// case to handel : empty ; 

// 1. empty & pos 0,end or N ;
// 2. s = 1 , pos is x , 0 ,end ;  
// 3. s > 1 , 0 , end ; 
// 4. s > 1 , pos ;


int delete_at_pos(struct node ** beg,struct node ** end,int pos){

    int s = fn_size((*beg),(*end));
    
    if ((pos < 0) || (pos >= s && !(s == 1 && pos == 1))){ // 1. size is 0 and size = 1 or pos >1 ( 1. & 2. ) 
        return 0;
    }

    if ((s==1) && (((pos == 0) || (pos==1)))){ //  2. if size = 1 ,ans pos is the beg 
        free((*beg));
        (*beg)=NULL;
        (*end)=NULL;
        return 1;
    } 

    
    struct node * temp;

    // 3. size is != 0,1 and pos is 0,end

    if (pos == 0){
        temp= (*beg)->nxt_ptr;
        temp->pre_ptr = NULL;
        free((*beg));
        (*beg)= temp;
        return -1;
    }
    else if (pos == s-1){
        temp = (*end)->pre_ptr;
        temp->nxt_ptr = NULL;
        free((*end));
        (*end) = temp;
        return -5 ;
    }



    // 4. if the size != 0,1 and pos n

    if (pos < s/2) { // traverse from beg
        temp = (*beg);
        for (int i = 0 ; i < pos ; i++ ){
            temp=temp->nxt_ptr; 
        }
    temp->pre_ptr->nxt_ptr = temp->nxt_ptr;
    temp->nxt_ptr->pre_ptr = temp->pre_ptr;
        free(temp);
        return -2;
    }
    else { // traverse from end
        temp = (*end);
        for (int i = 0 ; i < s - 1 - pos ; i++ ){
                temp=temp->pre_ptr; 
        }
        temp->pre_ptr->nxt_ptr = temp->nxt_ptr; 
        temp->nxt_ptr->pre_ptr = temp->pre_ptr;
        free(temp);
        return -3;
    }

    return -4;

}




// SEARCH 

// 1. if empty -> -1
// 2. if found then index 
// 3. if not found then -2


int search(struct node * beg,int data){ 
    if (beg ==  NULL){
        return -1;
    }
    int i = 0;
    while(beg!=NULL){
        if (beg->data == data){break; return i;}
        i++;
        beg = beg->nxt_ptr;
    }
    return -2;
}

// SORT 

// 1. if done then 1
// 2. if empty then 0 or malloc fail


int sort(struct node ** beg,struct node ** end){
    if (((*beg) == NULL) && ((*end) == NULL)){ // EMPTY
        return 0;
    }

    int s = fn_size(*beg,*end);
    int * arr = (int *)(malloc(sizeof(int) *s)); 
    if (arr == NULL){return 0;}

    // copting form the ll too arr 
    struct node * temp = (*beg);
    for (int i = 0; i < s; i++){
        arr[i] = (temp)->data;
        (temp) = temp->nxt_ptr;
    }
    temp = (*beg); // RESET IT FOr FURTENR SORTED COPY 

    // INSERTION SORT 

        for (int i = 0; i < s - 1; i++) {
        for (int j = i + 1; j > 0; j--) {   
            if (arr[j] < arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else {break;}
        }}

    // COPY THEM BACK 
    for(int i =0;i<s;i++){
        temp->data = arr[i];
        temp=temp->nxt_ptr;
    }
    free(arr);
    return 1;
}

// SHOW 

// 1. if no data : no data 
// if one element : then special prient 
// if n > 1 ; while loop ; 

void show(struct node * beg,struct node * end){
    if (beg == NULL){
        printf("No DATA");
        return ;
    }

    if ((end == beg) && (end->pre_ptr == NULL) && (beg->nxt_ptr== NULL)){
        printf("|b>  %3d  <e|",beg->data);
        return;
    }
    
    int i = 0;
    printf("|b>   %3d   <%d|",beg->data,i);
    beg=beg->nxt_ptr;
    i++;
    while(beg->nxt_ptr!=NULL){
        printf("| >   %3d   <%d|", beg->data,i);
        beg = beg->nxt_ptr;
        i++;
    }
    printf("|e>   %3d   <%d|",beg->data,i);
    return;
}



int is_empty(struct node * beg,struct node * end){
    if (fn_size(beg,end) == 0){return 1;}
    return 0;
}

// CLEAR THE LL 

int clear_ll(struct node ** beg,struct node ** end){
    if (((*beg) == NULL) && ((*beg) == (*end))){
        return 0;
    }

    struct node * temp ;
    while((*beg)!= NULL){
        temp = (*beg);
        (*beg) = (*beg)->nxt_ptr;
        free(temp);
    }
    (*beg) = NULL;
    (*end) = NULL;
    return 1;
}


int main(){

    struct node * beg = NULL;
    struct node * end = NULL;
    int choice,input_val,out,pos;


    while (1)
    {

        printf("\nEnter the choice :\n");
        printf("1 : insert at beg\n");
        printf("2 : insert at end\n");
        printf("3 : delete at beg\n");
        printf("4 : delete at end\n");
        printf("5 : insert at pos\n");
        printf("6 : delete at pos\n");
        printf("7 : isempty\n");
        printf("8 : show\n");
        printf("9 : size\n");
        printf("10 : search\n");
        printf("11 : clear\n");
        printf("12 : sort\n");
        printf("0 : exit\n");

        printf("Enter choice : ");
        scanf("%d", &choice);


        switch (choice)
        {

        case 1:

         /// INSERT AT BEG 

            printf("Enter the number insert at beg : ");
            scanf("%d", &input_val);

            out = insert_at_pos(&beg,&end,input_val,0);

            if (out == -1)
                printf("%d inserted and init a new linked list size is 1 \n",input_val);

            else if (out == -2)
                printf("inserted %d at beg and size of linked list size is 2\n",input_val);
            else if (out == -4)
                printf("inserted %d at beg\n",input_val);
            else // zero 
                printf("cant insert\n");

            break;


        case 2:

        /// INSERT AT END 

            printf("Enter the number insert at end : ");
            scanf("%d", &input_val);

            out = insert_at_pos(&end,&beg,input_val,fn_size(beg,end));

            if (out == -1)
                printf("%d inserted and init a new linked list size is 1 \n",input_val);
            else if (out == -3)
                printf("%d inserted at end and linked list size is 2 \n",input_val);
            else if (out == -7)
                printf("%d inserted at end \n",input_val);
            else
                printf("cant insert\n");

            break;


        case 3:

        // DEELTE AT BEG

            out = delete_at_pos(&beg,&end,0);

            if (out == -1)
                printf("Deleted value\n");
            else if (out == 1)
                printf("Linked List Reset \n");
                
            else if (out == 0)
                printf("cant delete \n");

            break;


        case 4:

         /// DELETE AT END

            out = delete_at_pos(&end,&beg,fn_size(beg,end));

            if (out == -5)
                printf("Deleted value\n");
            else if (out == 1)
                printf("Linked List Reset \n");
                
            else if (out == 0)
                printf("cant delete \n");

            break;


        case 5:

            printf("Enter the number insert : ");
            scanf("%d", &input_val);

            printf("Enter the position to insert : ");
            scanf("%d", &pos);

            out = insert_at_pos(&beg,&end,input_val,pos);

            if (out == -1)
                printf("%d inserted and new linked list created \n",input_val);

            else if (out == -2)
                printf("%d inserted before the single element \n",input_val);

            else if (out == -3)
                printf("%d inserted after the single element \n",input_val);

            else if (out == -4)
                printf("%d inserted at beg \n",input_val);
            else if (out == -7)
                printf("%d inserted at end \n",input_val);

            else if (out == -5)
                printf("%d inserted at position (b->e) %d \n",input_val,pos);

            else if (out == -6)
                printf("%d inserted at position (b<-e) %d \n",input_val,pos);
            else
                printf("cant insert\n");

            break;


        case 6:

            show(beg,end);

            printf("\nEnter the position to delete : ");
            scanf("%d", &pos);

            out = delete_at_pos(&beg,&end,pos);

            if (out == 1)
                printf("Linked List %d\n",pos);

            else if (out == -1)
                printf("%d deleted the first position \n",pos);
            else if (out == -5)
                printf("%d deleted the last position \n",pos);

            else if (out == -2)
                printf("deleted the element (b->e)\n");
            else if (out == -3)
                printf("deleted the element (b<-e) \n");
            else
                printf("Cant Delete\n"); // zero or unvalid pos

            break;


        case 7:

            out = is_empty(beg,end);

            if (out == 1)
                printf("Empty\n");

            else
                printf("Not empty \n");

            break;


        case 8:

            show(beg,end);
            break;


        case 9:

            printf("%d is the size of Linked List ",fn_size(beg,end));
            break;


        case 10:

            printf("Enter the element to search : ");
            scanf("%d", &input_val);

            out = search(beg,input_val);

            if (out == -1)
                printf("No data  \n");

            else if (out == -2)
                printf("Element Not Found\n");

            else
                printf("Element Found at %d \n",out);

            break;


        case 11:

            out = clear_ll(&beg,&end);

            if (out == 1)
                printf("Cleared \n");

            else
                printf("Cant Clear \n");

            break;


        case 12:

            if (is_empty(beg,end) != 1)
                show(beg,end);

            out = sort(&beg,&end);

            if (out == 1){
                printf("\nSorted\n");
                show(beg,end);
            }
            else
                printf("Cant Sort \n");

            break;


        case 0:

            printf("exitting ...\n");

            if (beg != NULL)
                clear_ll(&beg,&end);

            return 0;


        default:

            printf("Invalid choice\n");

        }
    }


    return 0;
}

```

<!-- qrun:field-end code id="q-06-03" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-06-03" -->



<!-- qrun:field-end freshness id="q-06-03" -->

<!-- qrun:field-start output id="q-06-03" -->

```text
$ gcc q-06-03.c -o ./bin/q-06-03.out && ./bin/q-06-03.out

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 1
Enter the number insert at beg : 212
212 inserted and init a new linked list size is 1 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 1
Enter the number insert at beg : 23
inserted 23 at beg and size of linked list size is 2

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 1
Enter the number insert at beg : 2
inserted 2 at beg

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 1
Enter the number insert at beg : 56
inserted 56 at beg

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>    56   <0|| >     2   <1|| >    23   <2||e>   212   <3|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 2
Enter the number insert at end : 20
cant insert

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>    56   <0|| >     2   <1|| >    23   <2||e>   212   <3|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 3
Deleted value

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>     2   <0|| >    23   <1||e>   212   <2|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 4
cant delete 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>     2   <0|| >    23   <1||e>   212   <2|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 5
Enter the number insert : 1
Enter the position to insert : 500
cant insert

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>     2   <0|| >    23   <1||e>   212   <2|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 7
Not empty 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 9
3 is the size of Linked List 
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 10
Enter the element to search : 2
Element Not Found

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 12
|b>     2   <0|| >    23   <1||e>   212   <2|
Sorted
|b>     2   <0|| >    23   <1||e>   212   <2|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 11
Cleared 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
No DATA
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 0
exitting ...
```

<!-- qrun:field-end output id="q-06-03" -->
<!-- qrun:entry-end id="q-06-03" -->


<!-- qrun:entry-start id="q-06-04" -->

<!-- qrun:field-start question id="q-06-04" -->

## Q 04 : Implement a doubly circular linked list storing integer values with insert at beginning, insert at position, insert at end, delete at beginning, delete at end, delete at position, isEmpty, isFull, display, and search operations.

<!-- qrun:field-end question id="q-06-04" -->

### CODE

<!-- qrun:field-start code id="q-06-04" -->

```c
// Linked List -> Q 04 : Implement a doubly circular linked list storing integer values with insert at beginning, insert at position, insert at end, delete at beginning, delete at end, delete at position, isEmpty, isFull, display, and search operations.
// CIRCULAR AND SIMPLEY LINEKLD LIST 

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * nxt_ptr;
};

//
// | | -> | | -> | | -> | | -> |e|
//  ^                           ^
//  | <----------------------- |
// beg                        end
//

int fn_size(struct node *end);

int insert_at_pos(struct node ** end,int data,int pos){

    int size = fn_size((*end));
    if (!((pos>=0) && (pos<=size))){return 0;}

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    new_node->nxt_ptr = NULL;

    // if the ll is empty and adding at beg
    if (size == 0){                
        (*end) = new_node;
        (*end)->nxt_ptr = new_node;
        return -1;    }

    //if the insert at beg
    if (pos == 0){
        new_node->nxt_ptr = (*end)->nxt_ptr;
        (*end)->nxt_ptr = new_node;
        return -2;
    }

    // if insert at end
    if (pos == size){
        new_node->nxt_ptr = (*end)->nxt_ptr; // adding the beg to new node
        (*end)->nxt_ptr = new_node;
        (*end) = new_node; // new end
        return -3;
    }

    struct node * temp = (*end)->nxt_ptr;
    for (int n= 0;n<pos-1;n++){ // we are doing ti because we havin temp hs nxtptr so like if we want to insert at 3 , 
        // we need to have the the temp ahving the address or 2nd pos 
        // because 2nd will have the addfress of 3rd pos waht er want to modify ,  
        // it will run for 0,1 
        // after 0 the temp = 1 , temp->nxt_ptr = 2
        // after 0 the temp = 2 , temp->nxt_ptr = 3
        // so we have to loop it pos -2 times as we are doing by -1 and <

        temp = temp->nxt_ptr;
    }
    new_node->nxt_ptr= temp->nxt_ptr; // so we are making new node nxt ptr to the prev3 pos node
    temp->nxt_ptr = new_node; // and then updating it 
    return 1;
}


int delete_at_pos(struct node ** end,int pos){

    int size = fn_size((*end));
    if (size == 0){return -1;} //if empty
    if (!((pos>=0) && (pos<size))){return 0;} // not valid pos

    if(size == 1){ //if one eleemnt only reset
        free((*end));
        (*end) =NULL;
        return -4;
    }

    if (pos==0){ //deleted beg
        struct node * temp = (*end)->nxt_ptr; // beg
        (*end)->nxt_ptr = temp->nxt_ptr; // updating the new beg
        free(temp); //delete the beg
        return -2;
    }


    if (pos==size-1){//delete at end
        struct node * temp = (*end)->nxt_ptr; //beg
        while(temp->nxt_ptr!=(*end)){ //traverse upto end - 1 node 
            temp=temp->nxt_ptr;
        }
        temp->nxt_ptr = (*end)->nxt_ptr; // end - 1 node ->nxt_ptr = beg 
        free((*end)); //free end
        (*end) = temp; // new end
        return -3;
    }

    struct node * temp = (*end)->nxt_ptr; // beg
    for(int i=0;i<pos-1;i++){ // upto pos -2 so  temp has ptr to pos node -1 and its nxtptr has the posptr  
        temp=temp->nxt_ptr;
    }
    // temp->nxt_ptr = temp->nxt_ptr->nxt_ptr ; we cant do this what if we had a while loop because we cant determin whetehr the nxt prt has a valid node or not
    //but beacuse of the size -1 conndtion it is granteed that temp-nt ptr has a node 
    struct node * temp2 = temp->nxt_ptr;
    temp->nxt_ptr = temp->nxt_ptr->nxt_ptr;
    free(temp2);
    return 1;

}


int fn_size(struct node *end){
    if (end == NULL){return 0;}
    int i = 0;
    struct node * temp = end->nxt_ptr;

    do {
        i++;
        temp=temp->nxt_ptr;
    }
    while(temp!=end->nxt_ptr);
    return i;
}


int search(struct node * end,int data){
    if (end == NULL){
        return -2;
    }
    int i=0;
    struct node * temp = end->nxt_ptr;
    // if (temp->data == data){ // we cna have do while here 
    //         return i;
    //     }
    // temp=temp->nxt_ptr;
    // i++;
    // while(temp != (end->nxt_ptr)){
    //     if (temp->data == data){
    //         return i;
    //     }
    //     i++;
    //     temp=temp->nxt_ptr;
    // }


    do {
        if (temp->data == data) {
            return i;
        }

        temp = temp->nxt_ptr;
        i++;

    } while (temp != end->nxt_ptr);

    return -1;

}


int sort(struct node **end){

    int s = fn_size(*end);
    if (s == 0){return 0;}// if size == 0
    int * arr = (int *)(malloc(sizeof(int)*s));
    if (arr == NULL){return 0;} // if malloc faisl

    struct node * temp = (*end)->nxt_ptr;
    for (int i = 0; i<s ; i++){
        arr[i]=temp->data;
        temp=temp->nxt_ptr;
    }
    temp=(*end)->nxt_ptr; //for reenter the sorted values in same ll

    for (int i = 0; i < s - 1; i++) {
        for (int j = i + 1; j > 0; j--) {   
            if (arr[j] < arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else {break;}
        }}

    for(int i =0;i<s;i++){ //updating sorted value in the same ll
        temp->data = arr[i];
        temp=temp->nxt_ptr;
    }
    free(arr);
    return 1;

}

void show(struct node * end){
    if ((end==NULL)){
        printf("NO DATA");
        return;
    }
    
    struct node * beg = end->nxt_ptr;
    if ((end == beg)){
        printf("|b>  %3d  <e|",beg->data);
        return;
    }
    
    int i = 0;
    printf("|b>   %3d   <%d|",beg->data,i); // first node 
    beg=beg->nxt_ptr;
    i++;
    while(beg->nxt_ptr!=end->nxt_ptr){ // will work last node - 1
        printf("| >   %3d   <%d|", beg->data,i);
        beg = beg->nxt_ptr;
        i++;
    }
    printf("|e>   %3d   <%d|",beg->data,i); // last node 
    return;
}


int is_empty(struct node * end){
    if (fn_size(end) == 0){return 1;}
    return 0;
}

int clear_ll(struct node ** end){
    if ((*end) == NULL){return 0;}
    struct node * stop = (*end);        
    struct node * curr = stop->nxt_ptr; 
    struct node * temp;

    while (curr != stop){               
        temp = curr;
        curr = curr->nxt_ptr;
        free(temp);
    }
    free(stop);                         
    (*end) = NULL;
    return 1;
}



int main (){
   
    struct node * end = NULL;
    int choice,input_val,out,pos;


    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : insert at beg\n");
        printf("2 : insert at end\n");
        printf("3 : delete at beg\n");
        printf("4 : delete at end\n");
        printf("5 : insert at pos\n");
        printf("6 : delete at pos\n");
        printf("7 : isempty\n");
        printf("8 : show\n");
        printf("9 : size\n");
        printf("10 : search\n");
        printf("11 : clear\n");
        printf("12 : sort\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number insert at beg : ");
            scanf("%d", &input_val);

            out = insert_at_pos(&end,input_val,0); //inser at beg
            if (out == -2)
                printf("%d inserted \n", input_val);
            else if (out == -1)
                printf("%d inserted and new linked list created \n", input_val);
            else
                printf("cant insert\n");
            break;
        case 2:
            printf("Enter the number insert at end : ");
            scanf("%d", &input_val);

            out = insert_at_pos(&end,input_val,fn_size(end)); //insert at end
            if (out == -3)
                printf("%d inserted \n", input_val);
            else if (out == -1)
                printf("%d inserted and new linked list created \n", input_val);
            else
                printf("cant insert\n");
            break;
            

        case 3:
            out = delete_at_pos(&end,0); //deelte at beg
            if (out == 1) // sucess
                printf("Deleted value at beg\n");
            else if (out == -1) // no data
                printf("No Data \n");
            else if(out == -4) // reset the ll if one eleemt only
                printf("Linked List Reset \n");
            break;


        case 4:
            out = delete_at_pos(&end,fn_size(end));//delete at end
            if (out == -3) //sucess
                printf("Deleted value at end\n");
            else if (out == -1) //no data 
                printf("No Data \n");
            else if (out == -4)//reset if only one eleement
                printf("Linked List Reset \n");
            break;

        case 5:
            printf("Enter the number insert : ");
            scanf("%d", &input_val);
            printf("Enter the position to insert  : ");
            scanf("%d", &pos);

            out = insert_at_pos(&end,input_val,pos);
            if (out == 1)
                printf("%d inserted at %d\n", input_val,pos);
            else if (out == -1)
                printf("%d inserted and new linked list created \n", input_val);
            else if (out == -2)
                printf("%d inserted at beg \n", input_val);
            else if (out == -3)
                printf("%d inserted at end \n", input_val);
            else
                printf("cant insert\n");
            break;

        case 6:
            show(end);
            out=is_empty(end);
            if (out == 1){break;}
            printf("\nEnter the position to delete : ");
            scanf("%d", &input_val);

            out = delete_at_pos(&end,input_val);
            if (out == 1)
                printf("%d Deleted \n", input_val);
            else if (out == -1)
                printf("no data \n");//if no data
            else if (out == -2)
                printf("%d deleted the beg \n", input_val);
            else if (out == -3)
                printf("deleted the end \n");
            else if (out == -4)
                printf("Resseted the ll\n"); // if onlu one eleemt
            else
                printf("Empty \n");
            break;

        case 7:
            out = is_empty(end);
            if (out == 1)
                printf("Empty\n");
            else
                printf("Not empty \n");
            break;


        case 8:
            show(end);
            break;
            
            case 9:
            printf("%d is the size of Linked List ", fn_size(end));
            break;
            
            case 10:
            printf("Enter the element to search : ");
            scanf("%d", &input_val);
            out = search(end,input_val);
            if (out == -2)
            printf("No data  \n");
            else if (out == -1)
            printf("Element Not Found\n");
            else
            printf("Element Found at %d \n",out);
            
            break;
            
            case 11:
                out = clear_ll(&end);
            if (out == 1)
                printf("Cleared \n");
            else
                printf("Already empty \n");
            break;

                
                case 12:
                if (is_empty(end) != 1){show(end);}

                out = sort(&end);

                if (out == 1){
                    printf("\nSorted\n");
                    show(end);}
                else
                    printf("Cant Sort \n");
                break;

            case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }    


    return 0;
}
```

<!-- qrun:field-end code id="q-06-04" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-06-04" -->



<!-- qrun:field-end freshness id="q-06-04" -->

<!-- qrun:field-start output id="q-06-04" -->

```text
$ gcc q-06-04.c -o ./bin/q-06-04.out && ./bin/q-06-04.out

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 1
Enter the number insert at beg : 23
23 inserted and new linked list created 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 1
Enter the number insert at beg : 20
20 inserted 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 1
Enter the number insert at beg : 10
10 inserted 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 2
Enter the number insert at end : 90
90 inserted 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>    10   <0|| >    20   <1|| >    23   <2||e>    90   <3|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 3

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>    20   <0|| >    23   <1||e>    90   <2|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 4

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>    20   <0|| >    23   <1||e>    90   <2|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 5
Enter the number insert : 1
Enter the position to insert  : 200
cant insert

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 7
Not empty 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 8
|b>    20   <0|| >    23   <1||e>    90   <2|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 10
Enter the element to search : 20
Element Found at 0 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 12
|b>    20   <0|| >    23   <1||e>    90   <2|
Sorted
|b>    20   <0|| >    23   <1||e>    90   <2|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 1
Enter the number insert at beg : 2
2 inserted 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 12
|b>     2   <0|| >    20   <1|| >    23   <2||e>    90   <3|
Sorted
|b>     2   <0|| >    20   <1|| >    23   <2||e>    90   <3|
Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 11
Cleared 

Enter the choice :
1 : insert at beg
2 : insert at end
3 : delete at beg
4 : delete at end
5 : insert at pos
6 : delete at pos
7 : isempty
8 : show
9 : size
10 : search
11 : clear
12 : sort
0 : exit
Enter choice : 0
exitting ...
```

<!-- qrun:field-end output id="q-06-04" -->
<!-- qrun:entry-end id="q-06-04" -->


<!-- qrun:entry-start id="q-06-05" -->

<!-- qrun:field-start question id="q-06-05" -->

## Q 05 : Implement a singly linked list storing string values with insert at beginning, insert at position, insert at end, delete at beginning, delete at end, delete at position, isEmpty, isFull, display, and search operations.

<!-- qrun:field-end question id="q-06-05" -->

### CODE

<!-- qrun:field-start code id="q-06-05" -->

```c
// Linked List -> Q 05 : Implement a singly linked list storing string values with insert at beginning, insert at position, insert at end, delete at beginning, delete at end, delete at position, isEmpty, isFull, display, and search operations.

#include <stdio.h>
#include <stdlib.h>

struct node{
    char data;
    struct node * nxt_ptr;
};


// |b| -> | | -> | | -> | | -> |e|
//  ^                           ^
//  |                           |
// beg                         end


int fn_size(struct node * beg,struct node *end);


int insert_at_beg(struct node ** beg,struct node ** end,char data){ 

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}

    new_node->data = data;
    new_node->nxt_ptr = NULL;

    if ((*beg) == NULL){
        (*beg) = new_node;
        (*end) = new_node;
        return -1;
    }
    // putting a new node nxy ptr to beg and theb beg = new node
    new_node->nxt_ptr = (*beg);
    (*beg) = new_node;
    
    
    return 1;
}


int insert_at_end(struct node ** end,struct node ** beg,char data){
    
    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    
    new_node->data = data;
    new_node->nxt_ptr = NULL;
    
    if (((*end) == NULL) && ((*beg) == NULL)) {
    (*beg) = new_node;
    (*end) = new_node;  
        return -1;
    }
    
    (*end)->nxt_ptr = new_node;
    (*end) = new_node;
    return 1;
}



int insert_at_pos(struct node ** end,struct node ** beg,char data,int pos){
    int n = 0; 
    int size = fn_size((*beg),(*end)) ;
    
    if (!((pos>=0) && (pos<=size))){return 0;}
    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    new_node->nxt_ptr = NULL;
    
    // if the ll is empty and adding at beg
    if (size == 0){                
        (*beg) = new_node;
        (*end) = new_node;
        return -1;
    }

    //if the insert at beg
    if (pos == 0){
        new_node->nxt_ptr = (*beg);
        (*beg) = new_node;
        return 1;
    }

    // if insert at end
    if (pos == size){
        (*end)->nxt_ptr = new_node;
        (*end) = new_node;
        return -2;
    }
    
    struct node * temp = (*beg);
    for (n;n<pos - 1;n++){
        temp = temp->nxt_ptr;
    }
    new_node->nxt_ptr = temp->nxt_ptr;
    temp->nxt_ptr = new_node;
    return 1;

}


int delete_at_beg(struct node ** beg,struct node ** end){
    
    if ((*beg) == NULL){
        return 0;
    }

    if (((*beg) == (*end)) && ((*beg)->nxt_ptr == NULL)){
        free((*beg));
        (*beg) = NULL;
        (*end) = NULL;
        return -1;
    }
    
    struct node * temp = (*beg)->nxt_ptr;
    free((*beg));
    (*beg) = temp;
    return 1;
}



int delete_at_end(struct node ** end,struct node ** beg){
    if ((*end) == NULL){
        return 0;
    }
    if (((*beg) == (*end)) && ((*beg)->nxt_ptr == NULL)){
        free((*beg));
        (*beg) = NULL;
        (*end) = NULL;
        return -1;
    }

    struct node * pre = (*beg);
    while(pre->nxt_ptr!=(*end)){
        // pre = temp;
        pre = pre->nxt_ptr;
    }

    pre->nxt_ptr = NULL;
    free((*end));
    (*end) = pre;
    return 1;
}

//so the thing if if size is 5 the
// index rtange os 0 - 4 , if i wnart to add at 2 , then i need
// the temp to hold the ptr of 1st indec becasue it have the next and next ; so i can insert the eleemnt 
//at that poistion change the address of n-1 index and the new node containing the ttemp->nxt_ptr ; FOR deletion we 
//also need the temp to has address of n-1 , temp will have to first get temp->nxtptr->nxtprt address and teh copy it to the temp nxtptr 


// IMPLEEMTAION

// but in fucntion impleemtion i did something weired insert utpo pre , delete upto the actual value then also trcked the pre 


int delete_at_pos(struct node ** end,struct node ** beg,int pos){
    int n = 0; 
    int size = fn_size((*beg),(*end));
    
    if (!((pos>=0) && (pos<=size))){return 0;}
    
    if ((size ==0)){
        return 0;
    }
    
    if (pos == 0){
        return (delete_at_beg(beg, end) == -1) ? -1 : 1;
    }
    if (pos == size - 1){
        return (delete_at_end(beg, end) == -1) ? -1 : 1;
    }
    
    struct node * temp = (*beg);
    struct node * pre = (*beg);
    for (n;n<pos;n++){
        pre=temp;
        temp=temp->nxt_ptr;
    }
    pre->nxt_ptr = temp->nxt_ptr;
    free(temp);
    return 1;
}


int search(struct node * end,struct node * beg,char data){
    if ((beg == NULL) && (end == beg)){
        return -2;
    }
    int i = 0;
    while(beg!=NULL){
        if (beg->data == data){
            return i;
        }
        i++;
        beg = beg->nxt_ptr;
    }
    return -1;
}




void show(struct node * beg,struct node * end){
    if ((end==NULL) && (end == beg)){
        printf("NO DATA");
        return;
    }
    
    if ((end == beg) && (end->nxt_ptr == NULL)){
        printf("|b>  %c  <e|",beg->data);
        return;
    }
    
    int i = 0;
    
    printf("|b>   %c   <%d|",beg->data,i);
    beg=beg->nxt_ptr;
    i++;
    while(beg->nxt_ptr!=NULL){
        printf("| >   %c   <%d|", beg->data,i);
        beg = beg->nxt_ptr;
        i++;
    }
    printf("|e>   %c   <%d|",beg->data,i);
    return;
}


int fn_size(struct node * beg,struct node * end){
    int i = 0;
    if ((end==NULL) && (end == beg)){
        return i;
    }
    while(beg!=NULL){
        i++;
        beg = beg->nxt_ptr;
    }
    return i;
}


int is_empty(struct node * beg,struct node * end){
    if (fn_size(beg,end) == 0){return 1;}
    return 0;
}


int clear_ll(struct node ** beg,struct node ** end){
    if (((*beg) == NULL) && ((*beg) == (*end))){
        return 0;
    }

    struct node * temp ;
    while((*beg)!= NULL){
        temp = (*beg);
        (*beg) = (*beg)->nxt_ptr;
        free(temp);
    }
    (*beg) = NULL;
    (*end) = NULL;
    return 1;
}



int main (){
   
    struct node * beg = NULL;
    struct node * end = NULL;
    int choice,out,pos;
    char input_val;


    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : insert at beg\n");
        printf("2 : insert at end\n");
        printf("3 : delete at beg\n");
        printf("4 : delete at end\n");
        printf("5 : insert at pos\n");
        printf("6 : delete at pos\n");
        printf("7 : isempty\n");
        printf("8 : show\n");
        printf("9 : size\n");
        printf("10 : search\n");
        printf("11 : clear\n");
        
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number insert at beg : ");
            scanf(" %c", &input_val);

            out = insert_at_beg(&beg,&end,input_val);
            if (out == 1)
                printf("%c inserted \n", input_val);
            else if (out == -1)
                printf("%c inserted and new linked list created \n", input_val);
            else
                printf("cant insert\n");
            break;
        case 2:
            printf("Enter the number insert at end : ");
            scanf(" %c", &input_val);

            out = insert_at_end(&end,&beg,input_val);
            if (out == 1)
                printf("%c inserted \n", input_val);
            else if (out == -1)
                printf("%c inserted and new linked list created \n", input_val);
            else
                printf("cant insert\n");
            break;
            

        case 3:
            out = delete_at_beg(&beg,&end);
            if (out == 1)
                printf("Deleted value\n");
            else if (out == 0)
                printf("No Data \n");
            else
                printf("Linked List Reset \n");
            break;
        case 4:
            out = delete_at_end(&end,&beg);
            if (out == 1)
                printf("Deleted value\n");
            else if (out == 0)
                printf("No Data \n");
            else
                printf("Linked List Reset \n");
            break;

        case 5:
            printf("Enter the number insert : ");
            scanf(" %c", &input_val);
            printf("Enter the position to insert  : ");
            scanf("%d", &pos);

            out = insert_at_pos(&end,&beg,input_val,pos);
            if (out == 1)
                printf("%c inserted at %d\n", input_val,pos);
            else if (out == -1)
                printf("%c inserted and new linked list created \n", input_val);
            else if (out == -2)
                printf("%c inserted at end \n", input_val);
            else
                printf("cant insert\n");
            break;

        case 6:
            show(beg,end);
            printf("\nEnter the position to delete : ");
            scanf("%d", &input_val);

            out = delete_at_pos(&end,&beg,input_val);
            if (out == 1)
                printf("%c Deleted \n", input_val);
            else if (out == -1)
                printf("%c deleted the last position \n", input_val);
            else if (out == -2)
                printf("deleted the beg eleement \n");
            else
                printf("Empty \n");
            break;

        case 7:
            out = is_empty(beg,end);
            if (out == 1)
                printf("Empty\n");
            else
                printf("Not empty \n");
            break;



        case 8:
            show(beg,end);
            break;
            
            case 9:
            printf("%d is the size of Linked List ", fn_size(beg,end));
            break;
            
            case 10:
            printf("Enter the element to search : ");
            scanf(" %c", &input_val);
            out = search(end,beg,input_val);
            if (out == -2)
            printf("No data  \n");
            else if (out == -1)
            printf("Element Not Found\n");
            else
            printf("Element Found at %d \n",out);
            
            break;
            
            case 11:
                out = clear_ll(&beg,&end);
            if (out == 1)
                printf("Cleared \n");
            else
                printf("Cant Clear \n");
            break;

                
                case 12:
                if (is_empty(beg,end) != 1){show(beg,end);}
                    out = sort(&beg,&end);
                if (out == 1){
                    printf("Sorted\n");
                    show(beg,end);}
                else
                    printf("Cant Sort \n");
                break;

            case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }    


    return 0;
}
```

<!-- qrun:field-end code id="q-06-05" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-06-05" -->



<!-- qrun:field-end freshness id="q-06-05" -->

<!-- qrun:field-start output id="q-06-05" -->

```text
$ gcc q-06-05.c -o ./bin/q-06-05.out && ./bin/q-06-05.out
q-06-05.c: In function ‘main’:
q-06-05.c:367:21: warning: format ‘%d’ expects argument of type ‘int *’, but argument 2 has type ‘char *’ [-Wformat=]
  367 |             scanf("%d", &input_val);
      |                    ~^   ~~~~~~~~~~
      |                     |   |
      |                     |   char *
      |                     int *
      |                    %hhd
q-06-05.c:422:27: warning: implicit declaration of function ‘sort’; did you mean ‘qsort’? [-Wimplicit-function-declaration]
  422 |                     out = sort(&beg,&end);
      |                           ^~~~
      |                           qsort
/usr/bin/ld: /tmp/cc5NWjFP.o: in function `main':
q-06-05.c:(.text+0xea5): undefined reference to `sort'
collect2: error: ld returned 1 exit status
```

<!-- qrun:field-end output id="q-06-05" -->
<!-- qrun:entry-end id="q-06-05" -->

<!-- qrun:topic-end id="topic-06" -->

<!-- qrun:topic-start id="topic-05" -->

<!-- qrun:field-start topic id="topic-05" -->

# Queues

<!-- qrun:field-end topic id="topic-05" -->

<!-- qrun:entry-start id="q-05-01" -->

<!-- qrun:field-start question id="q-05-01" -->

## Q 01 : Implement a simple queue using an integer array with insert, delete, peek, isEmpty, and isFull operations.

<!-- qrun:field-end question id="q-05-01" -->

### CODE

<!-- qrun:field-start code id="q-05-01" -->

```c
// Queues -> Q 01 : Implement a simple queue using an integer array with insert, delete, peek, isEmpty, and isFull operations.
#include <stdio.h>
#include <stdlib.h>
#define QUEUE_SIZE 10


int enqueue(int queue[],int * front, int * rear ,int data){
    if (*front == -1 && *rear == -1){
        (*front)++;
        (*rear) ++;
        queue[*rear] = data;
        return 1;
    }

    if (*front > -1 && *rear < QUEUE_SIZE - 1){
        (*rear) ++;
        queue[*rear] = data;
        return 1;
    }

    return 0;

}

int dequeue(int * front, int * rear){
    if (*front == -1 && *rear == -1){
        return 0;
    }
    
    if ((*front <= *rear ) && (*front < QUEUE_SIZE)){
        
        if ((*front == QUEUE_SIZE -1)){
            *front = -1;
            *rear = -1;
            return -1;
        }

        if (*front == *rear) {
            *front = -1;
            *rear = -1;
             return 1;
            }
        
        (*front)++;
        return 1;
    }
    return 0;
}

int fn_front(int queue[],int front){
    return queue[front];
}

int fn_rear(int queue[],int rear){
    return queue[rear];
}

int is_empty(int queue[],int front, int rear){
    if ((front == -1 && rear == -1) || (front > rear)){
        return 1;
    }

    return 0;
}

int size(int queue[],int front, int rear){

    if ((front == -1 && rear == -1) || (front > rear)){
        return 0;
    }
    
    return rear-front+1;
}


void show(int queue[],int front, int rear){
    
    if ((front == -1 && rear == -1) || (front > rear)){
        printf("no data");
        return;
    }

    if (front == rear){
        printf("||f> %3d <r|", queue[front]);
        return;
    }

    printf("||f> %3d <|", queue[front]);

    for (int i = front+1 ; i < rear ; i++){
        printf("|  %3d  |", queue[i]);
    }
    printf("|r> %3d <||\n", queue[rear]);

}

int search(int queue[],int front, int rear,int data){
    if ((front == -1 && rear == -1) || (front > rear)){
        return -1;
    }

    for (int i = front ; i < rear + 1 ; i++){
        if (queue[i] == data){
            return 1;
        }
    }
    return 0;
}



int main(){

    int * queue = (int *)(malloc(sizeof(int) * QUEUE_SIZE));
    int front = -1;
    int rear = -1;
    int choice,input_val,out;


    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : enqueue\n");
        printf("2 : dequeue\n");
        printf("3 : front\n");
        printf("4 : rear\n");
        printf("5 : isempty\n");
        printf("6 : show\n");
        printf("7 : size\n");
        printf("8 : search\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number to enqueue : ");
            scanf("%d", &input_val);

            out = enqueue(queue,&front,&rear,input_val);
            if (out == 1)
                printf("%d enqueued \n", input_val);
            else
                printf("cant enqueue\n");
            break;

        case 2:
            out = dequeue(&front,&rear);
            if (out == 1)
                printf("Dequeued value\n");
            else if (out == 0)
                printf("No Data \n");
            else
                printf("Queue Reset \n");
            break;

        case 3:
            out = is_empty(queue,front,rear);
            if (out == 0)
                printf("Front value : %d\n", fn_front(queue,front));
            else
                printf("Queue is empty \n");
            break;

        case 4:
            out = is_empty(queue,front,rear);
            if (out == 0)
                printf("rear value : %d\n", fn_rear(queue,rear));
            else
                printf("Queue is empty \n");
            break;


        case 5:
            if (is_empty(queue,front,rear))
                printf("Queue is empty \n");
            else
                printf("Queue is not empty\n");
            break;

        case 6:
            show(queue,front,rear);
            break;
            
        case 7:
            printf("%d is the sixe of Queue ", size(queue,front,rear));
                break;
        case 8:
            printf("Enter the element to search : ");
            scanf("%d", &input_val);
            out = search(queue,front,rear,input_val);
            if (out == 1)
                printf("Element Found \n");
            else if (out == 0)
                printf("Element Not Found\n");
            else
                printf("No data  \n");

                break;


            case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }    


    return 0;
}
```

<!-- qrun:field-end code id="q-05-01" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-05-01" -->



<!-- qrun:field-end freshness id="q-05-01" -->

<!-- qrun:field-start output id="q-05-01" -->

```text
$ gcc q-05-01.c -o ./bin/q-05-01.out && ./bin/q-05-01.out

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 1
Enter the number to enqueue : 324
324 enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 1
Enter the number to enqueue : 546
546 enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 1
Enter the number to enqueue : 345
345 enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 3
Front value : 324

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 4
rear value : 345

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 5
Queue is not empty

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 6
||f> 324 <||  546  ||r> 345 <||

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 7
3 is the sixe of Queue 
Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 1
Enter the number to enqueue : 20
20 enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 8
Enter the element to search : 20
Element Found 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 2
Dequeued value

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 2
Dequeued value

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 6
||f> 345 <||r>  20 <||

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 2
Dequeued value

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 6
||f>  20 <r|
Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 0
exitting ...
```

<!-- qrun:field-end output id="q-05-01" -->
<!-- qrun:entry-end id="q-05-01" -->


<!-- qrun:entry-start id="q-05-02" -->

<!-- qrun:field-start question id="q-05-02" -->

## Q 02 : Implement a simple queue using a string array with insert, delete, peek, isEmpty, and isFull operations.

<!-- qrun:field-end question id="q-05-02" -->

### CODE

<!-- qrun:field-start code id="q-05-02" -->

```c
// Queues -> Q 02 : Implement a simple queue using a string array with insert, delete, peek, isEmpty, and isFull operations.
#include <stdio.h>
#include <stdlib.h>
#define QUEUE_SIZE 10


int enqueue(char queue[],int * front, int * rear ,char data){
    if (*front == -1 && *rear == -1){
        (*front)++;
        (*rear) ++;
        queue[*rear] = data;
        return 1;
    }

    if (*front > -1 && *rear < QUEUE_SIZE - 1){
        (*rear) ++;
        queue[*rear] = data;
        return 1;
    }

    return 0;

}

int dequeue(int * front, int * rear){
    if (*front == -1 && *rear == -1){
        return 0;
    }
    
    if ((*front <= *rear ) && (*front < QUEUE_SIZE)){
        
        if ((*front == QUEUE_SIZE -1)){
            *front = -1;
            *rear = -1;
            return -1;
        }

        if (*front == *rear) {
            *front = -1;
            *rear = -1;
             return 1;
            }
        
        (*front)++;
        return 1;
    }
    return 0;
}

int fn_front(char queue[],int front){
    return queue[front];
}

int fn_rear(char queue[],int rear){
    return queue[rear];
}

int is_empty(char queue[],int front, int rear){
    if ((front == -1 && rear == -1) || (front > rear)){
        return 1;
    }

    return 0;
}

int size(char queue[],int front, int rear){

    if ((front == -1 && rear == -1) || (front > rear)){
        return 0;
    }
    
    return rear-front+1;
}


void show(char queue[],int front, int rear){
    
    if ((front == -1 && rear == -1) || (front > rear)){
        printf("no data");
        return;
    }

    if (front == rear){
        printf("||f> %c <r|", queue[front]);
        return;
    }

    printf("||f> %c <|", queue[front]);

    for (int i = front+1 ; i < rear ; i++){
        printf("|  %c  |", queue[i]);
    }
    printf("|r> %c <||\n", queue[rear]);

}

int search(char queue[],int front, int rear,char data){
    if ((front == -1 && rear == -1) || (front > rear)){
        return -1;
    }

    for (int i = front ; i < rear + 1 ; i++){
        if (queue[i] == data){
            return 1;
        }
    }
    return 0;
}



int main(){

    char * queue = (char *)(malloc(sizeof(int) * QUEUE_SIZE));
    int front = -1;
    int rear = -1;
    int choice,out;
    char input_val;


    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : enqueue\n");
        printf("2 : dequeue\n");
        printf("3 : front\n");
        printf("4 : rear\n");
        printf("5 : isempty\n");
        printf("6 : show\n");
        printf("7 : size\n");
        printf("8 : search\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the char to enqueue : ");
            scanf(" %c", &input_val);

            out = enqueue(queue,&front,&rear,input_val);
            if (out == 1)
                printf("%c enqueued \n", input_val);
            else
                printf("cant enqueue\n");
            break;

        case 2:
            out = dequeue(&front,&rear);
            if (out == 1)
                printf("Dequeued value\n");
            else if (out == 0)
                printf("No Data \n");
            else
                printf("Queue Reset \n");
            break;

        case 3:
            out = is_empty(queue,front,rear);
            if (out == 0)
                printf("Front value : %c\n", fn_front(queue,front));
            else
                printf("Queue is empty \n");
            break;

        case 4:
            out = is_empty(queue,front,rear);
            if (out == 0)
                printf("rear value : %c\n", fn_rear(queue,rear));
            else
                printf("Queue is empty \n");
            break;


        case 5:
            if (is_empty(queue,front,rear))
                printf("Queue is empty \n");
            else
                printf("Queue is not empty\n");
            break;

        case 6:
            show(queue,front,rear);
            break;
            
        case 7:
            printf("%d is the sixe of Queue ", size(queue,front,rear));
                break;
        case 8:
            printf("Enter the element to search : ");
            scanf(" %c", &input_val);
            out = search(queue,front,rear,input_val);
            if (out == 1)
                printf("Element Found \n");
            else if (out == 0)
                printf("Element Not Found\n");
            else
                printf("No data  \n");

                break;


            case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }    


    return 0;
}
```

<!-- qrun:field-end code id="q-05-02" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-05-02" -->



<!-- qrun:field-end freshness id="q-05-02" -->

<!-- qrun:field-start output id="q-05-02" -->

```text
$ gcc q-05-02.c -o ./bin/q-05-02.out && ./bin/q-05-02.out

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 1
Enter the char to enqueue : d
d enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 1
Enter the char to enqueue : g
g enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 1
Enter the char to enqueue : h
h enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 1
Enter the char to enqueue : g
g enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 3
Front value : d

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 4
rear value : g

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 7
4 is the sixe of Queue 
Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 6
||f> d <||  g  ||  h  ||r> g <||

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 8
Enter the element to search : h
Element Found 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 2
Dequeued value

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 2
Dequeued value

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 6
||f> h <||r> g <||

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
0 : exit
Enter choice : 0
exitting ...
```

<!-- qrun:field-end output id="q-05-02" -->
<!-- qrun:entry-end id="q-05-02" -->


<!-- qrun:entry-start id="q-05-03" -->

<!-- qrun:field-start question id="q-05-03" -->

## Q 03 : Implement a dynamically allocated integer queue with insert, delete, peek, isEmpty, and isFull operations.

<!-- qrun:field-end question id="q-05-03" -->

### CODE

<!-- qrun:field-start code id="q-05-03" -->

```c
// Queues -> Q 03 : Implement a dynamically allocated integer queue with insert, delete, peek, isEmpty, and isFull operations.
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * nxt_ptr;
};


int enqueue(struct node ** front,struct node ** rear, int data){

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    new_node->nxt_ptr = NULL;

    if (((*front) == NULL) && ((*rear) == NULL)){
        *front = new_node;
        *rear = *front;
        return 1;
    }
    
    if ((*rear)->nxt_ptr == NULL){
        (*rear)->nxt_ptr = new_node;
        (*rear) = (*rear)->nxt_ptr;
        return 1;
    } 

    return 0;
}


int dequeue(struct node ** front,struct node ** rear){
    if ((*front) == NULL){
        return 0;
    }

    if (((*front)->nxt_ptr == NULL) && ((*front) == (*rear))){
        free(*front);
        (*front) = NULL;
        (*rear) = NULL;
        return -1;
    }
    
    struct node * temp = (*front)->nxt_ptr;
    free(*front);
    (*front)=temp;
    return 1;
}


int fn_front(struct node * front){
    return front->data;
}

int fn_rear(struct node * rear){
    return rear->data;
}


int is_empty(struct node * front,struct node * rear){
    if ((front == NULL) && (rear == front)){
        return 1;
    }
    return 0;
}


int fn_size(struct node * front){
    int i = 0;
    while(front != NULL){
        i++;
        front=front->nxt_ptr;
    }

    return i;
}



void show(struct node * front,struct node * rear){


    if ((front == NULL) && (rear == NULL)){
        printf("NO DATA\n");
        return;    
    }

    if (front == rear){
        printf("||f> %3d <r||", front->data);
        return;
    }


    printf("||f> %3d <|", front->data);
    front = front->nxt_ptr;
    while(front->nxt_ptr != NULL){
        printf("|> %3d <||", front->data);
        front=front->nxt_ptr;
    }
    printf("|r> %3d <||\n", rear->data);
    return;

}

int search(struct node * front,struct node * rear,int data ){
     if ((front == NULL) && (rear == NULL)){
        return -1;    
    }

    while(front != NULL){
        if (front->data == data){
            return 1;
        }
        front=front->nxt_ptr;
    }

    return 0;

}


void clear_queue(struct node ** front, struct node ** rear){
    struct node * temp;
    while (*front != NULL){
        temp = *front;
        *front = (*front)->nxt_ptr;
        free(temp);
    }
    *rear = NULL;   
}


int main(){
    
    struct node * front = NULL;
    struct node * rear = NULL;
    int choice,input_val,out;


    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : enqueue\n");
        printf("2 : dequeue\n");
        printf("3 : front\n");
        printf("4 : rear\n");
        printf("5 : isempty\n");
        printf("6 : show\n");
        printf("7 : size\n");
        printf("8 : search\n");
        printf("9 : clear\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number to enqueue : ");
            scanf("%d", &input_val);

            out = enqueue(&front,&rear,input_val);
            if (out == 1)
                printf("%d enqueued \n", input_val);
            else
                printf("cant enqueue\n");
            break;

        case 2:
            out = dequeue(&front,&rear);
            if (out == 1)
                printf("Dequeued value\n");
            else if (out == 0)
                printf("No Data \n");
            else
                printf("Queue Reset \n");
            break;

        case 3:
            out = is_empty(front,rear);
            if (out == 0)
                printf("Front value : %d\n", fn_front(front));
            else
                printf("Queue is empty \n");
            break;

        case 4:
            out = is_empty(front,rear);
            if (out == 0)
                printf("rear value : %d\n", fn_rear(rear));
            else
                printf("Queue is empty \n");
            break;


        case 5:
            if (is_empty(front,rear))
                printf("Queue is empty \n");
            else
                printf("Queue is not empty\n");
            break;

        case 6:
            show(front,rear);
            break;
            
            case 7:
            printf("%d is the sixe of Queue ", fn_size(front));
            break;
            
            case 8:
            printf("Enter the element to search : ");
            scanf("%d", &input_val);
            out = search(front,rear,input_val);
            if (out == 1)
            printf("Element Found \n");
            else if (out == 0)
            printf("Element Not Found\n");
            else
            printf("No data  \n");
            
            break;
            
            case 9:
                clear_queue(&front,&rear);
                break;

            case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }    


    return 0;
}
```

<!-- qrun:field-end code id="q-05-03" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-05-03" -->



<!-- qrun:field-end freshness id="q-05-03" -->

<!-- qrun:field-start output id="q-05-03" -->

```text
$ gcc q-05-03.c -o ./bin/q-05-03.out && ./bin/q-05-03.out

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : 212
212 enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : 45
45 enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : 45
45 enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : 53
53 enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 3
Front value : 212

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 4
rear value : 53

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 5
Queue is not empty

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 6
||f> 212 <||>  45 <|||>  45 <|||r>  53 <||

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 7
4 is the sixe of Queue 
Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 8
Enter the element to search : 53
Element Found 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 2
Dequeued value

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 2
Dequeued value

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 6
||f>  45 <||r>  53 <||

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 9

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 6
NO DATA

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 0
exitting ...
```

<!-- qrun:field-end output id="q-05-03" -->
<!-- qrun:entry-end id="q-05-03" -->


<!-- qrun:entry-start id="q-05-04" -->

<!-- qrun:field-start question id="q-05-04" -->

## Q 04 : Implement a dynamically allocated string queue with insert, delete, peek, isEmpty, and isFull operations.

<!-- qrun:field-end question id="q-05-04" -->

### CODE

<!-- qrun:field-start code id="q-05-04" -->

```c
// Queues -> Q 04 : Implement a dynamically allocated string queue with insert, delete, peek, isEmpty, and isFull operations.
#include <stdio.h>
#include <stdlib.h>

struct node{
    char data;
    struct node * nxt_ptr;
};


int enqueue(struct node ** front,struct node ** rear, char data){

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    new_node->nxt_ptr = NULL;

    if (((*front) == NULL) && ((*rear) == NULL)){
        *front = new_node;
        *rear = *front;
        return 1;
    }
    
    if ((*rear)->nxt_ptr == NULL){
        (*rear)->nxt_ptr = new_node;
        (*rear) = (*rear)->nxt_ptr;
        return 1;
    } 

    return 0;
}


int dequeue(struct node ** front,struct node ** rear){
    if ((*front) == NULL){
        return 0;
    }

    if (((*front)->nxt_ptr == NULL) && ((*front) == (*rear))){
        free(*front);
        (*front) = NULL;
        (*rear) = NULL;
        return -1;
    }
    
    struct node * temp = (*front)->nxt_ptr;
    free(*front);
    (*front)=temp;
    return 1;
}


char fn_front(struct node * front){
    return front->data;
}

char fn_rear(struct node * rear){
    return rear->data;
}


int is_empty(struct node * front,struct node * rear){
    if ((front == NULL) && (rear == front)){
        return 1;
    }
    return 0;
}


int fn_size(struct node * front){
    int i = 0;
    while(front != NULL){
        i++;
        front=front->nxt_ptr;
    }

    return i;
}



void show(struct node * front,struct node * rear){


    if ((front == NULL) && (rear == NULL)){
        printf("NO DATA\n");
        return;    
    }

    if (front == rear){
        printf("||f> %c <r||", front->data);
        return;
    }


    printf("||f> %c <|", front->data);
    front = front->nxt_ptr;
    while(front->nxt_ptr != NULL){
        printf("|> %c <||", front->data);
        front=front->nxt_ptr;
    }
    printf("|r> %c <||\n", rear->data);
    return;

}

int search(struct node * front,struct node * rear,char data ){
     if ((front == NULL) && (rear == NULL)){
        return -1;    
    }

    while(front != NULL){
        if (front->data == data){
            return 1;
        }
        front=front->nxt_ptr;
    }

    return 0;

}


void clear_queue(struct node ** front, struct node ** rear){
    struct node * temp;
    while (*front != NULL){
        temp = *front;
        *front = (*front)->nxt_ptr;
        free(temp);
    }
    *rear = NULL;   
}


int main(){
    
    struct node * front = NULL;
    struct node * rear = NULL;
    int choice,out;
    char input_val;


    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : enqueue\n");
        printf("2 : dequeue\n");
        printf("3 : front\n");
        printf("4 : rear\n");
        printf("5 : isempty\n");
        printf("6 : show\n");
        printf("7 : size\n");
        printf("8 : search\n");
        printf("9 : clear\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number to enqueue : ");
            scanf(" %c", &input_val);

            out = enqueue(&front,&rear,input_val);
            if (out == 1)
                printf("%c enqueued \n", input_val);
            else
                printf("cant enqueue\n");
            break;

        case 2:
            out = dequeue(&front,&rear);
            if (out == 1)
                printf("Dequeued value\n");
            else if (out == 0)
                printf("No Data \n");
            else
                printf("Queue Reset \n");
            break;

        case 3:
            out = is_empty(front,rear);
            if (out == 0)
                printf("Front value : %c\n", fn_front(front));
            else
                printf("Queue is empty \n");
            break;

        case 4:
            out = is_empty(front,rear);
            if (out == 0)
                printf("rear value : %c\n", fn_rear(rear));
            else
                printf("Queue is empty \n");
            break;


        case 5:
            if (is_empty(front,rear))
                printf("Queue is empty \n");
            else
                printf("Queue is not empty\n");
            break;

        case 6:
            show(front,rear);
            break;
            
            case 7:
            printf("%d is the sixe of Queue ", fn_size(front));
            break;
            
            case 8:
            printf("Enter the element to search : ");
            scanf(" %c", &input_val);
            out = search(front,rear,input_val);
            if (out == 1)
            printf("Element Found \n");
            else if (out == 0)
            printf("Element Not Found\n");
            else
            printf("No data  \n");
            
            break;
            
            case 9:
                clear_queue(&front,&rear);
                break;

            case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }    


    return 0;
}
```

<!-- qrun:field-end code id="q-05-04" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-05-04" -->



<!-- qrun:field-end freshness id="q-05-04" -->

<!-- qrun:field-start output id="q-05-04" -->

```text
$ gcc q-05-04.c -o ./bin/q-05-04.out && ./bin/q-05-04.out

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : f
f enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : t
t enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : y
y enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : o
o enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 3
Front value : f

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 4
rear value : o

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 5
Queue is not empty

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 6
||f> f <||> t <|||> y <|||r> o <||

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 7
4 is the sixe of Queue 
Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 6
||f> f <||> t <|||> y <|||r> o <||

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 8
Enter the element to search : o
Element Found 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : f
f enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 2
Dequeued value

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 2
Dequeued value

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 2
Dequeued value

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 6
||f> o <||r> f <||

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 9

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 6
NO DATA

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 0
exitting ...
```

<!-- qrun:field-end output id="q-05-04" -->
<!-- qrun:entry-end id="q-05-04" -->


<!-- qrun:entry-start id="q-05-05" -->

<!-- qrun:field-start question id="q-05-05" -->

## Q 05 : Implement a circular queue using an integer array with insert, delete, peek, isEmpty, and isFull operations.

<!-- qrun:field-end question id="q-05-05" -->

### CODE

<!-- qrun:field-start code id="q-05-05" -->

```c
// Queues -> Q 05 : Implement a circular queue using an integer array with insert, delete, peek, isEmpty, and isFull operations.
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * nxt_ptr;
};


int enqueue(struct node ** rear, int data){

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    new_node->nxt_ptr = NULL;

    if ((*rear) == NULL){
        *rear = new_node;
        (*rear)->nxt_ptr = new_node;
        return 1;
    }
    
    // if ((*rear)->nxt_ptr == *rear){
        struct node * front = (*rear)->nxt_ptr;
        (*rear)->nxt_ptr = new_node;
        (*rear) = new_node;
        (*rear)->nxt_ptr = front;
        return 1;
    // } 
    
    // if ((*rear)->nxt_ptr != *rear){
    //     struct node * temp = (*rear)->nxt_ptr;
    //     (*rear)->nxt_ptr = new_node;
    //     (*rear) = (*rear)->nxt_ptr;
    //     (*rear)->nxt_ptr = temp;
    //     return 1;
    // } 

    // return 0;
}


int dequeue(struct node ** rear){
    if ((*rear) == NULL){
        return 0;
    }

    if (((*rear) == (*rear)->nxt_ptr)){
        free(*rear);
        (*rear) = NULL;
        return -1;
    }
    
    struct node * front = (*rear)->nxt_ptr;
    (*rear)->nxt_ptr = front->nxt_ptr;
    free(front);
    return 1;
}


int fn_front(struct node * rear){
    return ((rear)->nxt_ptr)->data;
}

int fn_rear(struct node * rear){
    return rear->data;
}


int is_empty(struct node * rear){
    if (rear == NULL){
        return 1;
    }
    return 0;
}


int fn_size(struct node * rear){
    if (rear == NULL){return 0;}

    struct node * front = rear->nxt_ptr;
    int i = 0;

    do{
    i++;
    front=front->nxt_ptr;
    }while(front != rear->nxt_ptr);

    return i;
}


void show(struct node ** rear){


    if (((*rear) == NULL)){
        printf("NO DATA\n");
        return;    
    }

    if ((*rear) == (*rear)->nxt_ptr){
        printf("||f> %3d <r||", (*rear)->data);
        return;
    }

    struct node * front = (*rear)->nxt_ptr;
    printf("||f> %3d <|", front->data);
    front = front->nxt_ptr;
    
    // while(front->nxt_ptr != rear->nxt_ptr){
    //     printf("|> %3d <||", front->data);
    //     front=front->nxt_ptr;
    // }
    
    while(front != (*rear)){
        printf("|> %3d <||", front->data);
        front=front->nxt_ptr;
    }

    printf("|r> %3d <||\n", (*rear)->data);
    return;
    
}



int search(struct node * rear,int data ){
    if ((rear == NULL)){
        return -1;    
    }
    
    struct node * front = rear->nxt_ptr;
    do{
        if (front->data == data){
            return 1;
        }
        front=front->nxt_ptr;
    }while(front != rear->nxt_ptr);
    return 0;
}


int clear_queue(struct node ** rear){
    if ((*rear) == NULL){
        return 0;
    }
    struct node * temp;
    struct node * front = (*rear)->nxt_ptr;

    while (front != (*rear)){
        temp = front;
        front = front->nxt_ptr;
        free(temp);
    }
    free(*rear);
    (*rear) = NULL;  
    return 1; 
}


int main(){
    
    struct node * rear = NULL;
    int choice,input_val,out;


    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : enqueue\n");
        printf("2 : dequeue\n");
        printf("3 : front\n");
        printf("4 : rear\n");
        printf("5 : isempty\n");
        printf("6 : show\n");
        printf("7 : size\n");
        printf("8 : search\n");
        printf("9 : clear\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number to enqueue : ");
            scanf("%d", &input_val);

            out = enqueue(&rear,input_val);
            if (out == 1)
                printf("%d enqueued \n", input_val);
            else
                printf("cant enqueue\n");
            break;

        case 2:
            out = dequeue(&rear);
            if (out == 1)
                printf("Dequeued value\n");
            else if (out == 0)
                printf("No Data \n");
            else
                printf("Queue Reset \n");
            break;

        case 3:
            out = is_empty(rear);
            if (out == 0)
                printf("Front value : %d\n", fn_front(rear));
            else
                printf("Queue is empty \n");
            break;

        case 4:
            out = is_empty(rear);
            if (out == 0)
                printf("rear value : %d\n", fn_rear(rear));
            else
                printf("Queue is empty \n");
            break;


        case 5:
            if (is_empty(rear))
                printf("Queue is empty \n");
            else
                printf("Queue is not empty\n");
            break;

        case 6:
            show(&rear);
            break;
            
            case 7:
            printf("%d is the sixe of Queue ", fn_size(rear));
            break;
            
            case 8:
            printf("Enter the element to search : ");
            scanf("%d", &input_val);
            out = search(rear,input_val);
            if (out == 1)
            printf("Element Found \n");
            else if (out == 0)
            printf("Element Not Found\n");
            else
            printf("No data  \n");
            
            break;
            
            case 9:
                clear_queue(&rear);
                break;

            case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }    


    return 0;
}


// | Condition                            | Stop when...                    |             If starting at front |
// | ------------------------------------ | ------------------------------- | -------------------------------: |
// | `front != (*rear)->nxt_ptr`          | `front` reaches **front again** |wont work if 1st isnt skipped then it skips 0 iterations |
// | `front->nxt_ptr != (*rear)->nxt_ptr` | `front` reaches **rear**        |        doest need skipped 1st front    skips rear |
// | `front != *rear`                     | `front` reaches **rear**        | processes everything before rear |
```

<!-- qrun:field-end code id="q-05-05" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-05-05" -->



<!-- qrun:field-end freshness id="q-05-05" -->

<!-- qrun:field-start output id="q-05-05" -->

```text
$ gcc q-05-05.c -o ./bin/q-05-05.out && ./bin/q-05-05.out

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : 34
34 enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : 3455
3455 enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : 30
30 enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : 20
20 enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 200
Invalid choice

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : 200
200 enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 3
Front value : 34

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 4
rear value : 200

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 5
Queue is not empty

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 7
5 is the sixe of Queue 
Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 6
||f>  34 <||> 3455 <|||>  30 <|||>  20 <|||r> 200 <||

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 8
Enter the element to search : 20
Element Found 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 2
Dequeued value

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 2
Dequeued value

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 6
||f>  30 <||>  20 <|||r> 200 <||

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 9

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 6
NO DATA

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 0
exitting ...
```

<!-- qrun:field-end output id="q-05-05" -->
<!-- qrun:entry-end id="q-05-05" -->


<!-- qrun:entry-start id="q-05-06" -->

<!-- qrun:field-start question id="q-05-06" -->

## Q 06 : Implement a circular queue using a string array with insert, delete, peek, isEmpty, and isFull operations.

<!-- qrun:field-end question id="q-05-06" -->

### CODE

<!-- qrun:field-start code id="q-05-06" -->

```c
// Queues -> Q 06 : Implement a circular queue using a string array with insert, delete, peek, isEmpty, and isFull operations.
#include <stdio.h>
#include <stdlib.h>

struct node{
    char data;
    struct node * nxt_ptr;
};


int enqueue(struct node ** rear, char data){

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    new_node->nxt_ptr = NULL;

    if ((*rear) == NULL){
        *rear = new_node;
        (*rear)->nxt_ptr = new_node;
        return 1;
    }
    
    // if ((*rear)->nxt_ptr == *rear){
        struct node * front = (*rear)->nxt_ptr;
        (*rear)->nxt_ptr = new_node;
        (*rear) = new_node;
        (*rear)->nxt_ptr = front;
        return 1;
    // } 
    
    // if ((*rear)->nxt_ptr != *rear){
    //     struct node * temp = (*rear)->nxt_ptr;
    //     (*rear)->nxt_ptr = new_node;
    //     (*rear) = (*rear)->nxt_ptr;
    //     (*rear)->nxt_ptr = temp;
    //     return 1;
    // } 

    // return 0;
}


int dequeue(struct node ** rear){
    if ((*rear) == NULL){
        return 0;
    }

    if (((*rear) == (*rear)->nxt_ptr)){
        free(*rear);
        (*rear) = NULL;
        return -1;
    }
    
    struct node * front = (*rear)->nxt_ptr;
    (*rear)->nxt_ptr = front->nxt_ptr;
    free(front);
    return 1;
}


char fn_front(struct node * rear){
    return ((rear)->nxt_ptr)->data;
}

char fn_rear(struct node * rear){
    return rear->data;
}


int is_empty(struct node * rear){
    if (rear == NULL){
        return 1;
    }
    return 0;
}


int fn_size(struct node * rear){
    if (rear == NULL){return 0;}

    struct node * front = rear->nxt_ptr;
    int i = 0;

    do{
    i++;
    front=front->nxt_ptr;
    }while(front != rear->nxt_ptr);

    return i;
}


void show(struct node ** rear){


    if (((*rear) == NULL)){
        printf("NO DATA\n");
        return;    
    }

    if ((*rear) == (*rear)->nxt_ptr){
        printf("||f> %c <r||", (*rear)->data);
        return;
    }

    struct node * front = (*rear)->nxt_ptr;
    printf("||f> %c <|", front->data);
    front = front->nxt_ptr;
    
    // while(front->nxt_ptr != rear->nxt_ptr){
    //     printf("|> %3d <||", front->data);
    //     front=front->nxt_ptr;
    // }
    
    while(front != (*rear)){
        printf("|> %c <||", front->data);
        front=front->nxt_ptr;
    }

    printf("|r> %c <||\n", (*rear)->data);
    return;
    
}



int search(struct node * rear,char data ){
    if ((rear == NULL)){
        return -1;    
    }
    
    struct node * front = rear->nxt_ptr;
    do{
        if (front->data == data){
            return 1;
        }
        front=front->nxt_ptr;
    }while(front != rear->nxt_ptr);
    return 0;
}


int clear_queue(struct node ** rear){
    if ((*rear) == NULL){
        return 0;
    }
    struct node * temp;
    struct node * front = (*rear)->nxt_ptr;

    while (front != (*rear)){
        temp = front;
        front = front->nxt_ptr;
        free(temp);
    }
    free(*rear);
    (*rear) = NULL;  
    return 1; 
}


int main(){
    
    struct node * rear = NULL;
    int choice,out;
    char input_val;


    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : enqueue\n");
        printf("2 : dequeue\n");
        printf("3 : front\n");
        printf("4 : rear\n");
        printf("5 : isempty\n");
        printf("6 : show\n");
        printf("7 : size\n");
        printf("8 : search\n");
        printf("9 : clear\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number to enqueue : ");
            scanf(" %c", &input_val);

            out = enqueue(&rear,input_val);
            if (out == 1)
                printf("%c enqueued \n", input_val);
            else
                printf("cant enqueue\n");
            break;

        case 2:
            out = dequeue(&rear);
            if (out == 1)
                printf("Dequeued value\n");
            else if (out == 0)
                printf("No Data \n");
            else
                printf("Queue Reset \n");
            break;

        case 3:
            out = is_empty(rear);
            if (out == 0)
                printf("Front value : %c\n", fn_front(rear));
            else
                printf("Queue is empty \n");
            break;

        case 4:
            out = is_empty(rear);
            if (out == 0)
                printf("rear value : %c\n", fn_rear(rear));
            else
                printf("Queue is empty \n");
            break;


        case 5:
            if (is_empty(rear))
                printf("Queue is empty \n");
            else
                printf("Queue is not empty\n");
            break;

        case 6:
            show(&rear);
            break;
            
            case 7:
            printf("%d is the sixe of Queue ", fn_size(rear));
            break;
            
            case 8:
            printf("Enter the element to search : ");
            scanf(" %c", &input_val);
            out = search(rear,input_val);
            if (out == 1)
            printf("Element Found \n");
            else if (out == 0)
            printf("Element Not Found\n");
            else
            printf("No data  \n");
            
            break;
            
            case 9:
                clear_queue(&rear);
                break;

            case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }    


    return 0;
}


// | Condition                            | Stop when...                    |             If starting at front |
// | ------------------------------------ | ------------------------------- | -------------------------------: |
// | `front != (*rear)->nxt_ptr`          | `front` reaches **front again** |wont work if 1st isnt skipped then it skips 0 iterations |
// | `front->nxt_ptr != (*rear)->nxt_ptr` | `front` reaches **rear**        |        doest need skipped 1st front    skips rear |
// | `front != *rear`                     | `front` reaches **rear**        | processes everything before rear |
```

<!-- qrun:field-end code id="q-05-06" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-05-06" -->



<!-- qrun:field-end freshness id="q-05-06" -->

<!-- qrun:field-start output id="q-05-06" -->

```text
$ gcc q-05-06.c -o ./bin/q-05-06.out && ./bin/q-05-06.out

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : f
f enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : d
d enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : e
e enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : x
x enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : y
y enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 1
Enter the number to enqueue : r
r enqueued 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 3
Front value : f

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 4
rear value : r

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 5
Queue is not empty

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 6
||f> f <||> d <|||> e <|||> x <|||> y <|||r> r <||

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 7
6 is the sixe of Queue 
Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 8
Enter the element to search : x
Element Found 

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 2
Dequeued value

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 2
Dequeued value

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 2
Dequeued value

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 2
Dequeued value

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 6
||f> y <||r> r <||

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 9

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 6
NO DATA

Enter the choice :
1 : enqueue
2 : dequeue
3 : front
4 : rear
5 : isempty
6 : show
7 : size
8 : search
9 : clear
0 : exit
Enter choice : 0
exitting ...
```

<!-- qrun:field-end output id="q-05-06" -->
<!-- qrun:entry-end id="q-05-06" -->

<!-- qrun:topic-end id="topic-05" -->

<!-- qrun:topic-start id="topic-08" -->

<!-- qrun:field-start topic id="topic-08" -->

# Graphs

<!-- qrun:field-end topic id="topic-08" -->

<!-- qrun:entry-start id="q-08-01" -->

<!-- qrun:field-start question id="q-08-01" -->

## Q 01 : Enter the vertices and edges, represent the graph using an adjacency matrix, and print it.

<!-- qrun:field-end question id="q-08-01" -->

### CODE

<!-- qrun:field-start code id="q-08-01" -->

```c
// Graphs -> Q 01 : Enter the vertices and edges, represent the graph using an adjacency matrix, and print it.


#include <stdio.h>

// IT IS DIRECTED GRAPH , USING ADJACENT MATICS AND FIXED SIZED 

// 1. Show vertices + show count
// 2. Show graph + connections + show count 
// 3. Add vertice (10 max)
// 4. Remove last vertice 
// 5. Connect two verices (ie print the current graph)
// 6. Remove two verices connection (ie print the current graph)
// 7. Print neighbours + degree


//      0  1  2  3  4  5  6  7  8  9
//    +------------------------------
//  0 | 0  0  0  0  0  0  0  0  0  0
//  1 | 0  0  0  0  0  0  0  0  0  0
//  2 | 0  0  0  0  0  0  0  0  0  0
//  3 | 0  0  0  0  0  0  0  0  0  0
//  4 | 0  0  0  0  0  0  0  0  0  0
//  5 | 0  0  0  0  0  0  0  0  0  0
//  6 | 0  0  0  0  0  0  0  0  0  0
//  7 | 0  0  0  0  0  0  0  0  0  0
//  8 | 0  0  0  0  0  0  0  0  0  0
//  9 | 0  0  0  0  0  0  0  0  0  0



struct graph{
    int graph_vertices[10];
    int graph_edges[10][10];
    int size_am;
};


// 3. ADD VERTICES 

int add_vertice(struct graph * g,int data){

    if (g->size_am == 10){return -2;}
    
    if ((g->size_am < 10) && (g->size_am >= 0)){
        int index = g->size_am;

        for(int i = 0; i<index ; i++){
            if (g->graph_vertices[i] == data){
                return -1;
            }
        }

        g->graph_vertices[index] = data;
        g->size_am++;
        return 1;
    }

}

// 4. REMOVE LAST VERTICE 

int remove_last_vertice(struct graph * g){
    if ((g->size_am < 10) && (g->size_am > 0)){
        g->graph_vertices[g->size_am -1] = 0;

        // clearing connections 

        int temp = g->size_am-1;
        for (int i = 0; i < g->size_am; i++){
            g->graph_edges[temp][i] = 0;
            g->graph_edges[i][temp] = 0;
        }

        g->size_am--;
        return 1;
    }

    return 0;
}


// 1. SHOW VERTICES + COUNT 

void show_vertice(struct graph * g){
    if (g->size_am == 0){
        printf("NO DATA");
        return;
    }

        printf("+-------+-------+\n");
        printf("| index | value |\n");
        for (int i = 0; i<g->size_am ;i++){
            printf("|  %3d  |  %3d  |\n",i,g->graph_vertices[i]);
        }
        printf("+-------+-------+\n");
        printf("Count ---> %3d",g->size_am);
}


// 2. SHOW EDGES + COUNT

void show_graph(struct graph * g){
    if (g->size_am == 0){
        printf("NO DATA");
        return;
    }

        printf("+-------+-------+\n");
        printf("| index | value | ---> Connections \n");
        for (int i = 0; i<g->size_am ;i++){
            printf("|  %3d  |  %3d  |",i,g->graph_vertices[i]);
            printf(" ---> ");
            int deg = 0;
            for(int j = 0; j <g->size_am; j++){
                if (g->graph_edges[i][j] == 1){
                    printf("(%d)  ",g->graph_vertices[j]);
                    deg++;
                }
            }
            printf(" :>> (degree -> %d)\n",deg);
        }
        printf("+-------+-------+\n");
        printf("Count ---> %3d",g->size_am);
}


// 5. CONNECT TWO VERTICE

int connect_two_vertice(struct graph * g,int edge_index,int dest_index){
    if (g->size_am == 0){
        return -1; // no data 
    }
    
    if (((edge_index >=0) && (edge_index < g->size_am)) && ((dest_index >=0) && (dest_index < g->size_am))){

        if (g->graph_edges[edge_index][dest_index] == 1){
            return -2;
        }

        g->graph_edges[edge_index][dest_index] = 1;
        return 1;

    }
}


// 6. REMOVE TWO VERTICE CONNECTION

int remove_two_vertice(struct graph * g,int edge_index,int dest_index){
    if (g->size_am == 0){
        return -1; // no data 
    }
    
    if (((edge_index >=0) && (edge_index < g->size_am)) && ((dest_index >=0) && (dest_index < g->size_am))){

        if (g->graph_edges[edge_index][dest_index] == 0){
            return -2;
        }

        g->graph_edges[edge_index][dest_index] = 0;
        return 1;

    }
}


// 7. PRINT NEIGHBOURS OF A VERTICE 

void show_neighbours(struct graph * g,int index){
    if (g->size_am == 0){
        printf("NO DATA");
        return;
    }
    printf("+-------+-------+\n");
    printf("| index | value | ---> Connections \n");
    printf("|  %3d  |  %3d  |",index,g->graph_vertices[index]);
    printf("---> ");
    int deg = 0;
    for (int i = 0; i <g->size_am ; i++){
        if (g->graph_edges[index][i] == 1){
            printf("(%d)  ",g->graph_vertices[i]);
            deg++;
        }
    }
    printf(" :>> (degree -> %d)\n",deg);
    printf("+-------+-------+\n");
    return;
}

// 8.  BFS

void bfs_traverse(struct graph * g){
    
}


// 9. DFS 

void dfs_traverse(struct graph * g){


}



int main(){

    struct graph g = {0};
    int choice,input_val,input_val_2,out;


    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : Show vertices\n");
        printf("2 : Show edges\n");
        printf("3 : Add vertices\n");
        printf("4 : Remove last vertice\n");
        printf("5 : Connect Vertices\n");
        printf("6 : Disonnect Vertices\n");
        printf("7 : Show Neighbours and Degree\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            show_vertice(&g);
            break;

        case 2:
            show_graph(&g);
            break;

        case 3:
            printf("Enter the data of vertice to add : ");
            scanf("%d", &input_val);
            out = add_vertice(&g,input_val);
            if (out == -1)
                printf("Already Exist, Cannot add data\n");
            else if (out == -2)
                printf("Size if Full \n");
            else
                printf("%d Added\n",input_val);
            break;

        case 4:
            out = remove_last_vertice(&g);
            if (out == 1)
                printf("Removed\n");
            else
                printf("Cannot Remove\n");
            break;

        case 5:
            show_graph(&g);
            printf("\nEnter the index of 1st vertice : ");
            scanf("%d", &input_val);
            printf("Enter the index of 2nd vertice (dest) : ");
            scanf("%d", &input_val_2);
            out = connect_two_vertice(&g,input_val,input_val_2);
            if (out == -1)
                printf("No Data \n");
            else if (out == -2)
                printf("Already Connected \n");
            else
                printf("Connected the (%d (%d))--->(%d (%d))\n",g.graph_vertices[input_val],input_val,g.graph_vertices[input_val_2],input_val_2);
            break;

        case 6:
            show_graph(&g);
            printf("\nEnter the index of 1st vertice : ");
            scanf("%d", &input_val);
            printf("Enter the index of 2nd vertice (dest) : ");
            scanf("%d", &input_val_2);
            out = remove_two_vertice(&g,input_val,input_val_2);
            if (out == -1)
                printf("No Data \n");
            else if (out == -2)
                printf("Not Connected \n");
            else
                printf("Disconnected the (%d (%d))--->(%d (%d))\n",g.graph_vertices[input_val],input_val,g.graph_vertices[input_val_2],input_val_2);
            break;
            
        case 7:
            printf("\nEnter the index of vertice : ");
            scanf("%d", &input_val);
            show_neighbours(&g,input_val);
            break;
            
        case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }    

}
```

<!-- qrun:field-end code id="q-08-01" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-08-01" -->



<!-- qrun:field-end freshness id="q-08-01" -->

<!-- qrun:field-start output id="q-08-01" -->

```text
$ gcc q-08-01.c -o ./bin/q-08-01.out && ./bin/q-08-01.out

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 1
NO DATA
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 2
NO DATA
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 3
Enter the data of vertice to add : 12
12 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 3
Enter the data of vertice to add : 14
14 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 3
Enter the data of vertice to add : 50
50 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 3
Enter the data of vertice to add : 40
40 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 3
Enter the data of vertice to add : 80
80 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 3
Enter the data of vertice to add : 40
Already Exist, Cannot add data

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 3
Enter the data of vertice to add : 67
67 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 1
+-------+-------+
| index | value |
|    0  |   12  |
|    1  |   14  |
|    2  |   50  |
|    3  |   40  |
|    4  |   80  |
|    5  |   67  |
+-------+-------+
Count --->   6
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 2
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  | --->  :>> (degree -> 0)
|    1  |   14  | --->  :>> (degree -> 0)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |   40  | --->  :>> (degree -> 0)
|    4  |   80  | --->  :>> (degree -> 0)
|    5  |   67  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 4
Removed

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 2
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  | --->  :>> (degree -> 0)
|    1  |   14  | --->  :>> (degree -> 0)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |   40  | --->  :>> (degree -> 0)
|    4  |   80  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   5
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  | --->  :>> (degree -> 0)
|    1  |   14  | --->  :>> (degree -> 0)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |   40  | --->  :>> (degree -> 0)
|    4  |   80  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   5
Enter the index of 1st vertice : 0
Enter the index of 2nd vertice (dest) : 1
Connected the (12 (0))--->(14 (1))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  | ---> (14)   :>> (degree -> 1)
|    1  |   14  | --->  :>> (degree -> 0)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |   40  | --->  :>> (degree -> 0)
|    4  |   80  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   5
Enter the index of 1st vertice : 0
Enter the index of 2nd vertice (dest) : 2
Connected the (12 (0))--->(50 (2))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  | ---> (14)  (50)   :>> (degree -> 2)
|    1  |   14  | --->  :>> (degree -> 0)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |   40  | --->  :>> (degree -> 0)
|    4  |   80  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   5
Enter the index of 1st vertice : 0
Enter the index of 2nd vertice (dest) : 3
Connected the (12 (0))--->(40 (3))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  | ---> (14)  (50)  (40)   :>> (degree -> 3)
|    1  |   14  | --->  :>> (degree -> 0)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |   40  | --->  :>> (degree -> 0)
|    4  |   80  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   5
Enter the index of 1st vertice : 4
Enter the index of 2nd vertice (dest) : 3
Connected the (80 (4))--->(40 (3))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  | ---> (14)  (50)  (40)   :>> (degree -> 3)
|    1  |   14  | --->  :>> (degree -> 0)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |   40  | --->  :>> (degree -> 0)
|    4  |   80  | ---> (40)   :>> (degree -> 1)
+-------+-------+
Count --->   5
Enter the index of 1st vertice : 2
Enter the index of 2nd vertice (dest) : 3
Connected the (50 (2))--->(40 (3))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  | ---> (14)  (50)  (40)   :>> (degree -> 3)
|    1  |   14  | --->  :>> (degree -> 0)
|    2  |   50  | ---> (40)   :>> (degree -> 1)
|    3  |   40  | --->  :>> (degree -> 0)
|    4  |   80  | ---> (40)   :>> (degree -> 1)
+-------+-------+
Count --->   5
Enter the index of 1st vertice : 2
Enter the index of 2nd vertice (dest) : 4
Connected the (50 (2))--->(80 (4))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 2
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  | ---> (14)  (50)  (40)   :>> (degree -> 3)
|    1  |   14  | --->  :>> (degree -> 0)
|    2  |   50  | ---> (40)  (80)   :>> (degree -> 2)
|    3  |   40  | --->  :>> (degree -> 0)
|    4  |   80  | ---> (40)   :>> (degree -> 1)
+-------+-------+
Count --->   5
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 3
Enter the data of vertice to add : 34
34 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 3
Enter the data of vertice to add : 20
20 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 2
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  | ---> (14)  (50)  (40)   :>> (degree -> 3)
|    1  |   14  | --->  :>> (degree -> 0)
|    2  |   50  | ---> (40)  (80)   :>> (degree -> 2)
|    3  |   40  | --->  :>> (degree -> 0)
|    4  |   80  | ---> (40)   :>> (degree -> 1)
|    5  |   34  | --->  :>> (degree -> 0)
|    6  |   20  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   7
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 4
Removed

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 4
Removed

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 2
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  | ---> (14)  (50)  (40)   :>> (degree -> 3)
|    1  |   14  | --->  :>> (degree -> 0)
|    2  |   50  | ---> (40)  (80)   :>> (degree -> 2)
|    3  |   40  | --->  :>> (degree -> 0)
|    4  |   80  | ---> (40)   :>> (degree -> 1)
+-------+-------+
Count --->   5
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  | ---> (14)  (50)  (40)   :>> (degree -> 3)
|    1  |   14  | --->  :>> (degree -> 0)
|    2  |   50  | ---> (40)  (80)   :>> (degree -> 2)
|    3  |   40  | --->  :>> (degree -> 0)
|    4  |   80  | ---> (40)   :>> (degree -> 1)
+-------+-------+
Count --->   5
Enter the index of 1st vertice : 3
Enter the index of 2nd vertice (dest) : 1
Connected the (40 (3))--->(14 (1))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 3
Enter the data of vertice to add : 40
Already Exist, Cannot add data

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 2
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  | ---> (14)  (50)  (40)   :>> (degree -> 3)
|    1  |   14  | --->  :>> (degree -> 0)
|    2  |   50  | ---> (40)  (80)   :>> (degree -> 2)
|    3  |   40  | ---> (14)   :>> (degree -> 1)
|    4  |   80  | ---> (40)   :>> (degree -> 1)
+-------+-------+
Count --->   5
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 6
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  | ---> (14)  (50)  (40)   :>> (degree -> 3)
|    1  |   14  | --->  :>> (degree -> 0)
|    2  |   50  | ---> (40)  (80)   :>> (degree -> 2)
|    3  |   40  | ---> (14)   :>> (degree -> 1)
|    4  |   80  | ---> (40)   :>> (degree -> 1)
+-------+-------+
Count --->   5
Enter the index of 1st vertice : 2
Enter the index of 2nd vertice (dest) : 3
Disconnected the (50 (2))--->(40 (3))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 3
Enter the data of vertice to add : 4
4 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 2
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  | ---> (14)  (50)  (40)   :>> (degree -> 3)
|    1  |   14  | --->  :>> (degree -> 0)
|    2  |   50  | ---> (80)   :>> (degree -> 1)
|    3  |   40  | ---> (14)   :>> (degree -> 1)
|    4  |   80  | ---> (40)   :>> (degree -> 1)
|    5  |    4  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 4
Removed

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 3
Enter the data of vertice to add : 4
4 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 4
Removed

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 2
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  | ---> (14)  (50)  (40)   :>> (degree -> 3)
|    1  |   14  | --->  :>> (degree -> 0)
|    2  |   50  | ---> (80)   :>> (degree -> 1)
|    3  |   40  | ---> (14)   :>> (degree -> 1)
|    4  |   80  | ---> (40)   :>> (degree -> 1)
+-------+-------+
Count --->   5
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 6
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  | ---> (14)  (50)  (40)   :>> (degree -> 3)
|    1  |   14  | --->  :>> (degree -> 0)
|    2  |   50  | ---> (80)   :>> (degree -> 1)
|    3  |   40  | ---> (14)   :>> (degree -> 1)
|    4  |   80  | ---> (40)   :>> (degree -> 1)
+-------+-------+
Count --->   5
Enter the index of 1st vertice : 0
Enter the index of 2nd vertice (dest) : 2
Disconnected the (12 (0))--->(50 (2))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 2
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  | ---> (14)  (40)   :>> (degree -> 2)
|    1  |   14  | --->  :>> (degree -> 0)
|    2  |   50  | ---> (80)   :>> (degree -> 1)
|    3  |   40  | ---> (14)   :>> (degree -> 1)
|    4  |   80  | ---> (40)   :>> (degree -> 1)
+-------+-------+
Count --->   5
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 4
Removed

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 3
Enter the data of vertice to add : 34
34 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 2
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  | ---> (14)  (40)   :>> (degree -> 2)
|    1  |   14  | --->  :>> (degree -> 0)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |   40  | ---> (14)   :>> (degree -> 1)
|    4  |   34  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   5
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 7

Enter the index of vertice : 0
+-------+-------+
| index | value | ---> Connections 
|    0  |   12  |---> (14)  (40)   :>> (degree -> 2)
+-------+-------+

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
0 : exit
Enter choice : 0
exitting ...
```

<!-- qrun:field-end output id="q-08-01" -->
<!-- qrun:entry-end id="q-08-01" -->


<!-- qrun:entry-start id="q-08-03" -->

<!-- qrun:field-start question id="q-08-03" -->

## Q 03 : Traverse an adjacency matrix using Depth-First Search (DFS).

<!-- qrun:field-end question id="q-08-03" -->

### CODE

<!-- qrun:field-start code id="q-08-03" -->

```c
// Graphs -> Q 03 : Traverse an adjacency matrix using Depth-First Search (DFS).

#include <stdio.h>

// IT IS DIRECTED GRAPH , USING ADJACENT MATICS AND FIXED SIZED 

// 1. Show vertices + show count
// 2. Show graph + connections + show count 
// 3. Add vertice (10 max)
// 4. Remove last vertice 
// 5. Connect two verices (ie print the current graph)
// 6. Remove two verices connection (ie print the current graph)
// 7. Print neighbours + degree


//      0  1  2  3  4  5  6  7  8  9
//    +------------------------------
//  0 | 0  0  0  0  0  0  0  0  0  0
//  1 | 0  0  0  0  0  0  0  0  0  0
//  2 | 0  0  0  0  0  0  0  0  0  0
//  3 | 0  0  0  0  0  0  0  0  0  0
//  4 | 0  0  0  0  0  0  0  0  0  0
//  5 | 0  0  0  0  0  0  0  0  0  0
//  6 | 0  0  0  0  0  0  0  0  0  0
//  7 | 0  0  0  0  0  0  0  0  0  0
//  8 | 0  0  0  0  0  0  0  0  0  0
//  9 | 0  0  0  0  0  0  0  0  0  0



struct graph{
    int graph_vertices[10];
    int graph_edges[10][10];
    int size_am;
};


// 3. ADD VERTICES 

int add_vertice(struct graph * g,int data){

    if (g->size_am == 10){return -2;}
    
    if ((g->size_am < 10) && (g->size_am >= 0)){
        int index = g->size_am;

        for(int i = 0; i<index ; i++){
            if (g->graph_vertices[i] == data){
                return -1;
            }
        }

        g->graph_vertices[index] = data;
        g->size_am++;
        return 1;
    }

}

// 4. REMOVE LAST VERTICE 

int remove_last_vertice(struct graph * g){
    if ((g->size_am < 10) && (g->size_am > 0)){
        g->graph_vertices[g->size_am -1] = 0;

        // clearing connections 

        int temp = g->size_am-1;
        for (int i = 0; i < g->size_am; i++){
            g->graph_edges[temp][i] = 0;
            g->graph_edges[i][temp] = 0;
        }

        g->size_am--;
        return 1;
    }

    return 0;
}


// 1. SHOW VERTICES + COUNT 

void show_vertice(struct graph * g){
    if (g->size_am == 0){
        printf("NO DATA");
        return;
    }

        printf("+-------+-------+\n");
        printf("| index | value |\n");
        for (int i = 0; i<g->size_am ;i++){
            printf("|  %3d  |  %3d  |\n",i,g->graph_vertices[i]);
        }
        printf("+-------+-------+\n");
        printf("Count ---> %3d",g->size_am);
}


// 2. SHOW EDGES + COUNT

void show_graph(struct graph * g){
    if (g->size_am == 0){
        printf("NO DATA");
        return;
    }

        printf("+-------+-------+\n");
        printf("| index | value | ---> Connections \n");
        for (int i = 0; i<g->size_am ;i++){
            printf("|  %3d  |  %3d  |",i,g->graph_vertices[i]);
            printf(" ---> ");
            int deg = 0;
            for(int j = 0; j <g->size_am; j++){
                if (g->graph_edges[i][j] == 1){
                    printf("(%d)  ",g->graph_vertices[j]);
                    deg++;
                }
            }
            printf(" :>> (degree -> %d)\n",deg);
        }
        printf("+-------+-------+\n");
        printf("Count ---> %3d",g->size_am);
}


// 5. CONNECT TWO VERTICE

int connect_two_vertice(struct graph * g,int edge_index,int dest_index){
    if (g->size_am == 0){
        return -1; // no data 
    }
    
    if (((edge_index >=0) && (edge_index < g->size_am)) && ((dest_index >=0) && (dest_index < g->size_am))){

        if (g->graph_edges[edge_index][dest_index] == 1){
            return -2;
        }

        g->graph_edges[edge_index][dest_index] = 1;
        return 1;

    }
}


// 6. REMOVE TWO VERTICE CONNECTION

int remove_two_vertice(struct graph * g,int edge_index,int dest_index){
    if (g->size_am == 0){
        return -1; // no data 
    }
    
    if (((edge_index >=0) && (edge_index < g->size_am)) && ((dest_index >=0) && (dest_index < g->size_am))){

        if (g->graph_edges[edge_index][dest_index] == 0){
            return -2;
        }

        g->graph_edges[edge_index][dest_index] = 0;
        return 1;

    }
}


// 7. PRINT NEIGHBOURS OF A VERTICE 

void show_neighbours(struct graph * g,int index){
    if (g->size_am == 0){
        printf("NO DATA");
        return;
    }
    printf("+-------+-------+\n");
    printf("| index | value | ---> Connections \n");
    printf("|  %3d  |  %3d  |",index,g->graph_vertices[index]);
    printf("---> ");
    int deg = 0;
    for (int i = 0; i <g->size_am ; i++){
        if (g->graph_edges[index][i] == 1){
            printf("(%d)  ",g->graph_vertices[i]);
            deg++;
        }
    }
    printf(" :>> (degree -> %d)\n",deg);
    printf("+-------+-------+\n");
    return;
}



// 9. DFS 

void dfs(struct graph *g, int index, int visited[]){

    // if (visited[index])
    //     return;    less perfomtive then hst checking it in the for loop stopping it to creatifng a recursive fn node before 
        
    visited[index] = 1;
    printf("(%d) <-> ", g->graph_vertices[index]);

    for (int i = 0; i < g->size_am; i++){
        if (g->graph_edges[index][i] == 1 && !visited[i]){
            dfs(g, i, visited);
        }
    }
}

void dfs_traverse(struct graph *g,int start){
    if (g->size_am == 0){
        printf("NO DATA\n");
        return;
    }

    int visited[10] = {0};

    show_vertice(g);
    if (start < 0 || start >= g->size_am){
        printf("Invalid vertex index\n");
        return;
    }
    printf("DFS Traversal ->>  ");
    dfs(g, start, visited);
    printf("\n");
}



int main(){

    struct graph g = {0};
    int choice,input_val,input_val_2,out;


    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : Show vertices\n");
        printf("2 : Show edges\n");
        printf("3 : Add vertices\n");
        printf("4 : Remove last vertice\n");
        printf("5 : Connect Vertices\n");
        printf("6 : Disonnect Vertices\n");
        printf("7 : Show Neighbours and Degree\n");
        printf("8 : DFS Traverse\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            show_vertice(&g);
            break;

        case 2:
            show_graph(&g);
            break;

        case 3:
            printf("Enter the data of vertice to add : ");
            scanf("%d", &input_val);
            out = add_vertice(&g,input_val);
            if (out == -1)
                printf("Already Exist, Cannot add data\n");
            else if (out == -2)
                printf("Size if Full \n");
            else
                printf("%d Added\n",input_val);
            break;

        case 4:
            out = remove_last_vertice(&g);
            if (out == 1)
                printf("Removed\n");
            else
                printf("Cannot Remove\n");
            break;

        case 5:
            show_graph(&g);
            printf("\nEnter the index of 1st vertice : ");
            scanf("%d", &input_val);
            printf("Enter the index of 2nd vertice (dest) : ");
            scanf("%d", &input_val_2);
            out = connect_two_vertice(&g,input_val,input_val_2);
            if (out == -1)
                printf("No Data \n");
            else if (out == -2)
                printf("Already Connected \n");
            else
                printf("Connected the (%d (%d))--->(%d (%d))\n",g.graph_vertices[input_val],input_val,g.graph_vertices[input_val_2],input_val_2);
            break;

        case 6:
            show_graph(&g);
            printf("\nEnter the index of 1st vertice : ");
            scanf("%d", &input_val);
            printf("Enter the index of 2nd vertice (dest) : ");
            scanf("%d", &input_val_2);
            out = remove_two_vertice(&g,input_val,input_val_2);
            if (out == -1)
                printf("No Data \n");
            else if (out == -2)
                printf("Not Connected \n");
            else
                printf("Disconnected the (%d (%d))--->(%d (%d))\n",g.graph_vertices[input_val],input_val,g.graph_vertices[input_val_2],input_val_2);
            break;
            
        case 7:
            printf("\nEnter the index of vertice : ");
            scanf("%d", &input_val);
            show_neighbours(&g,input_val);
            break;

        
            
        case 8:
            printf("\nEnter the index of vertice to be used as Source : ");
            scanf("%d", &input_val);
            dfs_traverse(&g,input_val);
            break;
            
        case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }    

}
```

<!-- qrun:field-end code id="q-08-03" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-08-03" -->



<!-- qrun:field-end freshness id="q-08-03" -->

<!-- qrun:field-start output id="q-08-03" -->

```text
$ gcc q-08-03.c -o ./bin/q-08-03.out && ./bin/q-08-03.out

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 
1
NO DATA
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 2
NO DATA
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 3
Enter the data of vertice to add : 40
40 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 3
Enter the data of vertice to add : 50
50 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 3
Enter the data of vertice to add : 20
20 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 3
Enter the data of vertice to add : 46
46 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 3
Enter the data of vertice to add : 10
10 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 3
Enter the data of vertice to add : 69
69 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 3
Enter the data of vertice to add : 45
45 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 4
Removed

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 2
+-------+-------+
| index | value | ---> Connections 
|    0  |   40  | --->  :>> (degree -> 0)
|    1  |   50  | --->  :>> (degree -> 0)
|    2  |   20  | --->  :>> (degree -> 0)
|    3  |   46  | --->  :>> (degree -> 0)
|    4  |   10  | --->  :>> (degree -> 0)
|    5  |   69  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   40  | --->  :>> (degree -> 0)
|    1  |   50  | --->  :>> (degree -> 0)
|    2  |   20  | --->  :>> (degree -> 0)
|    3  |   46  | --->  :>> (degree -> 0)
|    4  |   10  | --->  :>> (degree -> 0)
|    5  |   69  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 1
Enter the index of 2nd vertice (dest) : 2
Connected the (50 (1))--->(20 (2))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   40  | --->  :>> (degree -> 0)
|    1  |   50  | ---> (20)   :>> (degree -> 1)
|    2  |   20  | --->  :>> (degree -> 0)
|    3  |   46  | --->  :>> (degree -> 0)
|    4  |   10  | --->  :>> (degree -> 0)
|    5  |   69  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 2
Enter the index of 2nd vertice (dest) : 3
Connected the (20 (2))--->(46 (3))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   40  | --->  :>> (degree -> 0)
|    1  |   50  | ---> (20)   :>> (degree -> 1)
|    2  |   20  | ---> (46)   :>> (degree -> 1)
|    3  |   46  | --->  :>> (degree -> 0)
|    4  |   10  | --->  :>> (degree -> 0)
|    5  |   69  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 3
Enter the index of 2nd vertice (dest) : 4
Connected the (46 (3))--->(10 (4))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   40  | --->  :>> (degree -> 0)
|    1  |   50  | ---> (20)   :>> (degree -> 1)
|    2  |   20  | ---> (46)   :>> (degree -> 1)
|    3  |   46  | ---> (10)   :>> (degree -> 1)
|    4  |   10  | --->  :>> (degree -> 0)
|    5  |   69  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 4
Enter the index of 2nd vertice (dest) : 5
Connected the (10 (4))--->(69 (5))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   40  | --->  :>> (degree -> 0)
|    1  |   50  | ---> (20)   :>> (degree -> 1)
|    2  |   20  | ---> (46)   :>> (degree -> 1)
|    3  |   46  | ---> (10)   :>> (degree -> 1)
|    4  |   10  | ---> (69)   :>> (degree -> 1)
|    5  |   69  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 4
Enter the index of 2nd vertice (dest) : 1
Connected the (10 (4))--->(50 (1))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   40  | --->  :>> (degree -> 0)
|    1  |   50  | ---> (20)   :>> (degree -> 1)
|    2  |   20  | ---> (46)   :>> (degree -> 1)
|    3  |   46  | ---> (10)   :>> (degree -> 1)
|    4  |   10  | ---> (50)  (69)   :>> (degree -> 2)
|    5  |   69  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 1
Enter the index of 2nd vertice (dest) : 4
Connected the (50 (1))--->(10 (4))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   40  | --->  :>> (degree -> 0)
|    1  |   50  | ---> (20)  (10)   :>> (degree -> 2)
|    2  |   20  | ---> (46)   :>> (degree -> 1)
|    3  |   46  | ---> (10)   :>> (degree -> 1)
|    4  |   10  | ---> (50)  (69)   :>> (degree -> 2)
|    5  |   69  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 2
Enter the index of 2nd vertice (dest) : 5
Connected the (20 (2))--->(69 (5))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   40  | --->  :>> (degree -> 0)
|    1  |   50  | ---> (20)  (10)   :>> (degree -> 2)
|    2  |   20  | ---> (46)  (69)   :>> (degree -> 2)
|    3  |   46  | ---> (10)   :>> (degree -> 1)
|    4  |   10  | ---> (50)  (69)   :>> (degree -> 2)
|    5  |   69  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 3
Enter the index of 2nd vertice (dest) : 1
Connected the (46 (3))--->(50 (1))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   40  | --->  :>> (degree -> 0)
|    1  |   50  | ---> (20)  (10)   :>> (degree -> 2)
|    2  |   20  | ---> (46)  (69)   :>> (degree -> 2)
|    3  |   46  | ---> (50)  (10)   :>> (degree -> 2)
|    4  |   10  | ---> (50)  (69)   :>> (degree -> 2)
|    5  |   69  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 3
Enter the index of 2nd vertice (dest) : 5
Connected the (46 (3))--->(69 (5))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   40  | --->  :>> (degree -> 0)
|    1  |   50  | ---> (20)  (10)   :>> (degree -> 2)
|    2  |   20  | ---> (46)  (69)   :>> (degree -> 2)
|    3  |   46  | ---> (50)  (10)  (69)   :>> (degree -> 3)
|    4  |   10  | ---> (50)  (69)   :>> (degree -> 2)
|    5  |   69  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 0
Enter the index of 2nd vertice (dest) : 3
Connected the (40 (0))--->(46 (3))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   40  | ---> (46)   :>> (degree -> 1)
|    1  |   50  | ---> (20)  (10)   :>> (degree -> 2)
|    2  |   20  | ---> (46)  (69)   :>> (degree -> 2)
|    3  |   46  | ---> (50)  (10)  (69)   :>> (degree -> 3)
|    4  |   10  | ---> (50)  (69)   :>> (degree -> 2)
|    5  |   69  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 0
Enter the index of 2nd vertice (dest) : 2
Connected the (40 (0))--->(20 (2))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   40  | ---> (20)  (46)   :>> (degree -> 2)
|    1  |   50  | ---> (20)  (10)   :>> (degree -> 2)
|    2  |   20  | ---> (46)  (69)   :>> (degree -> 2)
|    3  |   46  | ---> (50)  (10)  (69)   :>> (degree -> 3)
|    4  |   10  | ---> (50)  (69)   :>> (degree -> 2)
|    5  |   69  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 04
Enter the index of 2nd vertice (dest) : 1
Already Connected 

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   40  | ---> (20)  (46)   :>> (degree -> 2)
|    1  |   50  | ---> (20)  (10)   :>> (degree -> 2)
|    2  |   20  | ---> (46)  (69)   :>> (degree -> 2)
|    3  |   46  | ---> (50)  (10)  (69)   :>> (degree -> 3)
|    4  |   10  | ---> (50)  (69)   :>> (degree -> 2)
|    5  |   69  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 0
Enter the index of 2nd vertice (dest) : 4
Connected the (40 (0))--->(10 (4))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   40  | ---> (20)  (46)  (10)   :>> (degree -> 3)
|    1  |   50  | ---> (20)  (10)   :>> (degree -> 2)
|    2  |   20  | ---> (46)  (69)   :>> (degree -> 2)
|    3  |   46  | ---> (50)  (10)  (69)   :>> (degree -> 3)
|    4  |   10  | ---> (50)  (69)   :>> (degree -> 2)
|    5  |   69  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 0
Enter the index of 2nd vertice (dest) : 2
Already Connected 

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   40  | ---> (20)  (46)  (10)   :>> (degree -> 3)
|    1  |   50  | ---> (20)  (10)   :>> (degree -> 2)
|    2  |   20  | ---> (46)  (69)   :>> (degree -> 2)
|    3  |   46  | ---> (50)  (10)  (69)   :>> (degree -> 3)
|    4  |   10  | ---> (50)  (69)   :>> (degree -> 2)
|    5  |   69  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 5
Enter the index of 2nd vertice (dest) : 0
Connected the (69 (5))--->(40 (0))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   40  | ---> (20)  (46)  (10)   :>> (degree -> 3)
|    1  |   50  | ---> (20)  (10)   :>> (degree -> 2)
|    2  |   20  | ---> (46)  (69)   :>> (degree -> 2)
|    3  |   46  | ---> (50)  (10)  (69)   :>> (degree -> 3)
|    4  |   10  | ---> (50)  (69)   :>> (degree -> 2)
|    5  |   69  | ---> (40)   :>> (degree -> 1)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 5
Enter the index of 2nd vertice (dest) : 2
Connected the (69 (5))--->(20 (2))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |   40  | ---> (20)  (46)  (10)   :>> (degree -> 3)
|    1  |   50  | ---> (20)  (10)   :>> (degree -> 2)
|    2  |   20  | ---> (46)  (69)   :>> (degree -> 2)
|    3  |   46  | ---> (50)  (10)  (69)   :>> (degree -> 3)
|    4  |   10  | ---> (50)  (69)   :>> (degree -> 2)
|    5  |   69  | ---> (40)  (20)   :>> (degree -> 2)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 5
Enter the index of 2nd vertice (dest) : 1
Connected the (69 (5))--->(50 (1))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 2
+-------+-------+
| index | value | ---> Connections 
|    0  |   40  | ---> (20)  (46)  (10)   :>> (degree -> 3)
|    1  |   50  | ---> (20)  (10)   :>> (degree -> 2)
|    2  |   20  | ---> (46)  (69)   :>> (degree -> 2)
|    3  |   46  | ---> (50)  (10)  (69)   :>> (degree -> 3)
|    4  |   10  | ---> (50)  (69)   :>> (degree -> 2)
|    5  |   69  | ---> (40)  (50)  (20)   :>> (degree -> 3)
+-------+-------+
Count --->   6
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 8

Enter the index of vertice to be used as Source : 0
+-------+-------+
| index | value |
|    0  |   40  |
|    1  |   50  |
|    2  |   20  |
|    3  |   46  |
|    4  |   10  |
|    5  |   69  |
+-------+-------+
Count --->   6DFS Traversal ->>  (40) <-> (20) <-> (46) <-> (50) <-> (10) <-> (69) <-> 

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : DFS Traverse
0 : exit
Enter choice : 0
exitting ...
```

<!-- qrun:field-end output id="q-08-03" -->
<!-- qrun:entry-end id="q-08-03" -->


<!-- qrun:entry-start id="q-08-05" -->

<!-- qrun:field-start question id="q-08-05" -->

## Q 05 : Traverse an adjacency matrix using Breadth-First Search (BFS).

<!-- qrun:field-end question id="q-08-05" -->

### CODE

<!-- qrun:field-start code id="q-08-05" -->

```c
// Graphs -> Q 05 : Traverse an adjacency matrix using Breadth-First Search (BFS).
#include <stdio.h>
#include "../queue/queue.c"
// IT IS DIRECTED GRAPH , USING ADJACENT MATICS AND FIXED SIZED 

// 1. Show vertices + show count
// 2. Show graph + connections + show count 
// 3. Add vertice (10 max)
// 4. Remove last vertice 
// 5. Connect two verices (ie print the current graph)
// 6. Remove two verices connection (ie print the current graph)
// 7. Print neighbours + degree


//      0  1  2  3  4  5  6  7  8  9
//    +------------------------------
//  0 | 0  0  0  0  0  0  0  0  0  0
//  1 | 0  0  0  0  0  0  0  0  0  0
//  2 | 0  0  0  0  0  0  0  0  0  0
//  3 | 0  0  0  0  0  0  0  0  0  0
//  4 | 0  0  0  0  0  0  0  0  0  0
//  5 | 0  0  0  0  0  0  0  0  0  0
//  6 | 0  0  0  0  0  0  0  0  0  0
//  7 | 0  0  0  0  0  0  0  0  0  0
//  8 | 0  0  0  0  0  0  0  0  0  0
//  9 | 0  0  0  0  0  0  0  0  0  0



struct graph{
    int graph_vertices[10];
    int graph_edges[10][10];
    int size_am;
};


// 3. ADD VERTICES 

int add_vertice(struct graph * g,int data){

    if (g->size_am == 10){return -2;}
    
    if ((g->size_am < 10) && (g->size_am >= 0)){
        int index = g->size_am;

        for(int i = 0; i<index ; i++){
            if (g->graph_vertices[i] == data){
                return -1;
            }
        }

        g->graph_vertices[index] = data;
        g->size_am++;
        return 1;
    }

}

// 4. REMOVE LAST VERTICE 

int remove_last_vertice(struct graph * g){
    if ((g->size_am < 10) && (g->size_am > 0)){
        g->graph_vertices[g->size_am -1] = 0;

        // clearing connections 

        int temp = g->size_am-1;
        for (int i = 0; i < g->size_am; i++){
            g->graph_edges[temp][i] = 0;
            g->graph_edges[i][temp] = 0;
        }

        g->size_am--;
        return 1;
    }

    return 0;
}


// 1. SHOW VERTICES + COUNT 

void show_vertice(struct graph * g){
    if (g->size_am == 0){
        printf("NO DATA");
        return;
    }

        printf("+-------+-------+\n");
        printf("| index | value |\n");
        for (int i = 0; i<g->size_am ;i++){
            printf("|  %3d  |  %3d  |\n",i,g->graph_vertices[i]);
        }
        printf("+-------+-------+\n");
        printf("Count ---> %3d",g->size_am);
}


// 2. SHOW EDGES + COUNT

void show_graph(struct graph * g){
    if (g->size_am == 0){
        printf("NO DATA");
        return;
    }

        printf("+-------+-------+\n");
        printf("| index | value | ---> Connections \n");
        for (int i = 0; i<g->size_am ;i++){
            printf("|  %3d  |  %3d  |",i,g->graph_vertices[i]);
            printf(" ---> ");
            int deg = 0;
            for(int j = 0; j <g->size_am; j++){
                if (g->graph_edges[i][j] == 1){
                    printf("(%d)  ",g->graph_vertices[j]);
                    deg++;
                }
            }
            printf(" :>> (degree -> %d)\n",deg);
        }
        printf("+-------+-------+\n");
        printf("Count ---> %3d",g->size_am);
}


// 5. CONNECT TWO VERTICE

int connect_two_vertice(struct graph * g,int edge_index,int dest_index){
    if (g->size_am == 0){
        return -1; // no data 
    }
    
    if (((edge_index >=0) && (edge_index < g->size_am)) && ((dest_index >=0) && (dest_index < g->size_am))){

        if (g->graph_edges[edge_index][dest_index] == 1){
            return -2;
        }

        g->graph_edges[edge_index][dest_index] = 1;
        return 1;

    }
}


// 6. REMOVE TWO VERTICE CONNECTION

int remove_two_vertice(struct graph * g,int edge_index,int dest_index){
    if (g->size_am == 0){
        return -1; // no data 
    }
    
    if (((edge_index >=0) && (edge_index < g->size_am)) && ((dest_index >=0) && (dest_index < g->size_am))){

        if (g->graph_edges[edge_index][dest_index] == 0){
            return -2;
        }

        g->graph_edges[edge_index][dest_index] = 0;
        return 1;

    }
}


// 7. PRINT NEIGHBOURS OF A VERTICE 

void show_neighbours(struct graph * g,int index){
    if (g->size_am == 0){
        printf("NO DATA");
        return;
    }
    printf("+-------+-------+\n");
    printf("| index | value | ---> Connections \n");
    printf("|  %3d  |  %3d  |",index,g->graph_vertices[index]);
    printf("---> ");
    int deg = 0;
    for (int i = 0; i <g->size_am ; i++){
        if (g->graph_edges[index][i] == 1){
            printf("(%d)  ",g->graph_vertices[i]);
            deg++;
        }
    }
    printf(" :>> (degree -> %d)\n",deg);
    printf("+-------+-------+\n");
    return;
}



// 8. BFS 

void bfs(struct graph * g,int start,int * visited){
    int queue[QUEUE_SIZE] = {0};
    int front = -1;
    int rear = -1;

    visited[start] = 1;
    enqueue(queue,&front,&rear,start);
    
    while(!is_empty(queue,front,rear)){

        int index = fn_front(queue,front);
        dequeue(&front,&rear);
        printf("(%d) <-> ", g->graph_vertices[index]);

        for(int i = 0; i < g->size_am ; i++){

            if (g->graph_edges[index][i] == 1 && !visited[i]){
                visited[i] = 1;
                enqueue(queue,&front,&rear, i);
            }

        }


    }

}




void bfs_traverse(struct graph *g,int start){
    if (g->size_am == 0){
        printf("NO DATA\n");
        return;
    }

    int visited[10] = {0};

    show_vertice(g);
    if (start < 0 || start >= g->size_am){
        printf("\nInvalid vertex index\n");
        return;
    }
    printf("\nBFS Traversal ->>  ");
    bfs(g, start, visited);
    printf("\n");
}



int main(){

    struct graph g = {0};
    int choice,input_val,input_val_2,out;


    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : Show vertices\n");
        printf("2 : Show edges\n");
        printf("3 : Add vertices\n");
        printf("4 : Remove last vertice\n");
        printf("5 : Connect Vertices\n");
        printf("6 : Disonnect Vertices\n");
        printf("7 : Show Neighbours and Degree\n");
        printf("8 : BFS Traverse\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            show_vertice(&g);
            break;

        case 2:
            show_graph(&g);
            break;

        case 3:
            printf("Enter the data of vertice to add : ");
            scanf("%d", &input_val);
            out = add_vertice(&g,input_val);
            if (out == -1)
                printf("Already Exist, Cannot add data\n");
            else if (out == -2)
                printf("Size if Full \n");
            else
                printf("%d Added\n",input_val);
            break;

        case 4:
            out = remove_last_vertice(&g);
            if (out == 1)
                printf("Removed\n");
            else
                printf("Cannot Remove\n");
            break;

        case 5:
            show_graph(&g);
            printf("\nEnter the index of 1st vertice : ");
            scanf("%d", &input_val);
            printf("Enter the index of 2nd vertice (dest) : ");
            scanf("%d", &input_val_2);
            out = connect_two_vertice(&g,input_val,input_val_2);
            if (out == -1)
                printf("No Data \n");
            else if (out == -2)
                printf("Already Connected \n");
            else
                printf("Connected the (%d (%d))--->(%d (%d))\n",g.graph_vertices[input_val],input_val,g.graph_vertices[input_val_2],input_val_2);
            break;

        case 6:
            show_graph(&g);
            printf("\nEnter the index of 1st vertice : ");
            scanf("%d", &input_val);
            printf("Enter the index of 2nd vertice (dest) : ");
            scanf("%d", &input_val_2);
            out = remove_two_vertice(&g,input_val,input_val_2);
            if (out == -1)
                printf("No Data \n");
            else if (out == -2)
                printf("Not Connected \n");
            else
                printf("Disconnected the (%d (%d))--->(%d (%d))\n",g.graph_vertices[input_val],input_val,g.graph_vertices[input_val_2],input_val_2);
            break;
            
        case 7:
            printf("\nEnter the index of vertice : ");
            scanf("%d", &input_val);
            show_neighbours(&g,input_val);
            break;

        
            
        case 8:
            printf("\nEnter the index of vertice to be used as Source : ");
            scanf("%d", &input_val);
            bfs_traverse(&g,input_val);
            break;
            
        case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }    

}
```

<!-- qrun:field-end code id="q-08-05" -->

### OUTPUT

<!-- qrun:field-start freshness id="q-08-05" -->



<!-- qrun:field-end freshness id="q-08-05" -->

<!-- qrun:field-start output id="q-08-05" -->

```text
$ gcc q-08-05.c -o ./bin/q-08-05.out && ./bin/q-08-05.out

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 1
NO DATA
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 3
Enter the data of vertice to add : 1
1 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 3
Enter the data of vertice to add : 46
46 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 3
Enter the data of vertice to add : 46
Already Exist, Cannot add data

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 3
Enter the data of vertice to add : 50
50 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 3
Enter the data of vertice to add : 500
500 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 3
Enter the data of vertice to add : 59
59 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 3
Enter the data of vertice to add : 48
48 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 2
+-------+-------+
| index | value | ---> Connections 
|    0  |    1  | --->  :>> (degree -> 0)
|    1  |   46  | --->  :>> (degree -> 0)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |  500  | --->  :>> (degree -> 0)
|    4  |   59  | --->  :>> (degree -> 0)
|    5  |   48  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 4
Removed

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 3
Enter the data of vertice to add : 40
40 Added

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 2
+-------+-------+
| index | value | ---> Connections 
|    0  |    1  | --->  :>> (degree -> 0)
|    1  |   46  | --->  :>> (degree -> 0)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |  500  | --->  :>> (degree -> 0)
|    4  |   59  | --->  :>> (degree -> 0)
|    5  |   40  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 7

Enter the index of vertice : 0
+-------+-------+
| index | value | ---> Connections 
|    0  |    1  |--->  :>> (degree -> 0)
+-------+-------+

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 8

Enter the index of vertice to be used as Source : 0
+-------+-------+
| index | value |
|    0  |    1  |
|    1  |   46  |
|    2  |   50  |
|    3  |  500  |
|    4  |   59  |
|    5  |   40  |
+-------+-------+
Count --->   6
BFS Traversal ->>  (1) <-> 

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |    1  | --->  :>> (degree -> 0)
|    1  |   46  | --->  :>> (degree -> 0)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |  500  | --->  :>> (degree -> 0)
|    4  |   59  | --->  :>> (degree -> 0)
|    5  |   40  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 0
Enter the index of 2nd vertice (dest) : 1
Connected the (1 (0))--->(46 (1))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |    1  | ---> (46)   :>> (degree -> 1)
|    1  |   46  | --->  :>> (degree -> 0)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |  500  | --->  :>> (degree -> 0)
|    4  |   59  | --->  :>> (degree -> 0)
|    5  |   40  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 0
Enter the index of 2nd vertice (dest) : 2
Connected the (1 (0))--->(50 (2))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |    1  | ---> (46)  (50)   :>> (degree -> 2)
|    1  |   46  | --->  :>> (degree -> 0)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |  500  | --->  :>> (degree -> 0)
|    4  |   59  | --->  :>> (degree -> 0)
|    5  |   40  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 0
Enter the index of 2nd vertice (dest) : 3
Connected the (1 (0))--->(500 (3))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |    1  | ---> (46)  (50)  (500)   :>> (degree -> 3)
|    1  |   46  | --->  :>> (degree -> 0)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |  500  | --->  :>> (degree -> 0)
|    4  |   59  | --->  :>> (degree -> 0)
|    5  |   40  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 1
Enter the index of 2nd vertice (dest) : 2
Connected the (46 (1))--->(50 (2))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |    1  | ---> (46)  (50)  (500)   :>> (degree -> 3)
|    1  |   46  | ---> (50)   :>> (degree -> 1)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |  500  | --->  :>> (degree -> 0)
|    4  |   59  | --->  :>> (degree -> 0)
|    5  |   40  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 3
Enter the index of 2nd vertice (dest) : 4
Connected the (500 (3))--->(59 (4))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |    1  | ---> (46)  (50)  (500)   :>> (degree -> 3)
|    1  |   46  | ---> (50)   :>> (degree -> 1)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |  500  | ---> (59)   :>> (degree -> 1)
|    4  |   59  | --->  :>> (degree -> 0)
|    5  |   40  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 3
Enter the index of 2nd vertice (dest) : 5
Connected the (500 (3))--->(40 (5))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |    1  | ---> (46)  (50)  (500)   :>> (degree -> 3)
|    1  |   46  | ---> (50)   :>> (degree -> 1)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |  500  | ---> (59)  (40)   :>> (degree -> 2)
|    4  |   59  | --->  :>> (degree -> 0)
|    5  |   40  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 3
Enter the index of 2nd vertice (dest) : 1
Connected the (500 (3))--->(46 (1))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |    1  | ---> (46)  (50)  (500)   :>> (degree -> 3)
|    1  |   46  | ---> (50)   :>> (degree -> 1)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |  500  | ---> (46)  (59)  (40)   :>> (degree -> 3)
|    4  |   59  | --->  :>> (degree -> 0)
|    5  |   40  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 4
Enter the index of 2nd vertice (dest) : 5
Connected the (59 (4))--->(40 (5))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |    1  | ---> (46)  (50)  (500)   :>> (degree -> 3)
|    1  |   46  | ---> (50)   :>> (degree -> 1)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |  500  | ---> (46)  (59)  (40)   :>> (degree -> 3)
|    4  |   59  | ---> (40)   :>> (degree -> 1)
|    5  |   40  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 4
Enter the index of 2nd vertice (dest) : 2
Connected the (59 (4))--->(50 (2))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |    1  | ---> (46)  (50)  (500)   :>> (degree -> 3)
|    1  |   46  | ---> (50)   :>> (degree -> 1)
|    2  |   50  | --->  :>> (degree -> 0)
|    3  |  500  | ---> (46)  (59)  (40)   :>> (degree -> 3)
|    4  |   59  | ---> (50)  (40)   :>> (degree -> 2)
|    5  |   40  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 2
Enter the index of 2nd vertice (dest) : 5
Connected the (50 (2))--->(40 (5))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |    1  | ---> (46)  (50)  (500)   :>> (degree -> 3)
|    1  |   46  | ---> (50)   :>> (degree -> 1)
|    2  |   50  | ---> (40)   :>> (degree -> 1)
|    3  |  500  | ---> (46)  (59)  (40)   :>> (degree -> 3)
|    4  |   59  | ---> (50)  (40)   :>> (degree -> 2)
|    5  |   40  | --->  :>> (degree -> 0)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 5
Enter the index of 2nd vertice (dest) : 1
Connected the (40 (5))--->(46 (1))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |    1  | ---> (46)  (50)  (500)   :>> (degree -> 3)
|    1  |   46  | ---> (50)   :>> (degree -> 1)
|    2  |   50  | ---> (40)   :>> (degree -> 1)
|    3  |  500  | ---> (46)  (59)  (40)   :>> (degree -> 3)
|    4  |   59  | ---> (50)  (40)   :>> (degree -> 2)
|    5  |   40  | ---> (46)   :>> (degree -> 1)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 5
Enter the index of 2nd vertice (dest) : 3
Connected the (40 (5))--->(500 (3))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 5
+-------+-------+
| index | value | ---> Connections 
|    0  |    1  | ---> (46)  (50)  (500)   :>> (degree -> 3)
|    1  |   46  | ---> (50)   :>> (degree -> 1)
|    2  |   50  | ---> (40)   :>> (degree -> 1)
|    3  |  500  | ---> (46)  (59)  (40)   :>> (degree -> 3)
|    4  |   59  | ---> (50)  (40)   :>> (degree -> 2)
|    5  |   40  | ---> (46)  (500)   :>> (degree -> 2)
+-------+-------+
Count --->   6
Enter the index of 1st vertice : 5
Enter the index of 2nd vertice (dest) : 0
Connected the (40 (5))--->(1 (0))

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 2
+-------+-------+
| index | value | ---> Connections 
|    0  |    1  | ---> (46)  (50)  (500)   :>> (degree -> 3)
|    1  |   46  | ---> (50)   :>> (degree -> 1)
|    2  |   50  | ---> (40)   :>> (degree -> 1)
|    3  |  500  | ---> (46)  (59)  (40)   :>> (degree -> 3)
|    4  |   59  | ---> (50)  (40)   :>> (degree -> 2)
|    5  |   40  | ---> (1)  (46)  (500)   :>> (degree -> 3)
+-------+-------+
Count --->   6
Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 8

Enter the index of vertice to be used as Source : 0
+-------+-------+
| index | value |
|    0  |    1  |
|    1  |   46  |
|    2  |   50  |
|    3  |  500  |
|    4  |   59  |
|    5  |   40  |
+-------+-------+
Count --->   6
BFS Traversal ->>  (1) <-> (46) <-> (50) <-> (500) <-> (40) <-> (59) <-> 

Enter the choice :
1 : Show vertices
2 : Show edges
3 : Add vertices
4 : Remove last vertice
5 : Connect Vertices
6 : Disonnect Vertices
7 : Show Neighbours and Degree
8 : BFS Traverse
0 : exit
Enter choice : 0
exitting ...
```

<!-- qrun:field-end output id="q-08-05" -->
<!-- qrun:entry-end id="q-08-05" -->

<!-- qrun:topic-end id="topic-08" -->
