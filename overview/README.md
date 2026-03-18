# cpp
---

**Author**: Harsha Vardhan

---
## Pointers:
1. Adress(&) and dereference(*):  
 - Address-of (&): This operator retrieves the specific memory location (the "home address") where a variable is stored  
 - Dereference (*): This operator goes to a memory address and accesses the actual value stored inside it.

2. wild pointer:  
A wild pointer is a pointer that has been declared but not initialized to any specific memory address or nullptr, meaning it points to a random, unpredictable location in memory.  

3. Null pointer:  
 A null pointer is a pointer that is explicitly assigned to point to "nothing." While a wild pointer points to a random, "garbage" memory address, a null pointer is grounded.  

4. Void Pointer:  
A void pointer (or generic pointer) is a special pointer type that can hold the address of any data type but cannot be dereferenced directly without first being cast to a specific type.  

5. Dangling pointer:  
A dangling pointer is a pointer that still points to a memory location that has been deleted or deallocated, often causing crashes when you try to access the "garbage" that remains.

## oops:  
1. Encapsulation:  
Encapsulation is the process of grouping data (variables) and the methods (functions) that operate on them into a single unit called a class.

2. Abstraction:  
Abstraction focuses on hiding the complex implementation details and showing only the necessary features of an object. In C++, this is often achieved using header files or abstract classes  

3. Inheritance:  
Inheritance allows a new class (derived class) to acquire the properties and behaviors of an existing class (base class). This promotes reusability.  

4. Polymorphism:  
Polymorphism allows one interface to be used for different types of actions. It comes in two flavors:  
  1. Compile-time (Static): Function Overloading or Operator Overloading.  
  2. Runtime (Dynamic): Function Overriding using Virtual Functions.

## Bitwise operators:  
1. Bitwise and(&):The Bitwise AND (&) operator compares each bit of two integers and returns 1 only if both corresponding bits are 1, otherwise it returns 0.  
2. Bitwise or(|):The Bitwise OR (|) operator compares each bit of two integers and returns 1 if at least one of the corresponding bits is 1, returning 0 only if both are 0.  
3. Bitwise xor(^):The Bitwise XOR (^) operator, or "Exclusive OR," compares each bit of two integers and returns 1 only if the corresponding bits are different, returning 0 if they are the same.  
4. Bitwise NOT (~): The Bitwise NOT (~) operator, also known as the complement operator, is a unary operator that "flips" every bit of a single integer, changing all 1s to 0s and all 0s to 1s.  
5. Left Shift (<<):The Bitwise Left Shift (<<) operator shifts the bits of a number to the left by a specified number of positions, filling the vacated right-hand slots with 0s.one-line rule:Shifting a number left by $n$ positions is mathematically equivalent to multiplying that number by $2^n$.
6. Right Shift (>>):The Bitwise Right Shift (>>) operator moves the bits of a number to the right by a specified number of positions, discarding the bits that "fall off" the right edge.one-line rule:Shifting a non-negative number right by $n$ positions is mathematically equivalent to performing integer division of that number by $2^n$.

## Smart Pointers:  
1. Unique Pointer:  
A Unique Pointer (std::unique_ptr) is a smart pointer that owns and manages another object through a pointer and disposes of that object when the unique_ptr goes out of scope.The "unique" part is literal: no two unique_ptr instances can manage the same object. This provides a strict exclusive ownership model.  

2. auto_ptr:  
The biggest issue with auto_ptr was its unusual copy semantics. When you "copied" an auto_ptr, it didn't actually make a copy; it silently transferred ownership and set the original pointer to null.If you tried to sort a vector of auto_ptr, the internal logic of the sort algorithm would "copy" elements, inadvertently nullifying them and causing the program to crash.  

3. shared ptr:  
shared_ptr allows multiple pointers to share ownership of the same object. It uses reference counting to manage memory.  
The object is only destroyed and its memory deallocated when the last shared_ptr owning it is destroyed or reset (i.e., when the reference count hits zero).  

4. Weak ptr:  
it can look at the object and check if it still exists, but it doesn't keep the object alive. If all shared_ptr owners go away, the object is destroyed even if a weak_ptr is still pointing to it.  
The primary reason weak_ptr exists is to solve the Circular Dependency problem. 
If Object A has a shared_ptr to Object B, and Object B has a shared_ptr to Object A, their reference counts will never reach zero. They keep each other alive forever, causing a memory leak. By making one of those links a weak_ptr, you break the cycle.