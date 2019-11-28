### Solution

This is MIPS-32 reversing challenge. The challenge consists of a binary which generates a 15 charecter word from 17 inputs

The binary contains the string of lowercase alphabets and the charecters are chosen according using the following logic:
```C
for( int i=1, j=0 ; i < 16 ; i++, j++ ){
		a1 = array[i]^array[i-1];
		a2 = array[i+1]^array[i];
		final[j] = letters[(a1^a2)%26];
	}
```
where `array` contains our input

Applying properties of XOR this can be reduced to :

```C
final[j] = letters[array[i-1]^array[i+1]]
```
And this final word should be the word `thunderstricken`. 

You can use this logic to find the inputs required to generate the required word.
