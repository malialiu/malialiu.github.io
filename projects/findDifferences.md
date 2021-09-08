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

```
static void findingGame(JFrame frame, JPanel panel, JFrame correct)
{
        JFrame wrong = new JFrame("Result");
        wrong.setLayout(new FlowLayout(FlowLayout.CENTER));
        wrong.setSize(300,300);
        wrong.add(new JLabel("Sorry, please try again"));
        wrong.setVisible(false);
        
        correct.setVisible(false);

        long key = Math.round(Math.random()*100);
        while (key > 100 || key < 1){
            key = Math.round(Math.random()*100);
        }
        for (long i = 1; i < 100; i++){
            JButton button = new JButton("D");
            button.setBackground(Color.WHITE);
            panel.add(button);
            button.addMouseListener(new MouseAdapter() {
                public void mousePressed(MouseEvent e) {
                    wrong.setVisible(true);
                }
            });
                if(i == key){
                    JButton answer = new JButton("C");
                    answer.setBackground(Color.WHITE);
                    panel.add(answer);
                    answer.addMouseListener(new MouseAdapter() {
                        public void mousePressed(MouseEvent e) {
                            wrong.dispose();
                            frame.dispose();
                            correct.setVisible(true);
                            findingGame(newFrame(), newPanel(), correct);
                        }
                    });
                }
        }
        frame.add(panel);
        frame.setVisible(true);
}
```

Once the program execute, a method called findingGame creates a JFrame called Finding Game. Then, it created a JPanel and add the multiple JButton (which will be the letters on the screen) created by for loop to JPanel. Set an integer called key, once the for loop for created the buttons equal to the random number, the unique letter button will create. Every Jbutton will has a Mouse Listener, when user click on those buttons, it will pop out a window said either "Sorry, please try again" or "Good job! Please try a new one". After that we add the JPanel to JFrame and set JFrame visible.


