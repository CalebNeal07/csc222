# Chapter 12 - Member Functions


### Member Functions
 - A function that is invoked on an instance of an object.
 - Invoked with the syntax`Object.func()`
 - Defined in a header a file by putting the function definition inside the class body.
 - Function implementation uses namespace `Object::func()`
 - A member function can refernce the object it was called from with the keyword `this`
 - Member functions have implicit access to a classes member variables
### Constructors
 - Constructors are a special kind of member function that create an instance of the object.
 - Defined with `Object(params)` and implemented with `Object::Object(params)`
## Example
foo.h
 ```C++ 
class Foo {
    char member_var;
    
    Foo(char);
    
    replace_var(char);
};
 ```

foo.cpp
```C++
#include "foo.h"

Foo::Foo(char bar) {
    member_var = bar;
}

Foo::replace_var(char bar) {
    member_var = bar;
}
```