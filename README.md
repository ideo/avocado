[![](https://github.com/trive/avocado/raw/master/Other/logo.png "Click to download Avocado")](https://github.com/ideo/avocado/raw/master/Other/Avocado.zip)
<a href="https://developer.apple.com/register/index.action" target="_blank"><img src="https://github.com/trive/avocado/raw/master/Other/step1.png"/></a><a href="http://origami.facebook.com/quartzcomposer/" target="_blank"><img src="https://github.com/trive/avocado/raw/master/Other/step2.png"/></a><a href="https://github.com/ideo/avocado/raw/master/Other/Avocado.zip" target="_blank"><img src="https://github.com/trive/avocado/raw/master/Other/step3.png"/></a>

Avocado is an interaction design toolkit built at [IDEO](http://www.ideo.com).
Avocado enables designers to make quick interactive prototypes without writing a line of code.
Avocado builds on top of Facebook's Origami framework to provide ready-to-use patches that can be easily combined to create fully customized prototypes.



###Getting started with Quartz Composer

####What is Quartz Composer?
Quartz Composer is a node-based visual programming language provided as part of the Xcode development environment in Mac OS X for processing and rendering graphical data.
Out of the box without Origami, interaction prototyping with Quartz Composer is complicated. Avocado provides a set of tools for Quartz Composer that make interaction prototyping a lot easier.

####Some resources
- [The 4-Minute Guide to Quartz Composer](https://vimeo.com/88468610)
- [Learning Quartz Composer Book](http://www.amazon.com/Learning-Quartz-Composer-Hands-Creating/dp/0321636945)
- [Apple's Guide to Quartz Composer](https://developer.apple.com/library/mac/documentation/graphicsimaging/conceptual/QuartzComposerUserGuide/qc_intro/qc_intro.html#//apple_ref/doc/uid/TP40005381)
- [Understanding coordinates in Quartz Composer](http://macoscope.com/blog/quartz-composer-origami-mouse-headaches/)
- A [temporary fix](http://macoscope.com/blog/science-behind-snapping-scroll-part-i-dragging/) to the [Drag Drift bug](https://github.com/facebook/origami/issues/22) in Quartz Composer
- [Facebook Origami's Community](https://www.facebhook.com/groups/origami.community/)

####How to test the prototypes on a device?
Download [LiveView](http://www.zambetti.com/projects/liveview/). To increase the framerate you can use [this trick](http://bomberstudios.com/post/54587126654/using-sketch-mirror-liveview-silkscreen-skala).


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

Your feedback is important in making Avocado better – feel free to open an issue here on GitHub or [tweet to @AvocadoByIDEO](https://twitter.com/AvocadoByIDEO).

We hope you enjoy using Avocado, happy prototyping!
