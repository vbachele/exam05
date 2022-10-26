# EXAM 05 42 or how to use classes

## Exercice 00

### Test your program
```c
// In your terminal write each command
	g++ main.cpp Warlock.cpp
	./a.out > result.txt
	diff result.txt displayExample.txt // If you see a difference there is a problem
```

## Exercice 01
### Useful link

1. [What is an abstract class](https://learn.microsoft.com/en-us/cpp/cpp/abstract-classes-cpp?view=msvc-170)
*Abstract class allows to create a generic class like ASpell or ATarget where other class will be derived*

### Errors i've made by practicing

1. Forget the const when you have a function that takes string for example
```c
ASpell::ASpell(std::string const Sname, std::string const Seffects) // don't forget the const
{
	this->name = Sname;
	this->effects = Seffects;
}
```

2. Forget to return (*this) operator= for the coplien's
```c
ATarget &ATarget::operator=(ATarget const &other)
{
	this->type = other.type;
	return (*this);
}
```

3. I forgot #pragma once in my hpp files
Allow to include your file only once during compilation. It generated a lot of mistakes