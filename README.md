Unesp Microcontroller Development Tools
=========

The Unesp MDT provides you the API libraries and developer tools necessary to build, test, and debug apps for Microcontroller.

With a single download, the Eclipse MDT bundle includes everything you need to begin developing apps:

    Eclipse IDE for C/C++ Developers
    LM4Flash Tools
    Tiva SW-TM4C-2.0.1.11577 Platform-tools
    

Once installed MDT perform the following steps:
1. Install the required gcc/g++

    <code>
        sudo apt-get update && sudo apt-get install gcc-4.7 g++ build-essential libusb-1.0-0-dev openjdk-7-jdk
    </code>

2. Add repository GCC for Arm Embedded

    <code>
        sudo add-apt-repository ppa:terry.guo/gcc-arm-embedded && sudo apt-get update sudo apt-get install gcc-arm-none-eabi
    </code>


3. Compile LM4Flash

    <code>
        cd lm4tools/lm4flash
        sudo cp lm4tools/lm4flash/lm4flash /usr/bin/
    </code>
    
4. Add user for root group

    <code>
        sudo usermod -aG users < username >
    </ode>

5. Enabled usb for device (Example: Tiva)

    <code>
        echo 'ATTRS{idVendor}=="1cbe", ATTRS{idProduct}=="00fd", GROUP="users", MODE="0660"' | \ sudo tee /etc/udev/rules.d/99-stellaris-launchpad.rules
    </code>
    
6. Configuration Eclipse

    6.1 Launch Eclipse, You'll be asked to select a directory for the workspace. Select workspace directory, under your home (/home/<user>/ in my PC): 
    
    ![Screenshot](http://i.imgur.com/oIhIabP.png?1) 

7. 



    

