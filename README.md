    ____ _    ____ ____ ____ ____ ____
    |    |    |__| [__  [__  |___ [__
    |___ |___ |  | ___] ___] |___ ___]

[CLASS C language style](https://rfc.zeromq.org/spec:21/CLASS/) adapted for **E**mbedded **S**ystem.

So May I name it **CLASSES** style? Sounds not bad :-)

## Problem

I write C using CLASS style with fun. When developing some algorithms in C targeted at embedded system where static memory is used instead of dynamic heap memory, I tried to adapt the CLASS style to the embedded version.

To avoid use of heap memory, the following issues need to be addressed:

- How to create object with user-adjustable parameters?
- How to initialize object with parameters?
- How to return memory block in APIs?

## Solution

This project is my solution.

For detailed explanation of this style, please read my post ["CLASS Style Adapted for Embedded Systems"](https://herrkaefer.com/2016/09/10/class-style-adapted-for-embedded-systems/) along with the code.
