# Rshell

Assignment 2: Writing Basic Command Shell

11-01-17

Fall 2017

by Steven Phan and Roberto Trejo Gonzalez

## Introduction

Write a command shell called rshell in C++. The shell will perform the following steps:

Print a command prompt (e.g. $)
Read in a command on one line. Commands will have the form:

cmd		= executable [ argumentList ] [ connector cmd ]
connector	= || or && or ;

where executable is an executable program in the PATH and argumentList is a list of zero or more arguments separated by spaces. The connector is an optional way you can run multiple commands at once. If a command is followed by ;, then the next command is always executed; if a command is followed by &&, then the next command is executed only if the first one succeeds; if a command is followed by ||, then the next command is executed only if the first one fails.

## Bugs

Some classes are not compiling.(fixed. It now compiles.)

Some of the run function are not working.

Trying to split the command line into usable pieces are leaving out the special conditions(;,||,#). (fixed) 
