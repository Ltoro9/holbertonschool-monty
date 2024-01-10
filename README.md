# Monty Language Interpreter

This is a simple Monty language interpreter. Monty is a stack-based scripting language that operates on a stack. It supports various operations to manipulate the stack.

## Instructions

### `push <n>`
Pushes an integer onto the stack.

- Arguments:
  - `<n>`: Integer to be pushed onto the stack.

### `pall`
Prints all the values on the stack.

### `pint`
Prints the value at the top of the stack.

### `pop`
Removes the top element of the stack.

### `nop`
Does nothing. Used as a placeholder.

### `swap`
Swaps the top two elements of the stack.

### `add`
Adds the top two elements of the stack.

## Usage

To run a Monty script, use the following command:

```bash
./monty <filename>

