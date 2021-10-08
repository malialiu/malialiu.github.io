---
layout: essay
type: essay
title: Getting start on UI Frameworks
date: 2021-10-07
labels:
  - Software Engineering
  - Learning
---

By getting start on UI frameworks, I was using the Semantic UI to help building the website page. I find out that Semantic UI is really helpful, espacially the icons provided by the Semantic UI can save a lot of time from looking for a image as a icon, or making a icon. Once people getting use of the Semantic UI, the contents it provides can help people to build the user interface easier and nicer. 

To getting start on using Semantic UI, we will need to includes the following code in HTML file.
```
<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/semantic-ui/2.4.1/semantic.min.css">
<script type="text/javascript" src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
<script type="text/javascript" src="https://cdnjs.cloudflare.com/ajax/libs/semantic-ui/2.4.1/semantic.min.js"></script>
```

There are many elements provide by Semantic UI. For example, the icons, it provides lots of icons as the following picture shows, once we want to use the icons, we can write ```<i class="ui (any name of the icons) icon"></i>``` in HTML file to include this icon in out page. More icons will be found in this website: https://semantic-ui.com/elements/icon.html

<img src="/images/icons.png" data-canonical-src="/images/icons.png" width="800"/>

Also, I think it is helpful on building a navigation bar for a web page, you can write ```<div class="ui (top/vertical) menu"></div>``` in the HTML file to do this. The things in () is really depends on whether your want this menu in which side of your page. Adding the items to the navigation bar can write something like ```<div class="(left/right) item"></div>``` in the division of menu. There some different kinds of menu UI docs (https://semantic-ui.com/collections/menu.html#vertical-menu) like what shown in the following image.
<img src="/images/menu.png" data-canonical-src="/images/menu.png" width="800"/>

Choosing the layout of the page will be putting something similar like ```<div class="ui two column grid container"></div>``` in HTML file, then it will spread the page in two columns, to adding different content in different item it could be done by include ```<div class="column"></div>``` in the division of ui container. There will be more different layout provides like following image, the url of the website will be here (https://semantic-ui.com/examples/grid.html).
<img src="/images/grid.png" data-canonical-src="/images/grid.png" width="800"/>

UI frameworks is helpful because if we use the raw HTML and CSS, it means that we have to build everything by ourself includes icons, layout, menu, button, and etc. The most benefit of the UI frameworks is that people can efficiently getting a neatly website which will be helpful for the users to understand how to use the website.
