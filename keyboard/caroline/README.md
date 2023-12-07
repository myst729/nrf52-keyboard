# Caroline

Modified lkb-core firmware for 40% keyboard.

## Build

```shell
make go
```


## Wiring

```
       C0     C1    C2    C3    C4     C5     C6    C7    C8    C9    C10       C11
   ,-----------------------------------------------------------------------------------.
R0 |  Esc  |  Q  |  W  |  E  |  R  |   T   |  Y  |  U  |  I  |  O   |  P   | Backspace |
   |-------+-----+-----+-----+-----+-------+-----+-----+-----+------+------+-----------|
R1 |  Tab  |  A  |  S  |  D  |  F  |   G   |  H  |  J  |  K  |  L   |      |   Enter   |
   |-------+-----+-----+-----+-----+-------+-----+-----+-----+------+------+-----------|
R2 | Shift |     |  Z  |  X  |  C  |   V   |  B  |  N  |  M  | Caps |  Up  |  RShift   |
   |-------+-----+-----+-----+-----+-------+-----+-----+-----+------+------+-----------|
R3 | Ctrl  | GUI |     | Alt |     | Space |     | Fn  | Fn2 | Left | Down |   Right   |
   `-------+-----+-----+-----+-----+-------+-----+-----+-----+------+------+-----------'
```


## Hotkeys

- <kbd>F</kbd> + <kbd>J</kbd>                          开机/唤醒
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>H</kbd> 输出剩余电量
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>P</kbd> 待机/睡眠
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>M</kbd> 切换有线/蓝牙
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>Q</kbd> 切换蓝牙通道 1
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>W</kbd> 切换蓝牙通道 2
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>E</kbd> 切换蓝牙通道 3
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>R</kbd> 开启蓝牙广播
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>B</kbd> 进入蓝牙刷机模式
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>O</kbd> 清空绑定数据
- <kbd>LShift</kbd> + <kbd>RShift</kbd> + <kbd>I</kbd> 重置键盘
