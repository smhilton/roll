
roll - The dice roller!

by SMH

About roll,
* A dice roller that can be used for a variety of games.
* It was written in C.
* Will compile using gcc on Windows and GNU/Linux.
* It uses the srand function with a time seed to generate a pseudo random number and simulate random dice rolls.
* It is executed from the command line.
* You will be prompted to
	Enter the number of dice
	Enter the number of sides
	Enter +/- modifier (This is useful for RPG players)
roll will output
* the results of each roll
* the natural sum of the rolls (Sum of the rolls without any modifier)
* the modified sum

Passing Arguments from Command Line
* To speed up things, you can pass # of dice, # of sides and modifiers from the command line.
* The syntax is,

roll [# of dice] d [# of sides] [modifier]

NOTE: modifier is optional!

example 1: roll 2 d 6 0
example 2: roll 4 d 20
example 3: roll 1 d 8 -2
example 4: roll 6 d 6 10

Enjoy!

Text to ASCII Art Generator
http://patorjk.com/software/taag/#p=display&f=O8&t=READ%20ME
