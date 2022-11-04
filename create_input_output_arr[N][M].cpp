// создание ввод и вывод бвумерного масив (матрицы)

//создание массива
//тут важно что функция имеет тип int
int **Create2(int N, int M) {
  int **arr = (int **) malloc(N * sizeof(int *));
  for (int i = 0; i < N; i++) {
    arr[i] = (int *) malloc(M * sizeof(int));
    for (int j = 0; j < N; j++)
      arr[i][j] = 0;
  }
  return arr;
}

//___________________________________________//

//ввод массива с клавиатуры
void Input2(int **arr, int N, int M) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      printf("Enter [%d,%d] element:", i, j);
      scanf_s("%d", &arr[i][j]);
    }
  }
  getchar();
}

//_________________________________________//

//вывод массива
void Print2(int **arr, int N, int M) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++)
      printf("%d ", arr[i][j]);
    printf("\n");
  }
}

//_______________________________________//

//освобожение памяти после создания ВАЖНО НА ЭТО МОГУТ МАТЕРНУТЬСЯ
void Free2(int **arr, int N) {
  for (int i = 0; i < N; i++)
    free(arr[i]);
  free(arr);
}
