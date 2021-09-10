---
layout: essay
type: essay
title: Smart Question to Ask
date: 2021-09-09
labels:
  - Software Engineering
  - Learning
---

Since the internet development rapidly, many people will communicate online includes asking for help or helping others. However, not all of the questions online are a "smart" question. Asking a "smart" question is helpful for people to learned from your questions and easier on getting helps from others.
## [What Is a "Smart" Question](https://stackoverflow.com/help/how-to-ask)
Before asking a question, we should think like people only have limited time to look at our question, so the title of the question we posted should include the specific summarize question. If possible, try search online to find if there is anyone who have a similiar question with you, check on their solutions, try to solve it by yourself before asking question. If no relevant solutions online, we could write our specific question with part of the code that directly relates to the questions. Also, we should includes all relevant tags and respond those people who answer our question. Check all the words and code before post a question. 

## Question Examples
  Question: ["Why does my scanf while loop not exit when consuming newline characters?"](https://stackoverflow.com/questions/36105160/why-does-my-scanf-while-loop-not-exit-when-consuming-newline-characters) <br/>

"This successfully prints all the files. However, the loop never exits. If I take away scanf("%*c"), it does exit, but only the first filename is printed. I would expect the consuming of the newline character will prepare the outer scanf to scan the next filename, which is what it seems to be doing. But after the final filename is scanned, I expect the nested scanf to not scan anything. Then the outer scanf to not scan anything either. And the while loop exits." <br/>
```
// Some initialization code

dup2(fd[0], fileno(stdin));

// This process is receiving the output of "ls -1"

while (scanf("%[^\n]s", someCharArray) > 0) {
    scanf("%*c");
    printf("%s\n", someCharArray);
}
```

This person did try to solve this question before asking a question, posted the specific code that he/she had a question on which will be while loop doesn't stopped as what it suppose to scanned all the filename. He/she described what he/she tried to what should this code achieved, which will be take off the scanf("%*c") here. Also this person added the relevant tags and respond the answers. <br/>

<img src="/images/de623701af7d77085fdae2cb1798fa4.png" data-canonical-src="/images/de623701af7d77085fdae2cb1798fa4.png"  height="400" />
  Question: [Implementing swing in jdk 1.8 using eclipse](https://stackoverflow.com/questions/30748998/implementing-swing-in-jdk-1-8-using-eclipse) <br/>
This person posted the specific error that came out from he/she's code, but there is not much informations on the question, so it makes some confusions to people when they try to answer this question. And this person added the relevant tags and respond the answers. However, this similar question had already answered online. So please try to search on the question before we post question on the website, and posted the specific descriptions on what we had tried and what we trying to approach from this code. 
