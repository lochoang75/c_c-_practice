# C++ Class
## Common Error
- Not release dynamically allocated memory when it's no longer needed can cause "memory leak"
- Using delete[] instead of delete  is undefined result.
- If copy consrtuctor simply copied the pointer in the source object to the target object's pointer, then both would point to the same dynamically allocated memory. The first destructor to execute 
would delete the dynamically allocated memory, and the other object's pointer would point to memory that no longer allocated, a situation called the dangling pointer- may cause runtime error.
- After deleting dynamically allocated memory, the pointer will continue to exist in memory, set the pointer's value to nullptr to indicate that the pointer no longer points to memory in the free store.
By setting the pointer to nullptr, the program loses access to that free store space, which would  be reallocated for difference purpose.
- Not providing a copy constructor and overloaded assginment operator for a class when objects of that class contain pointer to dynamically allocated memory is a potential logic error.
## Error Prevention
- Return a referce(or pointer) to a local variable is a common error  because local variable will be deallocate when out of scope and most compiler will warning
- Delete memory that was not allocated results in undefied behavior
- After delete a block of dynamically allocated memory be sure not to delete the same block again, to prevent this, after delete set the pointer to nullptr intermediate. Delete nullptr has no effect
- Alaways use the explicit keyword on single-argument constructor unless they're intended to be used as conversion constructor.
## Good programming practice
## Performance tips
- Prefix overloaded return reference to instance, postfix overloaded return value, so should prefer to using prefix
## Software Engineering Observation
- Copy constructor should be a const reference to allow a const object to be copied.
- A copy constructor, a destructor and an overloaded assignment operator are usually provided as a group for any class that uses dynamically allocated memory.
