# The C Programming Language

## Description of this Repository

This repository contains the notes that I have taken while learning the C Programming Language from various sources over the years.

## An introduction to the C Programming Language

To begin with, programming is the process by which you tell hardware what to do. This process is done by writing a program(software).

The C language was developed in 1972 at AT&T Bell Labs by Dennis Ritchie. It combined features from the B and BCPL programming languages but also mixed in a bit of the Pascal language.

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
