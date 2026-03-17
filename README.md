# cpp
---

**Author**: Harsha Vardhan

---

## 1. Pointers:  
  Why?:  
  - Dynamic Memory Allocation: You can request memory while the program is running (using new) rather than deciding exactly how much you need before you compile.
  - Efficiency: Passing a massive object (like a 3D model) to a function is slow because C++ copies the whole thing. Passing a pointer is fast because you're just passing a small memory address.  
  - Data Structures: Pointers are the "glue" for linked lists, trees, and graphs, allowing elements to point to their neighbors.  
  ## How?:  
  - The Address-of Operator (&): In the line int* ptr = &cookies;, the & symbol tells the computer: "Don't give me the value 15; give me the specific memory address where 15 is sitting." We then store that address in ptr.
  - The Pointer Declaration (int*): The * used during the declaration (int* ptr) is just a signal to the compiler that this variable is a pointer. It doesn't "do" anything yet; it just defines the type.  
  - The Dereference Operator (*): When we use *ptr later in the code, the * acts like a "Go To" command. std::cout << *ptr tells the computer: "Go to the address stored in ptr and show me what's inside." *ptr = 20 tells the computer: "Go to the address stored in ptr and overwrite whatever is there with the number 20."

  ### Wild Pointer:  
  A wild pointer is a pointer that has been declared but not initialized to a specific memory address (like NULL, nullptr, or the address of a valid variable). Because it hasn't been given a safe place to point, it contains a "garbage" memory address—whatever bits happened to be left over in that specific spot of your RAM.
  #### Danger of wild pointers:  
  Think of a wild pointer like a GPS with random coordinates programmed into it. If you try to "go" to that location (dereference it)  
  1. Crash your program: If the random address belongs to the Operating System or is protected memory.  
  2. Corrupt data: If the random address happens to point to another one of your variables, you might accidentally overwrite its value.  
  3. Silent Bugs: The program might run fine today but crash tomorrow because the "garbage" address changes every time you run the code.

  ### NULL Pointer:  
  A null pointer is a pointer that is explicitly assigned to point to "nothing." While a wild pointer points to a random, "garbage" memory address, a null pointer is grounded. It tells the program: "I am a pointer, but I am not currently holding the address of any valid object." 
  - Why NULL pointer: three reasons:  
  1. Safety: To initialize a pointer when you don't have a valid address for it yet.  
  2. Conditionals: To check if a pointer is actually pointing to something before you try to use it.  
  3. End-of-List Markers: In data structures like Linked Lists, a null pointer signals that you have reached the last node.

  #### Golden rule of nullptr:  
  Never dereference a null pointer. If you try to run *ptr while ptr is nullptr, your program will crash (usually with a "Segmentation Fault"). Always wrap your pointer logic in an if statement to ensure the pointer is valid before accessing its value.


  ### Void Pointer:  


  ### Dangling Pointer:  


---

## OOPs:  
1. Encapsulation:  
At its core, Encapsulation is the bundling of data (variables) and the methods (functions) that operate on that data into a single unit called a class.  
Think of it like a medical capsule: the medicine (data) is hidden inside the protective shell (the class), and you can only interact with the medicine through the shell.
- public: Accessible from outside the class.
- private: Accessible only within the class.
- protected: Accessible within the class and its inherited classes.  

the 2 pillars of encapsulation:
 1. Data Bundling: Combining data members and member functions.  
 2. Data Hiding: Using Access Specifiers to restrict direct access to the data from outside the class.

 What is the default access specifier in a C++ class? * A: private.  
 Encapsulation is also known as...? * A: Data Hiding.  
 How do we achieve encapsulation? * A: By making data members private and providing public getter/setter methods.  
 Difference between Class and Struct in C++? * A: In a class, members are private by default. In a struct, members are public by default.   
