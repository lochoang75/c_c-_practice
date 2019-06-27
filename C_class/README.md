# C++ Class
## Common Error
- Using data member before they have been properly initialize can cause logic error.
## Error Prevention
- Using #ifndef, #define, #endif to prevent headers from being included more than once.
- Sticky setting (like fill character or set precision ) should be restored to its previous setting when it's no longer needed.
- Member function calls generally take either no arguments or substantially fewer arguments than conventional function calls in non-OOP.
## Good programming practice
- Use the name of the header in uppercase with the period replaced by and underscore in #ifndef and #define.
## Performance tips
- Each object have its own copy of the class's data, but all object of class share one copy of the member functions.
## Software Engineering Observation
- Only the simplest and most stable member function (unlikely to change) should be defined in the class header.
