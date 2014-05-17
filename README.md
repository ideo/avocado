[![](https://github.com/trive/avocado/raw/master/Other/logo.png "Click to download Avocado")](https://github.com/ideo/avocado/raw/master/Other/Avocado.zip)
<a href="https://developer.apple.com/register/index.action" target="_blank"><img src="https://github.com/trive/avocado/raw/master/Other/step1.png"/></a><a href="http://origami.facebook.com/quartzcomposer/" target="_blank"><img src="https://github.com/trive/avocado/raw/master/Other/step2.png"/></a><a href="https://github.com/ideo/avocado/raw/master/Other/Avocado.zip" target="_blank"><img src="https://github.com/trive/avocado/raw/master/Other/step3.png"/></a>

Avocado is an open source interaction design toolbox built by​ <a href="http://www.ideo.com" target="_blank">IDEO</a>.​ It ​enables designers to make quick interactive prototypes without writing a line of code.​ ​Built on top of Facebook's Origami framework, Avocado provides ready-to-use patches that can be easily combined to create fully-customized prototypes.​ 

We're always in search of ways to collaborate and build more effectively​ at IDEO, and this library is an experiment that helps us be lean when prototyping interactions. We hope Avocado can be of use to you, and please feel free to share your ideas here on GitHub ​or​ <a href="https://twitter.com/AvocadoByIDEO" target="_blank">tweet to @AvocadoByIDEO</a>.​




###Getting started with Quartz Composer

####What is Quartz Composer?
Quartz Composer is a node-based visual programming language provided as part of the Xcode development environment in Mac OS X for processing and rendering graphical data.
Out of the box, interaction prototyping with Quartz Composer is complicated. Avocado provides a set of ready-to-use components that enable designers to quickly create interactive prototypes.

####Some resources
- <a href="https://vimeo.com/88468610" target="_blank">The 4-Minute Guide to Quartz Composer</a>
- <a href="http://www.amazon.com/Learning-Quartz-Composer-Hands-Creating/dp/0321636945" target="_blank">Learning Quartz Composer Book</a>
- <a href="https://developer.apple.com/library/mac/documentation/graphicsimaging/conceptual/QuartzComposerUserGuide/qc_intro/qc_intro.html#//apple_ref/doc/uid/TP40005381" target="_blank">Apple's Guide to Quartz Composer</a>
- <a href="http://macoscope.com/blog/quartz-composer-origami-mouse-headaches/" target="_blank">Understanding coordinates in Quartz Composer</a>
- A <a href="http://macoscope.com/blog/science-behind-snapping-scroll-part-i-dragging/" target="_blank">temporary fix</a> to the <a href="https://github.com/facebook/origami/issues/22" target="_blank">Drag Drift bug</a> in Quartz Composer
- [Facebook Origami's Community](https://www.facebook.com/groups/origami.community/)

####How to test the prototypes on a device?
Download <a href="http://www.zambetti.com/projects/liveview" target="_blank">LiveView</a>. To increase the framerate you can use <a href="http://bomberstudios.com/post/54587126654/using-sketch-mirror-liveview-silkscreen-skala" target="_blank">this trick</a>.


###Patches in Avocado
####Interactions
- _Carousel_, creates a swipeable carousel of images
- _Bistable_, makes an element snap to two positions
- _Master Detail_, creates a Master-Detail relationship between two views (a-la iOS 7)
- _Flip_, creates a card that can be flipped back and forth
- _Hit Grid_, creates a grid of Hit Areas. To retrieve which element has been clicked use _Hit Grid Info_

####Animations (coming in 1.0)
- _Pulse_
- _Shake_
- _Jump_

####Global Value
- _Save Global Boolean_ and _Retrieve Global Boolean_
- _Save Global String_ and _Retrieve Global String_

####Utilities
- _Delay Value_, delay any value by the specified amount of time
- _Gate_, stops the propagation of a signal
- _Invert_, flips a boolean value
- _Map to Range_, remaps a value to a new range
- _Absolute Value_, returns the absolute value of a number
- _String to Number_, turns a string of numbers into a number


###Feedback
If you have any thoughts or contributions for how we can continue to evolve this experiment, feel free to share your ideas here on  GitHub​ or​ <a href="https://twitter.com/AvocadoByIDEO" target="_blank">tweet to @AvocadoByIDEO</a>.

