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
        sudo add-apt-repository ppa:terry.guo/gcc-arm-embedded && sudo apt-get update && sudo apt-get install gcc-arm-none-eabi
    </code>


3. Compile LM4Flash

    <code>
        git submodule foreach git pull
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
    
    ![Screenshot](http://i.imgur.com/oIhIabP.png) 
    
    6.2 Click in File -> New -> C Project, enter your information:
     
        6.2.1 Select Project Type: Empty Project;
     
        6.2.2 Select Toolchains: Cross GCC and click Next.
    
    ![Screenshot](http://i.imgur.com/fDCn8Tj.png)
    
    6.3 Now click in Advanced Settings
    
    ![Screenshot](http://i.imgur.com/Ltj5NSE.png)
    
    6.4 Select C/C++ Build/Settings in the tree. In the Configuration combo box, select [ All configurations ]. Make sure you keep [ All configurations ] selected for all the following steps. In the Tool Settings tab, in the Cross Settings section write "arm-none-eabi-" into the Prefix text box and Path write "/usr/lib/arm-none-eabi":
    
   ![Screenshot](http://i.imgur.com/Zpqj6c6.png)
   
   6.5 Click Symbols under Cross GCC Compiler. Add the following symbols: PART_LM4F120H5QR, ARM_MATH_CM4, TARGET_IS_BLIZZARD_RA1:
   
    ![Screenshot](http://i.imgur.com/At4avr1.png)
    
    6.6 Jump to the Includes section and add the path to Tiva libraries. It should be in "../boards/SW-TM4C-2.0.1.11577/" directory, under your home:
   ![Screenshot](http://i.imgur.com/zhBYM9H.png)
   
   6.7 In the Miscellaneous section, in the Other flags: text box, you should see "-c -fmessage-length=0". To these two flags, add these all: "-mthumb -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=softfp -ffunction-sections -fdata-sections".
   
    ![Screenshot](http://i.imgur.com/8FSoWm7.png)
 
    6.8 It's time to add Tiva driver library. Go to the Cross GCC Linker / Libraries section, "../boards/SW-TM4C-2.0.1.11577/driverlib/" prefixed by your home to the Library search path (-L) list.

    ![Screenshot](http://i.imgur.com/nnlPP5w.png)
    
    6.9 In the Miscellaneous section add the following Linker flags: "-Wl,--static,--gc-sections,-T ../def/project.ld -mthumb -mcpu=cortex-m4 -lm -lc":
    ![Screenshot](http://i.imgur.com/jD6o7LP.png)
    
    6.10 Go to the Build Steps tab, and in the Command text box inside the Post-build steps frame, type "arm-none-eabi-objcopy -O binary ${ProjName}.elf ${ProjName}.bin". Then in the Description: text box below, type "Generate binary file from elf file":
    ![Screenshot](http://i.imgur.com/9aa8fqz.png)

    6.11 Switch to the Build Artifact tab and add ".elf" to the "${ProjName}" text inside the Artifact name: text box. The resulting string should be "${ProjName}.elf". When finished, click OK:
    
    ![Screenshot](http://i.imgur.com/LYK9KQN.png)
    
    6.12 That was a long configuration, but when you click Finish, the project will be ready. You might need to advance to the next step before the Finish button becomes enabled. If that's the case, click the Next > button to advance to the next step, enter "arm-none-eabi-" in the Cross compiler prefix text box, and finally click Finish.
   ![Screenshot](http://i.imgur.com/vBGn0V2.png)
   
   7.0 Compile programs
  
    Right Click Project, then click Build Project 
    ![Screenshot](http://i.imgur.com/iGylkcB.png)
    
    Result
    ![Screenshot](http://i.imgur.com/zff1Trl.png)
  
  
   8.0 Flashing programs
    
    Click Run/External Tools/External Tools Configurations...:
    ![Screenshot](http://i.imgur.com/vp0O6po.png)
    
    Right click Program, then click New:
    ![Screenshot](http://i.imgur.com/Tl9VbOJ.png)
    
    Change Name for example to "Upload", Location to the place where lm4flash is (we installed it to ".../lm4tools/lm4flash/lm4flash" under your home), Working Directory to "${workspace_loc:/Template/Debug}" or "${workspace_loc:/Template/Release}" (Release or Debug directory of your project) and Arguments to "Template.bin" (the binary file we want to flash):
    
    ![Screenshot](http://i.imgur.com/62VIfj0.png)
    
    Click in Run, now been transferred to the device
   
    ![Screenshot](http://i.imgur.com/53nrfN7.png)
    
    
    Now just use your imagination and good codes.
    Url to download the installers: http://goo.gl/a1kHU2
    
    Thanks.
