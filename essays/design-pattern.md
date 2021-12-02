---
layout: essay
type: essay
title: Use Same Solution for Different Problems
date: 2021-12-02
labels:
  - Software Engineering
  - Learning
---

As we learning so far, we will notice that many problems we have right can be solve by solutions that we used for previous problems. This concept can also apply to software engineering, we having a process/pattern on how to solve many different problems, which we will call it ```design pattern```. There are three main types of design pattern which are creational patterns, structural patterns, behavioral patterns. The creational patterns allow you to reuse the exist code and created object to implement more functions, the structural patterns allow you to combine objects and classes into larger structures, and behavioral patterns are about the algorithm and how the objects work with each other. The design pattern might not giving the solution right away, but it gives you an idea about a way to solve the problems.

## Builder (creational patterns)
Builder is one of the design pattern that categorized under the creational patterns. For example, you want to build a house with swimming pool, and you already have the method on how to build a house. You can reuse the method on building the house to build a swimming pool. Let's say the method to build a house it buildWall, DigGround, tileWithTesserae, and etc. We can just create a object call swimmingPool and reuse the method DigGround and makeFloor to build the swimming pool by changing the depth we need to dig the ground and type of tesserae in this object.

## Template Method (Behavioral Patterns)
Template method is one of the design pattern that categorized under the behavioral patterns. For example, you want to build a different webpage, and you already having the template below. 
<img src="/images/template.png"  height="400" /> <br/> 
Then you can use the same code from the code that build the template to build your own pages by change whatever you need. There already have the code for navigation bar, body, and footer. You can just copy and paste the code, then change it. And after changing the code in the home page file it might look something like this below or depends on how you want the webpage looks like. 
<img src="/images/uhmclub.png"  height="400" /> <br/> 
In this example, we just need to change the code in the file that build the home page. And change the color of navigation bar from black to white, change the menu items in navigation bar and added a logo. Then change the body background in css file and change the color of footer.
All you need to do is change the page to what you want it to looks like by changing the relevant code. This is how template method work, is adding/changing the solution you already have for similar problems and change the solution a little bit to solve your current problem.

These pattern are really useful when trying to implement similiar stuffs again and again. We can change an minimum things without rebuild the whole data structure.
