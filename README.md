# Moves Tracker for Pushswap

This program, `Moves_Tracker`, is designed to track and display the moves made during the execution of a `pushswap` sorting algorithm. It shows a step-by-step visualization of stack operations like `push`, `swap`, and `rotate`, helping to debug and visualize the sorting process.

## Features

- Tracks and displays the state of the stacks at each step.
- Visualizes the move being executed.
- Handles common `pushswap` operations, such as:
  - `pa` (push to stack A)
  - `pb` (push to stack B)
  - `sa` (swap top two elements of stack A)
  - `sb` (swap top two elements of stack B)
  - `ra` (rotate stack A)
  - `rb` (rotate stack B)
  - `rra` (reverse rotate stack A)
  - `rrb` (reverse rotate stack B)
  - `rrr` (reverse rotate both stacks)

## Installation

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/iaceene/Push_Swap_Moves_Tracker.git
   ```

2. Navigate into the project directory:

   ```bash
   cd Push_Swap_Moves_Tracker
   ```

3. Compile the program:

   ```bash
   make
   ```

   Ensure you have a C compiler (e.g., `gcc`) and `make` installed on your system.

## Usage

To run the program, use the following command format:

```bash
./Moves_Tracker <numbers...>
```

### Example:

```bash
./Moves_Tracker 3 2 57 44
```

This command will initialize the stacks with the numbers `3, 2, 57, 44` and perform a series of operations, displaying the results at each step.

### Example Output:

```bash
------Start-----
    3|
    2|
   57|
   44|
   -        -
   a        b
-------End-------
pb
------Start-----
    2|      3|
   57|
   44|
   -        -
   a        b
-------End-------
pa
------Start-----
    3|
    2|
   57|
   44|
   -        -
   a        b
-------End-------
sa
------Start-----
    2|
    3|
   57|
   44|
   -        -
   a        b
-------End-------
ra
------Start-----
    3|
   57|
   44|
    2|
   -        -
   a        b
-------End-------
rrr
------Start-----
    2|
    3|
   57|
   44|
   -        -
   a        b
-------End-------
rra
------Start-----
   44|
    2|
    3|
   57|
   -        -
   a        b
-------End-------
pb
------Start-----
    2|     44|
    3|
   57|
   -        -
   a        b
-------End-------
pb
------Start-----
    3|      2|
   57|     44|
   -        -
   a        b
-------End-------
pb
------Start-----
   57|      3|
  |         2|
  |        44|
   -        -
   a        b
-------End-------
sb
------Start-----
   57|      2|
  |         3|
  |        44|
   -        -
   a        b
-------End-------
rrb
------Start-----
   57|     44|
  |         2|
  |         3|
   -        -
   a        b
-------End-------
KO
```

The program will continue until the final sorting state is reached, displaying the corresponding stack state and move name.

## Error Handling

If the program is executed incorrectly, such as with an incorrect number of arguments, it will display an error message:

```bash
Error: Incorrect number of arguments.
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Thanks to the contributors and the pushswap community for the original algorithm.
- This tool was created to help visualize the steps of the pushswap algorithm more easily.

## Contribution

Feel free to fork the repository, create an issue, or submit a pull request if you want to contribute improvements, bug fixes, or new features.

