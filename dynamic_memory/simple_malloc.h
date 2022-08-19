/* allocate size bytes from the heap */
void *simple_malloc(size_t size);

/* return a previously allocated memory chunk to the allocator */
void simple_free(void *ptr);
