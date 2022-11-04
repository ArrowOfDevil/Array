// выполняется ли некоторое условие для массива

//пример для проверки на возрастание последовательности
bool rise_na (int arr[], int Size){
bool check = true;
for( int i =1 ; i < Size; i++){
    if (arr[i] < arr[i-1])  check = false;
  }
  return check;
}
