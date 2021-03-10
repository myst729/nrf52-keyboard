# Dresden

Modified lkb-core firmware.


## Environment

Use docker

```bash
docker run -it --name lotkb registry.cn-hangzhou.aliyuncs.com/funs/build_env:lotkb_1.0_lite
```

or build from scratch


```bash
# 0. dependencies

brew tap ArmMbed/homebrew-formulae
brew install arm-none-eabi-gcc
# Or wget https://developer.arm.com/-/media/Files/downloads/gnu-rm/7-2018q2/gcc-arm-none-eabi-7-2018-q2-update-mac.tar.bz2
brew install sdcc python
pip3 install nrfutil

# 1. prepare

git clone https://github.com/Lotlab/nrf52-keyboard
git submodule init
git submodule update

cd nrf52-keyboard/SDK/
wget http://developer.nordicsemi.com/nRF5_SDK/nRF5_SDK_v15.x.x/nRF5_SDK_15.3.0_59ac345.zip
unzip -q nRF5_SDK_15.3.0_59ac345.zip # Unzip to `SDK` dir, like `SDK/components`, `SDK/config` etc.

# 2. config

cd ../
cp template/Makefile.posix.template template/Makefile.posix
vim template/Makefile.posix # Change `GNU_INSTALL_ROOT` to `/usr/local/bin/`
cp template/Makefile.posix SDK/components/toolchain/gcc/Makefile.posix

# 3. test

cd SDK/external/micro-ecc/nrf52hf_armgcc/armgcc/
make # compile microecc lib
cd ../../../../../keyboard/
cp -R lkb-core dresden
cd dresden/
make -j # compile example firmware
make bootloader -j # compile bootloader

# 4. build

make package -j # compile DFU package: _build/nrf52_kbd_XXXXXXXX.zip
make ch554 -j # compile USB firmware: _build/ch554.bin

# 5. flash

## See also https://github.com/myst729/setup-my-mac/tree/master/keyboard
## CH55x firmware upgrade:
## Short two ISP pins, power on to enter ISP mode
brew install libusb
pip3 install pyusb
python3 ./ch55xtool.py -f ch554.bin

## nRF52 firmware upgrade:
## Short P10 and GND pins, power on to enter DFU mode
## Use iOS nRF Connect to upgrade OTA, or flash with the on-board debugger
pip3 install pyocd
pyocd list
pyocd flash -t nrf52 nrf52_kbd.hex
```


## Hotkeys

- <kbd>Space</kbd> + <kbd>J</kbd>                       开机/唤醒
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>H</kbd>  输出剩余电量
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>P</kbd>  待机/睡眠
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>M</kbd>  切换有线/蓝牙
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>Q</kbd>  切换蓝牙通道1
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>W</kbd>  切换蓝牙通道2
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>E</kbd>  切换蓝牙通道3
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>R</kbd>  开启蓝牙广播
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>B</kbd>  进入蓝牙刷机模式
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>O</kbd>  清空绑定数据
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>I</kbd>  重置键盘
