# Implement Programs based on: Structures & Dynamic Memory allocation

The Syntax for creating an array is `data_t array_name[size];`, where `size` is a constant known before hand.
We won't always know the size of the array we need, 

```c
int* myDynamicArray = NULL;
int* size = 10;
myDynamicArray = (int*)malloc(sizeof(int) * size);
```
