Over the years I�ve been spending time in the Sun Java forums answering posted questions (mostly related to Swing). During the period I�ve posted many code samples to help illustrate my suggested solutions. I recently upgraded to Java 6 and decided to revisit these code samples to see if they still apply. During this process I also decided to formalize the code and make it more general in nature so that it can be used by a wider number of people. This blog is a result of this process.

I�ve broken the code samples down into 4 main categories:

 * Application � code that can be executed stand alone as an application. I don�t expect to have many of these examples.
 * Classes � can be incorporated directly into your own application. This is done by implementing Interfaces, by using listeners or by using static methods.
 * Extensions � can be used directly by your application. Or, if you are already using a class that extends the same class, then you will need to change the code to extend a different class.
 * Tips � are just random pieces of code, or ideas, that will hopefully get you pointed in the right direction.
 
In addition to the the above, I will also categorize each entry by the package the code sample belongs to. I suspect that most will belong to the Swing package, but I do have a few Util and I/O samples lying around.

It should be noted that none of the code presented here is used in any real application,  (I only do this for a hobby) and therefore you use it at your own risk. Although I must admit I took about 5-10 minutes to do extensive testing so I doubt you will find many bugs :-).

You are free to use and/or modify any or all code posted on the Java Tips Weblog without restriction. A credit in the code comments would be nice, but not in any way mandatory.

"Give somebody a fish and they eat for a day.
Teach somebody to fish they eat for life!"

In following the philosophy of the above quote, whenever possible, I will also attempt to provide links for related reading to help you better understand the suggested solution. These readings may include tips to help solve your next problem. I may include links to:

 * technical articles
 * tutorials
 * the Java API

The Java API is huge and we don�t have time to read it from start to finish. If the examples don�t solve your problem, hopefully they can at least give you some ideas and introduce you to new API�s and concepts.

Rob