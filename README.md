[![](https://github.com/trive/avocado/raw/master/Other/logo.png "Click to download Avocado")](https://github.com/ideo/avocado/raw/master/Other/Avocado.zip)
<a href="https://developer.apple.com/register/index.action" target="_blank"><img src="https://github.com/trive/avocado/raw/master/Other/step1.png"/></a><a href="http://origami.facebook.com/quartzcomposer/" target="_blank"><img src="https://github.com/trive/avocado/raw/master/Other/step2.png"/></a><a href="https://github.com/ideo/avocado/raw/master/Other/Avocado.zip" target="_blank"><img src="https://github.com/trive/avocado/raw/master/Other/step3.png"/></a>

<video src="https://github.com/trive/avocado/raw/master/Other/avocado2.mp4" poster="https://github.com/trive/avocado/raw/master/Other/avocado2poster.png" width="720" height="404" controls preload></video>

Avocado is an open source interaction design toolbox built by​ <a href="http://www.ideo.com" target="_blank">IDEO</a>.​ It ​enables designers to make quick interactive prototypes without writing a line of code.​ ​Built on top of Facebook's <a href="http://origami.facebook.com" target="_blank">Origami</a> framework, Avocado provides ready-to-use patches that can be easily combined to create fully-customized prototypes.​ 

We hope Avocado can be of use to you, and please feel free to share your ideas here on GitHub ​or​ <a href="https://twitter.com/AvocadoByIDEO" target="_blank">tweet to @AvocadoByIDEO</a>.​


###Getting started
To get started with Avocado simply <a href="https://developer.apple.com/" target="_blank">register as an Apple Developer</a>, <a href="http://origami.facebook.com/quartzcomposer/" target="_blank">download Quartz Composer</a>, and <a href="https://github.com/ideo/avocado/raw/master/Other/Avocado.zip" target="_blank">install Avocado</a>. 

Here are some <a href="https://github.com/ideo/avocado/tree/master/Examples" target="_blank">examples</a> that show how to use Avocado.

If you are new to Quartz Composer, take a look at <a href="http://facebook.github.io/origami/tutorials/" target="_blank">these tutorials</a>.


####Interactions
- _Draggable Layer_, a patch that lets you drag and drop a layer and fully customize the behavior of the drag and drop. The _Draggable Layer Animation_ lets you customize the pick-up animation. _Draggable Layer Snap Points_ lets you define points on the screen the layer will snap to. _Draggable Layer Boundaries_ lets you define boundaries for where the element can be dragged. Finally, _Draggable Layer Info_ provides information on the current state of a Draggable Layer
- _Carousel_, creates a swipeable carousel of images. Information on its current state is provided through the _Carousel Info_ patch. You can customize the way a Carousel looks through the _Carousel Settings_ patch. You can also control the state of a Carousel through the _Carousel Controls_ patch
- _Bistable_, makes an element snap to two positions. Information on its current state is provided through the _Bistable Info_ patch
- _Card_, creates a card that can be flipped back and forth. Information on its current state is provided through the _Card Info_ patch
- _Dial_, for scroll wheel-like Interactions. Information on its current state is provided through the _Dial Info_ patch
- _Master Detail_, creates a Master-Detail relationship between two views
- _Rolodex_, for rolodex-like interaction. Information on its current state is provided through the _Rolodex Info_ patch
- _Hit Grid_, creates a grid of Hit Areas. To retrieve which element has been clicked use _Hit Grid Info_
- _iOS Keyboard_, provides an interactive keyboard. To retrieve the text being typed use _iOS Keyboard Info_

<img src="https://github.com/trive/avocado/raw/master/Other/GIFs/Carousel.gif"/>
<img src="" height="0px" width="14px"/>
<img src="https://github.com/trive/avocado/raw/master/Other/GIFs/Keyboard.gif"/>
<img src="" height="0px" width="12px"/>
<img src="https://github.com/trive/avocado/raw/master/Other/GIFs/MasterDetail.gif"/>

<img src="https://github.com/trive/avocado/raw/master/Other/GIFs/Flip.gif"/>
<img src="" height="0px" width="14px"/>
<img src="https://github.com/trive/avocado/raw/master/Other/GIFs/Bistable.gif"/>

####Bluetooth integation
- Use _Bluetooth Send_ and _Bluetooth Receive_ to uni-directionally communicate with a BLE device
- Use _Bluetooth Connection_ to bi-directionally communicate with a BLE device
- _Aggregate Values_ and _Disaggregate Value_ will help you send 4 values at once or decode one message into 4 values.

####Animations
- _Nod_
- _Pulse_
- _Jiggle_
- _Jump_

<img src="https://github.com/trive/avocado/raw/master/Other/GIFs/Animations.gif"/>

####Global Value
With Avocado you can save values to be retrieved anywhere in the composition or that can be accessed by another composition running at the same time.
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

