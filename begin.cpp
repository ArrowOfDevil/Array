//функция вывода массива, 
void Print1(int *arr, int Size)  {
  for (int i = 0; i < Size; i++)
    printf("%3d", arr[i]);
  printf("\n");
}

void Input1(int arr[], int Size)  {
	for (int i = 0; i < Size; i++)
	{
		printf("Enter %d element: ", i);
		scanf_s("%d", &arr[i]);
		//scanf_s("%d", arr+i); 
		//scanf_s("%d", &i[arr]);
	}
	getchar();
}
