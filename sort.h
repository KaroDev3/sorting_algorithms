#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void recursion(int *array, size_t size, int *full_array, size_t full_size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void swaps(listint_t *current, listint_t *forward, listint_t **list);
void counting_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
int *merge_recursion(int *array, size_t size, int *merge);
int *merge_func(int *array_1, int *array_2, size_t size_1,
size_t size_2, int *merge);
int which_number(int number, int digit, int size);
int num_digits(int number);
void radix_sort(int *array, size_t size);
int max_number(int *array, int size);
void recursion_hoare(int *array, int size, int *full_array, int full_size);
void quick_sort_hoare(int *array, size_t size);
#endif /* SORT_H */
