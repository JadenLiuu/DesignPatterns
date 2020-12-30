## Design Patterns - Prototype

> Notes
### Basic
- Prototype is a kind of creation design patterns.
- To clone a corresponding prototype for interfaces.
    - Concrete class provides implicit copy constructor, 
      while the **interfaces** are concreated during runtime.
      Therefore, Prototype design patterns is a way to clone
      the corresponding class more appropriately.

### When to use?
- When your concrete class are almost the same, while only a few stuffs (like one of the attribute or method) are different.
  - Most attributes only need to be set once.
    - And the **constuctor** do many stuffs to load those stuffs.
    - Therefore, prototype design pattern **save you the construcing time**! 
  - Varying attributes are scarce.

### Recmmendation
- Use a factory to create all of the types in beforehand, clone the objects via the factory.
  - Remember to delete the concreted prototypes!

> Reference
- https://refactoring.guru/design-patterns/prototype/cpp/example
