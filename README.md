# Wanderer 2026 Code

## Features

* The code is updated from the 2022 code
* All of the outdated functions are updated to the newest version to ensure compatibility with esp board v3

## Warnings

* The code is quite **heavy**, in order to compile and flash successfully, you will need to change the partition scheme (see below)
* This code is **untested** on a real device. Further testing will be needed to ensure stability
* The features of the game remain at the 2022 version; new updates are needed
* The virus infestation game features from the 2022 code are currently disabled to save memory. To enable them, find the piece of code related to it that was commented out and include the Bluetooth file.

## How to change the partition scheme in Arduino IDE

* Go to Tools -> Partition Scheme -> Choose No OTA or Huge App
* Choosing this will disable the Over-The-Air update functions, which we are not going to use. These functions halve the space available for program storage

## Todo

* Test and update the web server
* Real device stress-testing
* Migrate game features to this year
* Update new game features

