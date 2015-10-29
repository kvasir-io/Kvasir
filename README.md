# What is Kvasir?
Kvasir is a C++ Metaprogramming library enabling full static checking and register abstraction in embedded software. Despite the fact that we use modern C++ tools under the hood the public interface is quite "C like" and familliar to most embedded developers.

# Why Kvasir?
## Efficiency
By fully abstracting the hardware Kvasir is able to use optimizations under the hood which are either too obscure or too ugly to appear in user code. The header only nature of Kvasir and very sophisticated use of the volatile keyword give the optimizer more room to do its thing without breaking anything. We often reach severalfold improvements over hand written C code!
## Security
As mentioned above Kvasir register interactions are fully statically checked. It is essentially impossible to write to reserved bits, overflow the destination bit field, use a wrong mask or suffer from off by one errors when shifting. There are also a lot of atomic and synchronization features being developed in order to handle shared data much more efficiently.
## Portability
Kvasir works on essentially every ARM Cortex (we generate the chip specific code from the vendor provided CMSIS-SWD files). Although different chips will still have different peripherals because of Kvasirs level of abstraction it is still far easier and safer when porting.
## Testability
Kvasir introduces a seam right above the bare metal in a zero cost manner using a traits class. This means unit test of embedded code which interacts directly with registers is finally possible without big tools.

# Getting started with Kvasir
We took great care to reduce dependencies, therefore Kvasir should be easy to add to an existing embedded project. To use the library simply pull the folder Lib from this repository and add it to your compilers include paths (-I directive). Be sure and set your compiler dialect to C++11 at least. Thats it, you're ready to go.
