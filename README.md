# trex-encryption

## Major Update!

T-Rex Encryption Algorithm is finally out. With version 1.3, we are introducing major bug fixes, and are introducing a critical function: the tamper() function.

The tamper function allows the algorithm to check whether a string is legitimately a string encrypted using the T-Rex algorithm. Moreover, it allows admins in "Election-With-C" to check whether election integrity is retained or not. The tamper() function checks all the characters of the strings to make sure that the NONE of the text is modified. One character shift, and it refuses to decrypt the string. This makes it so that it will be harder for hackers to crack the encryption.

Download the file from here: https://drive.google.com/file/d/1jmSrIrYOE7JL96UtHmmO8L3nN9TcTzeM/view?usp=sharing

## About T-Rex Encryption

T-rex encryption is a string encryption program that uses the crypt.h header file originally intended for "Election with C."
function guide for crpyt.h :
crypt.h is a header file made specifically for ELECTION program created by Rufelle Pactol, 2022.
as of version 1.0, crypt.h has four functions:

- void rnewline (char*)
	loops through a string and removes new line characters and turns them into "eoS" i.e.,'\0'

- int tamper(char*)
	it is a function for checking possible tampering with encrypted strings. It can detect if a string is a legitimate string encrypted using
	crypt.h or not. It returns 1 if the string is safe.

- void encrypt(char*)
	it is an encryption alogrithm, with variating results every time it is used. This is to limit security breaches.
	
	
- void decrypt(char*)
	it is a decryption algorithm and utilizes tamper() to check if a string is a legitimate string or not. 


### Patches

	v1.0.0: 
		added crypt.h
		
	v1.1.0: 
		added spchar()
		added rnewline()
		added a workable interface
		added .exe file
		added main.cpp
		
	v1.2.0: 
		minor updates
		increased MAX size from 32 -> 100
		fixed decrypted string location
		fixed inconsistency crash bug
		
	v1.3.0: 
		fixed and implemented the tamper() function
		have tamper checks
		
	v1.3.1:
		fixed a tamper() print bug
		
	v1.3.2:
		introduced test-cases.cpp for testing the integrity of the tamper()
		function and the accuracy of the decrypt() function.
		
	v1.3.3:
		fixed tamper() accuracy, now at 67.77%
		improve test-cases.cpp speed
