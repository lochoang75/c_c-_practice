# C++ Class
## Common Error
- Using data member before they have been properly initialize can cause logic error.
- Definition as const a member function that modifies a data member of the object is a compilation error
- Defining as const a meber function that const non-const member function of the class on the same object is a compilation error
- Invoking a non-const member function on a const object is a compilation error. It's mean when declare one object is const, only invoke a const member function of object is allow
- Using this pointer in a static member function is a compilation error
- Compilation error occurs if a member object is not initialized with a member initializer and the member object's class does not have a default constructor
- Static member function const is a compilation error. Static member function is exist and operate independently of any object of the class
## Error Prevention
- Using #ifndef, #define, #endif to prevent headers from being included more than once.
- Sticky setting (like fill character or set precision ) should be restored to its previous setting when it's no longer needed.
- Member function calls generally take either no arguments or substantially fewer arguments than conventional function calls in non-OOP.
## Good programming practice
- Use the name of the header in uppercase with the period replaced by and underscore in #ifndef and #define
- Constructor has inside out order, destructor has reverse order, from bounding class to member
## Performance tips
- Each object have its own copy of the class's data, but all object of class share one copy of the member functions.
- Declaring varialbles and objects const when apporiate can improve performance
- Using member initializer eliminate the over-head of "doubly initializing" member object
## Software Engineering Observation
- Only the simplest and most stable member function (unlikely to change) should be defined in the class header.
- Modify const object are caught at compile time rather than causing execution-time errors
- A class static data member and static member function exist and can be use if no object of class has been instantiated
-
