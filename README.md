[![](https://github.com/ideo/avocado/raw/master/Other/logo.png "Click to download Avocado")](https://github.com/ideo/avocado/raw/master/Other/Avocado%20BETA.mpkg.zip)
[![](https://github.com/ideo/avocado/raw/master/Other/guide.png "Click to download Avocado")](https://github.com/ideo/avocado/raw/master/Other/Avocado%20BETA.mpkg.zip)

Avocado is a toolbox to make quick interactive prototypes—without writing a line of code.
Avocado builds on top of Facebook's Origami framework to provide ready-to-use patches that can be easily combined to create fully customized prototypes.

###Getting Avocado

1. <a href="https://developer.apple.com/register/index.action" target="_blank">Register as an Apple Developer</a>
2. <a href="http://origami.facebook.com/quartzcomposer/" target="_blank">Download Quartz Composer</a>
3. <a href="https://github.com/ideo/avocado/raw/master/Other/Avocado%20BETA.mpkg.zip" target="_blank">Download the Avocado installer</a>

Avocado already includes Origami 1.2 so you do not need to install that separately. If you do have Origami already installed, it will be updated to the latest version.

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
- [Facebook Origami's Community](https://www.facebook.com/groups/origami.community/)

####How to test the prototypes on a device?
Download [LiveView](http://www.zambetti.com/projects/liveview/). To increase the framerate you can use [this trick](http://bomberstudios.com/post/54587126654/using-sketch-mirror-liveview-silkscreen-skala).


###Patches in Avocado


###living life on the edge
If you'd like to stay up-to-date with the bleeding edge, you can clone this repository to your computer, and link the `Avocado` directory, the `Origami` directory, and the `Origami.plugin` file to `~/Library/Graphics/Quartz Composer Patches`.

Open a Terminal and do the following.

```sh
mkdir ~/Workspace
cd ~/Workspace
git clone https://github.com/ideo/avocado.git
mkdir -p ~/Library/Graphics/Quartz\ Composer\ Patches
ln -s `pwd`/avocado/Avocado ~/Library/Graphics/Quartz\ Composer\ Patches
ln -s `pwd`/avocado/Origami ~/Library/Graphics/Quartz\ Composer\ Patches
ln -s `pwd`/avocado/Origami.plugin ~/Library/Graphics/Quartz\ Composer\ Patches
```


###Feedback

Your feedback is important in making Avocado better – feel free to open an issue here on GitHub or [tweet to @AvocadoByIDEO](https://twitter.com/AvocadoByIDEO).

We hope you enjoy using Avocado, happy prototyping!
