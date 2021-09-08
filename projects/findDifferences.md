---
layout: project
type: project
image: images/base.png
title: Find Unique Letter
permalink: projects/micromouse
# All dates must be YYYY-MM-DD format!
date: 2021-09-08
labels:
  - Java
  - Swing
summary: A game to find unique letter in many letters.
---

This game to find the unique letter in many letters. Once the user click on a letter that's not unique,  the position of the unique letter is still the same, a window said "Sorry, please try again" will pop up. Once the user click on the unqiue letter, it will automatically change the postion of the letter to a different position.

Once the program execute, a method called findingGame creates a JFrame called Finding Game. Then, it created a JPanel and add the multiple JButton (which will be the letters on the screen) created by for loop to JPanel. Every Jbutton will has a Mouse Listener, when user click on those buttons, it will pop out a window said either "Sorry, please try again" or "Good job! Please try a new one". After that we add the JPanel to JFrame and set JFrame visible.


