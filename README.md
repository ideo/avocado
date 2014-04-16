Avocado
=======

Avocado is a toolbox to make quick interactive prototypes--without writing a line of code.
Avocado builds on top of Facebook's Origami framework to provide ready-to-use patches that can be easily combined to create fully customized prototypes.

Most designers today create static mockups to communicate app ideas. But increasingly apps are anything but static, which means as designers we need a better tool for interaction design—this is where Avocado and Origami come in.

Getting Avocado
---------------

1. [Register as an Apple Developer](https://developer.apple.com/register/index.action)
2. [Download Quartz Composer](http://facebook.github.io/origami/images/quartz-composer.png)
3. [Download the Avocado installer](http://avocado.ideo.com)

Avocado already includes Origami 1.1 so you do not need to install that separately. If you do have Origami already installed, it will be updated to the latest version.
If you'd prefer to stay up-to-date with the bleeding edge, you can clone this repository to your computer, and link the `Avocado` directory, the `Origami` directory, and the `Origami.plugin` file to `~/Library/Graphics/Quartz Composer Patches`.

Open a Terminal and do the following.

```sh
mkdir ~/Workspace
cd ~/Workspace
git clone https://github.com/trive/avocado.git
mkdir -p ~/Library/Graphics/Quartz\ Composer\ Patches
ln -s `pwd`/avocado/Avocado ~/Library/Graphics/Quartz\ Composer\ Patches
ln -s `pwd`/avocado/Origami ~/Library/Graphics/Quartz\ Composer\ Patches
ln -s `pwd`/avocado/Origami.plugin ~/Library/Graphics/Quartz\ Composer\ Patches
```

Getting started with Quartz Composer
------------------------------------

###What is Quartz Composer?
Quartz Composer is a node-based visual programming language provided as part of the Xcode development environment in Mac OS X for processing and rendering graphical data.
It turns out it is a pretty fantastic tool to develop interactive prototypes.
Avocado extends the basic functionalities of Quartz Composer (and Origami) allowing designers to quickly prototype ideas.

###Some resources
- [The 4-Minute Guide to Quartz Composer](https://vimeo.com/88468610)
- [Learning Quartz Composer Book](http://www.amazon.com/Learning-Quartz-Composer-Hands-Creating/dp/0321636945)
- [Apple's Guide to Quartz Composer](https://developer.apple.com/library/mac/documentation/graphicsimaging/conceptual/QuartzComposerUserGuide/qc_intro/qc_intro.html#//apple_ref/doc/uid/TP40005381)
- [Understanding coordinates in Quartz Composer](http://macoscope.com/blog/quartz-composer-origami-mouse-headaches/)
- A [temporary fix](http://macoscope.com/blog/science-behind-snapping-scroll-part-i-dragging/) to the [Drag Drift bug](https://github.com/facebook/origami/issues/22) in Quartz Composer
- [Facebook Origami's Community](https://www.facebook.com/groups/origami.community/)
- [Avocado's Community](https://www.facebook.com/groups/avocado.community/)

###How to test the prototypes on the device?
Download [LiveView](http://www.zambetti.com/projects/liveview/) and use [this trick](http://bomberstudios.com/post/54587126654/using-sketch-mirror-liveview-silkscreen-skala).






Feedback
--------
Your feedback is important in making Avocado better – feel free to open an Issue here on GitHub, [send us a tweet @AvocadoByIDEO](https://twitter.com/AvocadoByIDEO), or post on the [Avocado community page](https://www.facebook.com/groups/avocado.community/).

We hope you enjoy using Avocado, happy prototyping!
