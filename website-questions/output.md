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

<!-- qrun:topic-end id="topic-00" -->
