#### Solution
If you don’t have a board with a JTAG or similar interface,the easiest way is to go with [simavr](https://github.com/buserror/simavr).
<br/>
The only trick here is how to run it: 
```console
./examples/board_simduino/obj-x86_64-linux-gnu/simduino.elf -d <path_to_hex_file>
```
Now you have a sketch file started and waiting on instruction address 0, with a GDB port (port 1234).
##### Attaching a debugger
You need to use an avr-gdb debugger. The problem is that with most of the distros, this is not coming with Python support enabled, so you can’t have a decent [interface](https://github.com/cyrus-and/gdb-dashboard).

To get a working copy with Python extension you can get the scripts at: https://github.com/igormiktor/build-avr-gcc
<br/>
then modified the script build-avr-gdb.
<br/>
Modify line:
```console
../$NAME_GDB/configure --prefix=$PREFIX –target=avr
```
Add Python support:
```console
../$NAME_GDB/configure --prefix=$PREFIX  --with-python –target=avr
```
Then run the script: it should automate most of the things for you. At the end, if you installed the DashboardGDB interface, you’ll have your shiny debugger ready tobe used in:
```console
/usr/local/avr/bin/avr-gdb
```
Remember to review the log file in case of errors
##### Excape from GDB behaving in a strange way
Quick cheat sheet for the avr-gdb. To connect to therunning simavr:
```console
(gdb) target remote localhost:1234
```
Remember that the program is stopped, so if you wantto run it, just type “c” to continue.
<br/>
To review the memory allocation:
```console
(gdb) info mem
```
You usually see that the FLASH is allocated at 0x00000000 and the SRAM at 0x00800000. Here a trickypart: if you set a breakpoint the usual way (withcommand b *0x00000101), it will be placed in SRAM... so not very useful. If you want to place it in FLASH, you have to use the following syntax:
```console
(gdb) b *(void(*)())  0x00000101
```
So you are ready to debug and find your flag.
