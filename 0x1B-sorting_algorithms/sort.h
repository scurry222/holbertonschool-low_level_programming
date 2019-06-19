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

/* printing and swapping universal functions */
void print_list(const listint_t *list);
void swap_int(int *a, int *b);
void print_array(const int *array, size_t size);

/* 0 - bubble sort */
void bubble_sort(int *array, size_t size);

/* 1 - insertion sort */
void insertion_sort_list(listint_t **list);

/* 2 - selection sort */
void selection_sort(int *array, size_t size);

/* 3 - quick sort */
void quick_sort(int *array, size_t size);
void sort_recurse(int *array, ssize_t lo, ssize_t hi, size_t size);
ssize_t partition(int *array, ssize_t lo, ssize_t hi, size_t size);

/* 100 - shell sort */
void shell_sort(int *array, size_t size);
size_t list_len(listint_t *list);
void switch_nodes(listint_t *a, listint_t *b);

/* 101 - cocktail sort */
void cocktail_sort_list(listint_t **list);
listint_t *trav_rev(listint_t *head, listint_t *tail, listint_t *list);

/* 102 - counting sort */
void counting_sort(int *array, size_t size);

/* 103 - merge sort */
void merge_sort(int *array, size_t size);
void merge_recurse(int *sub, int *array, size_t left, size_t right);
void merge_with_subarray(int *sub, int *array, size_t left,
			size_t middle, size_t right);
/* 104 - heap sort */
void heap_sort(int *array, size_t size);
void heapify(int *array, size_t end, size_t start, size_t size);

/* 105 - radix sort */
void radix_sort(int *array, size_t size);
void LSD_sort(int *array, size_t size, size_t lsd);

#endif
