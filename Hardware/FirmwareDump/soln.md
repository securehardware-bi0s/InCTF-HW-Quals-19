### Intended Solution
The given firmware is that of a NodeMCU Development Board.
The `strings` on the binary gives us a lot of output including some *base-64* data.
```
<img src="data:image/png;base64,iVBORw0KGgoAAAAN....... >
```
The data is converted into a [image](./base64.png)

This data has LSB Encoded data, which can be decrypted any LSB Decrypter.


FLAG:  inctf{ev3ry_suCCeSSfuL_h4rDwaRe_h4s_4_s0FTw4r3_b3h1nD}