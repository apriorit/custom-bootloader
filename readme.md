# Custom Bootloader Development Techniques (Windows)

## About

This project was created as a demo tutorial for low-level and kernel developers. 
The sample researched is a custom bootloader code to replace/complement a default Windows boot loader. 

## Implementation

Our bootloader is primarily based on C++ low-level programming, also applying some C and Assembler.
For our development task we did not require anything besides standard Microsoft Visual Studio 2005/2008.

The source code for bootloader cited here is solely for training purposes. Its structure is rather simple and it has the following functions:

1. Perform the loading from the address 0000:7c00 to the system memory.
2. Call the BootMain function, which was written using a high-level language.
3. Display a simple “Hello world” message on the screen.

For detailed explanations, additional tutorial materials and schemes, please see the [related article](https://www.apriorit.com/dev-blog/66-develop-boot-loader)

## About Apriorit

This repository is a public technical example from Apriorit related to general software engineering and advanced software engineering.

Apriorit is a cybersecurity-focused software engineering company that helps technology companies build secure, reliable, and high-performance software — from kernel-level components to cloud-based platforms.

Learn more: https://www.apriorit.com/rd-services/custom-software-and-application-development-services

Website: https://www.apriorit.com

## License

Licensed under the MIT license. © Apriorit.
