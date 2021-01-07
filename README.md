# gencmd
Simple library (python3) for send commands to the video-core on Raspberry Pi

## motivation
When I've tested my own solution to measure voltage and temperature on video-core. I discovered that run 'gencmd' directly like a process sometimes is not good enough. For example, in the case when the measurement frequency is less than one second. So there is a simple library for pass commands directly to the video-core.

## usage example
``` python
from gencmd import GenCmd

t = GenCmd()
print(t.send('get_throttled'))

```

## PyPi package
Package available through pypi.org: https://pypi.org/project/gencmd

## build
If you have the necessity to build a package from sources keep in mind that I've used vlang: https://github.com/vlang/v
Early I tried a different approach but use external libraries from vlang much easier.

After install vlang from sources or from binaries (see https://vlang.io/) you could use `buildew` script.

- create pip package
```
./buildew pip
```

- clear temporary files created by pip command
```
./buildew clear
```

- run tests (only for raspberry pi)
```
./buildew tests
```
