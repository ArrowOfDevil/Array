//функция вывода массива, 
void Print1(int *arr, int Size)  {
  for (int i = 0; i < Size; i++)
    printf("%3d", arr[i]);
  printf("\n");
}
//в файле task4 вызов функции будет таким:
//Print1(na, N); na -- название массива N -- размер

//________________________________________________//

void Input1(int arr[], int Size)  {
	for (int i = 0; i < Size; i++)
	{
		printf("Enter %d element: ", i);
		scanf_s("%d", &arr[i]);
		//scanf_s("%d", arr+i); для шарящих будет файл с сайта (ибо у меня он только с впн открылся)
		//scanf_s("%d", &i[arr]); на это тоже можете особо не смотреть наш прогер выпендривался
	}
	getchar();
}
