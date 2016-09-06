# C Project and Python Wrapper Skeleton

## Goal

This project aims to provide a skeleton template of

1. A C library which conforms to some methodology in project organization and code style.
2. A Python interface of the C library

It then can be used as a template or standard reference for further development.

## Scalable C Summary

This C project conforms to a simplified version of [Scalable C](https://hintjens.gitbooks.io/scalable-c/) by @hintjens. Below is a brief summary.

### Code Organization

One project, one repository.

- include
    - public class headers
    - a public project header which includes all public headers and external headers, and defines version. It is all that needed to be included when calling the C APIs by user.
- src
    - all source (.c) files
    - private class headers
    - a private project header which includes the API header and all private headers (or all headers) and is included in sources for simplicity

### Class

- A class defines a object which includes a struct and related methods.
- Three kinds of classes according to functional scope:
    - public class: object is exposed to public
    - private class: object is shared with other classes
    - source-file class: object is used within the source file (also private of course)
- The struct defines properties of the object. It is private defined in source and typedef in header.
- The method signature is like: myp_myclass_mymethod (myp_myclass_t *self, ...).
- Every class has a constructor and a destructor for memory management. The constructor allocates memory for the object and do necessary initialization of the properties. The destructor does the opposite. Note: the user is responsible for calling the destructor to destroy the object (s)he created.
- Properties of public classes is accessed by getter and setter methods.
- Every class has a test method
- For source-file classes
    - project prefix is not needed, use a "s_" instead (means "static")
    - methods are defined as static
    - properties could be get and set directly

### Code Style

See the code and [CLASS C language style](http://rfc.zeromq.org/spec:21).


## The C Project

- Project name: N-Body Simulation
- Project prefix: nbs
- Public classes:
    - psys
- Private classes:
    - planet
    - satellite

## The Python Wrapper

A Python wrapper of the C public APIs is implemented by [Cython](http://cython.org/).

