#include <stdint.h>

typedef struct
{
    uint64_t length;
    uint64_t allocated;
    uint64_t first_item;
}
dynamic_array; //DO NOT CREATE ON STACK! use array_init instead

//initializes the dynamic array
dynamic_array* array_init(void);

//deletes the dynamic array
void array_delete(dynamic_array* array_ptr);

//frees memory using each item as pointer
void array_delete_each(dynamic_array* array_ptr);

//appends value to the end
dynamic_array* array_append_value(dynamic_array* array_ptr, uint64_t value);

//returns value from the end and decreases length of an array
uint64_t array_pop_value(dynamic_array* array_ptr);

//returns address of item or nullptr if it doesn't exist
uint64_t* array_get_by_index(dynamic_array* array_ptr, uint64_t index);

//reallocates minimal memory size to contain data
dynamic_array* array_shrink_to_fit(dynamic_array* array_ptr);

//returns size of array in O(1) time
uint64_t array_get_size(dynamic_array* array_ptr);

//extends array by the items of other array
dynamic_array* array_extend(dynamic_array* dest_array_ptr, const dynamic_array* src_array_ptr);

//extends array by the qwords from mem
dynamic_array* array_extend_from_mem(dynamic_array* dest_array_ptr, const uint64_t* src_ptr, uint64_t size);

//zeroes array length
void array_clear(dynamic_array* array_ptr);

//casts the dynamic array to usual array in-place (in O(n))
uint64_t* array_to_usual(dynamic_array* array_ptr);
