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
