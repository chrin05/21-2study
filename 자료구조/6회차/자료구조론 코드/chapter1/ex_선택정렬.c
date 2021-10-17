#include <stdio.h>
void ascending(int numbers[], int size); //오름차순 정렬
void descending(int numbers[], int size); //내림차순 정렬
void printArray(int numbers[], int size);

int main(void)
{
	int numbers[] = { 3, 5, 7, 2, 1, 4, 9, 0, 8, 6 };
	int size = 10;

	printf("정렬 전 : ");  printArray(numbers, size);
	ascending(numbers, size);
	printf("오름차순 정렬 후 : ");  printArray(numbers, size);
	descending(numbers, size);
	printf("내림차순 정렬 후 : ");  printArray(numbers, size);

	return 0;
}
void ascending(int numbers[], int size)
{
	//알고리즘 작성
	int i, j, min, minindex;
	for (i = 0; i < size; i++) {
		minindex = i;
		for (j = i + 1; j < size; j += ) {
			if (numbers[minindex] > numbers[j]) {
				minindex = j;
			}
			min = numbers[i];
			numbers[i] = numbers[j];
			numbers[j] = min;
		}
	}
}
void descending(int numbers[], int size)
{
	//알고리즘 작성
	int i, j, max, maxindex;
	for (i = size - 1; i < 0; i--) {
		maxindex = i;
		for (j = size - 2; j < 0; j--) {
			if (numbers[maxindex] < numbers[j]) {
				maxindex = j;
			}
			max = numbers[i];
			numbers[i] = numbers[j];
			numbers[j] = max;
		}
	}
}
void printArray(int numbers[], int size)
{
	for (int i = 0; i < size; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
}