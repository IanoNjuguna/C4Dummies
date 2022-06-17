# The C Programming Language

    "In our experience, C has proven to be a pleasant, expressive, and versatile 
    language for a wide variety of programs. It is easy to learn, and it wears well 
    as one's experience with it grows." 
    - Dennis Ritchie & Brian Kernighan in the preface to the C Programming Language Book.

## Description of this Repository

This repository contains the notes that I have taken while learning the C Programming Language from various sources over the years.

## An introduction to Programming & the C Programming Language

To begin with, programming is the process by which you tell hardware what to do. This process is done by writing a program(software).
The goal of programming is to choose a language and utilize various tools to create a program. These tools include:

    * An editor.
    * A compiler.
    * A linker.
The language of choice for this project is C. The end result should be a program that directs the hardware to do something.

The first hardware to be programmed was Charles Babbage's ```Analytical Engine``` back in 1822. It was an improvement to the ```Difference Engine``` and was programmed by physically changing the values represented by a column of gears. The engine would then compute the result. Even though Charles Babbage passed away without completing it due to a number of reasons, the Analytical Engine was the first design for a Turing complete general-purpose computer.

In the 1940s, early electronic computers were programed in a similar manner to Babbage's analytical engine. A major difference was that rather than rearrange physical gears, instructions were hard-wired directly into electric circuits. Over time, the rewiring of electric circuits was replaced by rows of switches.

Professor John von Neumann pioneered the modern method of computer programming in the 1950s by introducing decision-making into the process, where computers could make ```if-then``` choices. He also developed the concept of the repeating loop and sub routine.

Admiral Grace Hopper developed the compiler. Basically, a compiler is a program that creates other programs. Her compiler would take words in English and translate them to computer code. Thus, the programming language was born.

The first significant programming language was ```FORTRAN```(1950s). It's name came from ```formula translator```.
Other Programming languages of the period were: ```COBOL```, ```Algol```, ```Pascal```, ```BASIC```, etc.

The C language was developed in 1972 at AT&T Bell Labs by Dennis Ritchie. It combined features from the B and BCPL programming languages but also mixed in a bit of the Pascal language. The 'B' in B programming language comes from the 'B' in Bell Labs.
BCPL stands for Basic Combined Programming Language.

C is an imperative(procedural) language.

It was used to create the UNIX operating system.

    The original "K&R" C book was the informal language spec (Co-authored by B.Kernighan).
A C compiler has been part of the UNIX OS since.

In the early, 1980s, Bjarne Stoustroup used C as the basis of the Object Oriented C++ programming language. C++ is quite similar to C and it's easier to learn it when you know C. C++ is not a mere extension or add-on to C
The D programming language(early 2000s) is visually similar to C.

## Reasons to learn the C Language

### 1. Most Programming Languages have C Pedigree

Almost all popular programming languages are built on top of the C programming language e.g:

    * C++.
    * C#.
    * Objective-C.
    * Python.
    * Ruby.
    * Java.
    * Lua.
    * JavaScript.
The languages are libraries built in C code.

## 2. Longevity

C is a general-purpose programming language and has been around for more than 30 years and isn't going anywhere anytime soon.

## 3. Portability

C is portable in the sense that if somebody makes a C compiler for a different kind of machine with a different architecture, then you can recompile whatever your program is for that new architecturein that way, you can move your program to a different machine.

This aspect of C is what makes it efficient as it's ideal for applications which require high performance and low memory overhead. Many languages aim to do this but so far, many don't handle the burden better than C.

    ``` "C is not tied to any particular hardware or system, however, and it is easy to write programs that will run without change on any machine that supports C." - Dennis Ritchie & Brian Kernighan in the C Programming Book.```

### 4. It is important for embedded programming

Embedded programming refers to writing computer software, to control machines or devices that are not typically thought of as computers. Such machines are commonly known as embedded systems.

Examples of embedded systems include the electronics of:

    * Cars 
    * Telephones
    * Modems 
    * Robots
    * Appliances
    * Toys
    * Security systems 
    * Pacemakers 
    * Televisions
    * Set-top boxes 
    * Digital watches
For instance, the 500,000 lines of code that power the Mars curiosity Rover( a robot) are written in C.

## 5. C is Widely Used

Due to it's utility in embedded systems, C is widely used and can be found anywhere from airplanes in the sky to the fridges in kitchens.

## 6. It is high in job demand

Due to it's utility and the abundance of legacy code in various institutions, C programmers are in very high demand globally.

## 7. It is a Low-Level Programming Language

C lets you program closer to the metal by giving you more control over the machine.

## 8. It is the language of choice for Kernel Development

```A Kernel is the central part of an Operating System.```
```It manages the tasks of the computer, the hardware and most notably, memory & CPU time.```

### The Role of the Kernel

The kernel is the most fundamental part of an Operating System. It can be thought of as the program which controls all other programs on the computer.

* It is responsible for the creation and destruction of memory space which allows software to run.

* It provides services so that programs can request the use of the network card, the disk or any other piece of hardware - the kernel forwards that request to special programs called ```drivers``` which control the hardware.

* It manages the file system and sets interrupts for the CPU to enable multitasking.

* Many kernels are also responsible for ensuring that faulty programs do not interfere with the operation of others, by denying access to memory that has not been allocated to them and restricting the amount of CPU time they can consume.

## 9 Writing code in C will ultimately tell you how a computer works

Example: Memory management
