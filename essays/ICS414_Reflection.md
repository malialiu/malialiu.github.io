---
layout: essay
type: essay
title: ICS 414 Reflection
date: 2023-05-08
labels:
  - Software Engineering
  - Learning
---

This semester, I learned a new framework called React Bootstrap, which is similar to Semantic UI, a framework I used in ICS 314. During ICS 314, I struggled to handle the mobile view of websites effectively. However, throughout this semester, I was able to improve my UI design for both desktop and mobile views. Additionally, I learned how to upload and delete images using Cloudinary. <br/>

While working on the "add faculty" feature, I encountered some challenges. I wasn't able to use the same method as my classmates to add faculty to the collection. They used the Promise and validate method to insert, update, and remove data from the collection. However, when I used that method, the data and collection name I passed to the method disappeared. After some time, I decided to use Meteor method and check function to insert and validate faculty data in the collection. <br/>

Since many roles are involved in managing rooms on our website, we had to consider what each role does, how they are related, and what information we need for each role. For example, in the "add faculty" feature, we needed to consider which rooms these faculties were assigned to. Therefore, we added an "occupants" collection to store all the people assigned to a specific room. When an office or admin adds a faculty member, they will also create an account for them. This process requires adding an account to the user collection as well. Lastly, we added basic information such as bios and office hours to the faculty collection. Because the collections are shared for different features, we discussed which implementation would be better for both faculty and rooms. <br/>

We did face some issues with tests towards the end. When running tests on Github actions, we often had to rerun the tests or set a longer wait time to pass all the tests. We believe the reason for this was that the environment of Github actions used to run the program had a slow network. This issue caused the tests to not receive the expected elements in a limited time. Therefore, we set a longer time to wait until the elements showed up. <br/>

Our team had weekly meetings, and we also used class time to discuss and work on the project. We created milestones, discussions, and issues to list all the features we needed for the website. We would take any issue we wanted to work on from the issues list and assign it to ourselves. We also conducted code reviews, and every team member would comment and provide suggestions for the code we reviewed together. <br/>

The most important lessons I learned from this project were teamwork and project management. If we were to do the project again, as we discussed in our group, we believe we could create a better database architecture. <br/> <br/> <br/>
