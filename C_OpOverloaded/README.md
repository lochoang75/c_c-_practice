# C++ Class
## Common Error
- Not release dynamically allocated memory when it's no longer needed can cause "memory leak"
- Using delete[] instead of delete  is undefined result.
## Error Prevention
- Return a referce(or pointer) to a local variable is a common error  because local variable will be deallocate when out of scope and most compiler will warning
- Delete memory that was not allocated results in undefied behavior
- After delete a block of dynamically allocated memory be sure not to delete the same block again, to prevent this, after delete set the pointer to nullptr intermediate. Delete nullptr has no effect
-
## Good programming practice
## Performance tips
- Prefix overloaded return reference to instance, postfix overloaded return value, so should prefer to using prefix
## Software Engineering Observation
