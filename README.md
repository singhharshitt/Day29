# Day29
<br>
<br>
<b>Ques 1. You are required to create a basic system to simulate different types of musical instruments using polymorphism. Implement a base class Instrument and two derived classes Piano and Violin. Each instrument can be played in different ways but should share a common interface.</b>
<br>
<br>

Requirements:<br>

Base Class: Instrument<br>
Methods:<br>
void playSound(): A pure virtual method that will be overridden in derived classes to define how the instrument produces sound.<br>
void display(): A virtual method to display the instrument type. This can be overridden in derived classes.<br>
Derived Class: Piano (inherits from Instrument)<br>
Methods:<br>
void playSound(): Override the method to print "Playing a melodious piano tune."<br>
void display(): Override the method to print "This is a Piano."<br>
Derived Class: Violin (inherits from Instrument)<br>
Methods:<br>
void playSound(): Override the method to print "Playing a classical violin tune."<br>
void display(): Override the method to print "This is a Violin."<br>
Main Functionality:<br>
Create an array of pointers to Instrument objects.<br>
Dynamically allocate Piano and Violin objects and store them in the array.<br>
Use polymorphism to call playSound() and display() methods for each object through the base class pointer.<br>
Ensure proper memory management by deallocating all dynamically allocated objects at the end.<br>
