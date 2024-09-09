# ATM Transaction System

## Project Overview

This project is a simple ATM transaction system implemented in C. It allows users to perform various banking transactions such as deposits, withdrawals, balance inquiries, PIN changes, and fund transfers. The system is designed to simulate basic ATM functionalities using text file storage for account balance and PIN information.

## Features

- **Deposit**: Allows users to deposit money into their account.
- **Withdraw**: Allows users to withdraw money from their account.
- **Fast Cash**: Provides quick cash withdrawal in preset denominations.
- **Transfer**: Facilitates fund transfers to another account.
- **Balance Inquiry**: Displays the current balance in the account.
- **PIN Change**: Allows users to change their PIN for security purposes.
- **Error Handling**: Manages incorrect PIN entries and account blockages.

## Files

- **`mainscrre.c`**: The main program file containing the main function and user interaction logic.
- **`deposit.c`**: Contains the deposit function to update the balance.
- **`balance.c`**: Contains the balance function to retrieve the current balance.
- **`withdraw.c`**: Contains the withdrawal function to handle cash withdrawals.
- **`fastcash.c`**: Contains the fast cash function to facilitate quick withdrawals.
- **`pinchange.c`**: Contains the PIN change function to update the user's PIN.
- **`transfer.c`**: Contains the transfer function to move funds between accounts.
- **`pinwrong.c`**: Contains the function for handling incorrect PIN entries.
- **`tpins.c`**: Contains the function for verifying the PIN entered by the user.

## Text Files

The project uses the following text files to store data:

- **`deposit11.txt`**: This file is used to store and update the balance amount after deposit, withdrawal, and fast cash transactions. Ensure this file is placed in the same directory as the C files or adjust the file path in the code if needed.

- **`pins67.txt`**: This file stores and updates the PIN for user authentication. Ensure this file is placed in the same directory as the C files or adjust the file path in the code if needed.

## Usage

1. Compile the C files using a C compiler (e.g., GCC):
   ```sh
   gcc -o atm_main mainscrre.c deposit.c balance.c withdraw.c fastcash.c pinchange.c transfer.c pinwrong.c tpins.c
   ```

2. Run the compiled program:
   ```sh
   ./atm_main
   ```

3. Follow the on-screen prompts to interact with the ATM system.
