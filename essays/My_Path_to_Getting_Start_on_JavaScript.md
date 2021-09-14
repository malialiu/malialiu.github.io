---
layout: essay
type: essay
title: My Path to Getting Start on JavaScript
date: 2021-09-01
labels:
  - Software Engineering
  - Learning
---
## What I Noticed at the Beginning of Learning JavaScript
Javascript is a computer language that applies to web browsers. Compare to other computer languages like Java and C, the function written in Javascript doesn't require people to write out a specific return type of a function. People needs to write the specific return type for every function that is written in Java and C. Function that written in Javascript doesn't needs to do what Java and C did, it can return an integer, string, float, etc, and even the function can be return by a function. Unlike C and Java, Javascript treats return data type differently, it can also treat a function as a return data type of a function. Thus, we need to know which variables do what because there is not specific data type label in front of the variables' name. 
## Advantages of JavaScript Compare to Java and C
Javascript is similar to Java and C when writing them, there is a difference between them which is the way they declare a variable is different. They use keywords var, let, and const to declare a variable. Java and C declare a variable with keyword int, float, char, and etc. We also need to consider lots of things like return data type, what's the data type for parameters of a function, what packages we need to import, prototypes and pointer. JavaScipt is like a simplify version of Java and C. 
```
// looking the index of a number in an array given in JavaScript
function search(array, number) {
  for (let i = 0; i < array.length; i++){
    if(array[i] === number){
      return i; 
    }
  }
  return -1;
}

// looking the index of a number in an array given in Java  
public static int search(int[] array, int number){    
   for(int i = 0; i < array.length; i++){    
     if(array[i] == number){    
        return i;    
     }    
   }    
   return -1;    
}

// looking the index of a number in an array given in C
int search(int array[], int number)
{
    int i;
    for (i = 0; i < sizeof(array); i++)
        if (array[i] == number)
            return i;
    return -1;
}
```
As above, we can see that Java and C consider more about the parameters which JavaScript does not. That's why sometimes the lines written in Javascript will be less than Java and C when solving a same problem. Javascript is a good language in general because it is an efficient and fast language for web development. 
## The Way I Practicing JavaScript
Doing more practice for learning a new computer language is helpful. A pedagogy called athletic software engineering is useful to do more practice in computer language, it let student complete tasks in limited time. It is stressful, but it also makes efficient coding speed and problem-solving for the future. 


