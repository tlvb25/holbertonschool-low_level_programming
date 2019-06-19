#ifndef _SORT_H
#define _SORT_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ELEMENT_NUM 30
#define RADIX 10
#define ARRAY_LEN(x) (sizeof(x) / sizeof((x)[0]))
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

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void swap(int *a, int *b);
void insertion_sort_list(listint_t **list);
void swap_node(listint_t **list, listint_t **node_a, listint_t **node_b);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);

#endif /* _SORT_H */
