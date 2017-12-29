# fillit

Fillit is a program that assembles a given Tetriminos set altogether in the smallest possible square (max : 26), in a minimum of time.

## Installing

Clone the repository and: 

```
make
```

Note : Not Supported on the Linux Operating System

## Running the tests

### TN_test_Fillit

I have created my own test program : [TN_test_Fillit](https://github.com/vtennero/TN_test_Fillit)
For the generator, I used [hqro's tetriminos-generator](http://bit.ly/2pRgAIA)

It tests the following:
* usage
* invalid files
* invalid grids (~50)
* valid grids (~150)

To run it, simply put the content of the TN_test_Fillit folder in your fillit folder, then do :

```
sh TN_test_Fillit.sh
```

### Other method

Alternatively, you can create your own test file with grids, for instance :

```
....
..##
..##
....

####
....
....
....
```

Then do :
```
./fillit [file]
```

## Additional Resources

Instructions : [Subject](http://bit.ly/2le7CAs)

My test program : [TN_test_Fillit](https://github.com/vtennero/TN_test_Fillit)

Another test program (not made by me) : [42FC](https://github.com/jgigault/42FileChecker)

## Author

* **Victor Tenneroni** - [Website](http://victor-tenneroni.com/)
