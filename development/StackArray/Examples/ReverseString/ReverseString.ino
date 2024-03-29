/*
 *  Reverse a string by using a generic, dynamic stack data structure.
 *
 *  Copyright (C) 2010  Efstathios Chatzikyriakidis (stathis.chatzikyriakidis@gmail.com)
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

// include stack library header.
#include <StackArray.h>

// declare a string message.
const String msg = "Happy Hacking!";

// create a stack of characters.
StackArray <char> stack;

// startup point entry (runs once).
void
setup () {
  // start serial communication.
  Serial.begin (9600);

  // set the printer of the stack.
  stack.setPrinter (Serial);

  // print the message before reversing.
  Serial.println ("Normal String: " + msg);

  // push all the message's characters to the stack.
  for (int i = 0; i < msg.length (); i++)
    stack.push (msg.charAt (i));

  // print the message after reversing.
  Serial.print ("Reversed String: ");

  // pop all the message's characters from the stack.
  while (!stack.isEmpty ())
    Serial.print (stack.pop ());

  // print end of line character.
  Serial.println ();
}

// loop the main sketch.
void
loop () {
  // nothing here.
}
