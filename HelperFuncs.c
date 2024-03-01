void printArray(int* array, int size)
{
    printf("\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int swapElements(int* array, int size, int idx1, int idx2)
{
    if(idx1 < 0 || idx2 < 0)
    {
        return 1; 
    }
    if(idx1 >= size || idx2 >= size)

    {
        return 2;
    }
    int temp = array[idx2];
    array[idx2] = array[idx1];
    array[idx1] = temp;
    return 0;
}
