# xor
This is a command line tool to quickly xor an input that is redirected to this tool or typed in by a user. It will xor the input against a string given to it as an argument.

## Examples
```
echo "this is a test" | xor my_secret_password
cat encrypted.txt | xor decrypt
```

## Usage
```Usage: (data/command output) | xor (string/password to xor)```
If you do not redirect any input it will allow you to enter your input through stdin. Use ctrl+d to finish entering data.

## Setup
1. First download this repository
2. Now run ```chmod +x install.sh```
3. Finally ```./install.sh```

If you get errors you will want to make sure you have ```gcc``` installed. Or you will want to run ```export PATH=$PATH:/bin```

## Author
[@CuPcakeN1njA](https://twitter.com/CuPcakeN1njA)
