Avocado
=======

Avocado is a free toolkit for Quartz Composer that makes interactive design prototyping easy and doesn’t require programming.

Most designers today create static mockups to communicate app ideas. But increasingly apps are anything but static, which means as designers we need a better tool for interaction design—this is where Avocado comes in.

Getting Avocado
---------------

You can download the Avocado installer from http://avocado.ideo.com. You'll need a free Apple Developer account to download Quartz Composer first.

If you'd prefer to stay up-to-date with the bleeding edge, you can clone this repository to your computer, and link the `Avocado` and `Origami` directories and `Origami.plugin` files to `~/Library/Graphics/Quartz Composer Patches`.

```sh
mkdir ~/Workspace
cd ~/Workspace
git clone https://github.com/trive/avocado.git
mkdir -p ~/Library/Graphics/Quartz\ Composer\ Patches
ln -s `pwd`/avocado/Avocado ~/Library/Graphics/Quartz\ Composer\ Patches
ln -s `pwd`/avocado/Origami ~/Library/Graphics/Quartz\ Composer\ Patches
ln -s `pwd`/avocado/Origami.plugin ~/Library/Graphics/Quartz\ Composer\ Patches
```

Feedback
--------
Your feedback is important in making Avocado better – feel free to open an Issue here on GitHub or send us a tweet @avocado.

We hope you enjoy using Avocado, happy prototyping!
