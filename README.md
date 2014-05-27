[![](https://github.com/trive/avocado/raw/master/Other/logo.png "Click to download Avocado")](https://github.com/ideo/avocado/raw/master/Other/Avocado.zip)
<a href="https://developer.apple.com/register/index.action" target="_blank"><img src="https://github.com/trive/avocado/raw/master/Other/step1.png"/></a><a href="http://origami.facebook.com/quartzcomposer/" target="_blank"><img src="https://github.com/trive/avocado/raw/master/Other/step2.png"/></a><a href="https://github.com/ideo/avocado/raw/master/Other/Avocado.zip" target="_blank"><img src="https://github.com/trive/avocado/raw/master/Other/step3.png"/></a>

Avocado is an open source interaction design toolbox built by​ <a href="http://www.ideo.com" target="_blank">IDEO</a>.​ It ​enables designers to make quick interactive prototypes without writing a line of code.​ ​Built on top of Facebook's Origami framework, Avocado provides ready-to-use patches that can be easily combined to create fully-customized prototypes.​ 

We're always in search of ways to collaborate and build more effectively​ at IDEO, and this library is an experiment that helps us be lean when prototyping interactions.
Curious to learn more about the story behind Avocado? Visit our <a href="http://ideo.is/labs_avocado" target="_blank">IDEO Labs post</a>. 

We hope Avocado can be of use to you, and please feel free to share your ideas here on GitHub ​or​ <a href="https://twitter.com/AvocadoByIDEO" target="_blank">tweet to @AvocadoByIDEO</a>.​



###Getting started with Quartz Composer

####What is Quartz Composer?
Quartz Composer is a visual programming language provided as part of the Xcode development environment in Mac OS X.
Prototyping interactions with Quartz Composer is not immediate. Avocado provides a set of ready-to-use components that enables designers to quickly create interactive prototypes.

####Some resources
- <a href="https://vimeo.com/88468610" target="_blank">The 4-Minute Guide to Quartz Composer</a>
- <a href="http://www.amazon.com/Learning-Quartz-Composer-Hands-Creating/dp/0321636945" target="_blank">Learning Quartz Composer Book</a>
- <a href="https://developer.apple.com/library/mac/documentation/graphicsimaging/conceptual/QuartzComposerUserGuide/qc_intro/qc_intro.html#//apple_ref/doc/uid/TP40005381" target="_blank">Apple's Guide to Quartz Composer</a>
- <a href="http://macoscope.com/blog/quartz-composer-origami-mouse-headaches/" target="_blank">Understanding coordinates in Quartz Composer</a>
- A <a href="http://macoscope.com/blog/science-behind-snapping-scroll-part-i-dragging/" target="_blank">temporary fix</a> to the <a href="https://github.com/facebook/origami/issues/22" target="_blank">Drag Drift bug</a> in Quartz Composer
- <a href="https://www.facebook.com/groups/origami.community/" target="_blank">Facebook Origami's Community</a>

####How to test the prototypes on a device?
Download <a href="http://www.zambetti.com/projects/liveview" target="_blank">LiveView</a>. To increase the framerate you can use <a href="http://bomberstudios.com/post/54587126654/using-sketch-mirror-liveview-silkscreen-skala" target="_blank">this trick</a>.


###Getting started with Avocado
To get started with Avocado simply <a href="https://developer.apple.com/register/index.action" target="_blank">register as an Apple Developer</a>, <a href="http://origami.facebook.com/quartzcomposer/" target="_blank">download Quartz Composer</a>, and <a href="https://github.com/ideo/avocado/raw/master/Other/Avocado.zip" target="_blank">install Avocado</a>. 

Here are some <a href="https://github.com/ideo/avocado/blob/master/FAQ.md" target="_blank">frequently asked questions</a> and some <a href="https://github.com/ideo/avocado/tree/master/Examples" target="_blank">examples</a>. Below you can find a description of all the patches included in Avocado.

####Interactions
- _Carousel_, creates a swipeable carousel of images. Information on its current state is provided through the _Carousel Info_ patch
- _Bistable_, makes an element snap to two positions. Information on its current state is provided through the _Bistable Info_ patch
- _Master Detail_, creates a Master-Detail relationship between two views
- _Flip_, creates a card that can be flipped back and forth
- _Hit Grid_, creates a grid of Hit Areas. To retrieve which element has been clicked use _Hit Grid Info_
- _iOS Keyboard_, provides an interactive keyboard. To retrieve the text being typed use _iOS Keyboard Info_

<img src="https://github.com/trive/avocado/raw/master/Other/GIFs/Carousel.gif"/>
<img style="margin-left: 20px;" src="https://github.com/trive/avocado/raw/master/Other/GIFs/Keyboard.gif"/>
<img style="margin-left: 20px;" src="https://github.com/trive/avocado/raw/master/Other/GIFs/MasterDetail.gif"/>
<img style="margin-left: 20px;" src="https://github.com/trive/avocado/raw/master/Other/GIFs/Flip.gif"/>
<img style="margin-left: 20px;" src="https://github.com/trive/avocado/raw/master/Other/GIFs/Bistable.gif"/>

####Animations
- _Nod_
- _Pulse_
- _Jiggle_
- _Jump_

<img src="https://github.com/trive/avocado/raw/master/Other/GIFs/Animations.gif"/>

####Global Value
- _Save Global Boolean_ and _Retrieve Global Boolean_
- _Save Global String_ and _Retrieve Global String_

####Utilities
- _Keyboard 2_, meant to replace the standard _Keyboard_ patch. It provides information on which key is being pressed
- _Delay Value_, delay any value by the specified amount of time
- _Gate_, stops the propagation of a signal
- _Invert_, flips a boolean value
- _Map to Range_, remaps a value to a new range
- _Absolute Value_, returns the absolute value of a number
- _String to Number_, turns a string of numbers into a number

<img src="https://github.com/trive/avocado/raw/master/Other/GIFs/Delay.gif"/>


###Feedback
If you have any thoughts or contributions for how we can continue to evolve this experiment, feel free to share your ideas here on GitHub​ or​ <a href="https://twitter.com/AvocadoByIDEO" target="_blank">tweet to @AvocadoByIDEO</a>.

