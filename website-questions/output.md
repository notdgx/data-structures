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

<!-- qrun:topic-end id="topic-01" -->
