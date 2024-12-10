# 42 C Development Environment Template

Welcome to the 42 C Development Environment Template! This is a specialized development environment designed for 42 school students. The official repository for this template can be found at: https://github.com/ricardopxlcl/42-starter

This CodeSandbox template provides a complete C development environment for 42 school projects, with additional tools for testing, development, and simple file sharing capabilities.

## 🚀 Features

### Primary Development Tools (C-focused)

- GCC/CC compiler
- Make build automation tool
- Clang compiler
- Debugging tools (valgrind, gdb)
- Git for version control

### 42 School Specific Tools

- Norminette code style checker
- Francinette (nicknamed 'paco') testing framework

### Additional Utilities

- PHP and Apache for simple file sharing and downloading

### Python Tools (for supporting utilities)

- Python3-pip
- Python virtual environment support

### To-do

- Install extension 42 header
- Install 42 formatter

## 🛠️ Included Setup

The template automatically installs and configures:

1. Essential C development tools:

   - build-essential
   - gcc
   - make
   - clang
   - valgrind
   - gdb
   - git

2. 42 School specific tools:

   - norminette
   - Francinette (with aliases 'francinette' and 'paco')

3. Python tools (for supporting utilities):

   - python3-pip
   - python3-venv

4. File sharing utilities:
   - PHP
   - Apache web server

## 📥 Installation

To use this template:

1. Visit the template on [CodeSandbox.io 42-Starter](https://codesandbox.io/p/devbox/42-starter-xlxxs8)
2. Click the "Fork" button in the top right corner
3. Wait for the environment to be created (this may take a few moments)
4. Start coding!

Note: Forking creates your own copy of the template that you can modify and save for future use.

## 🔧 Usage

1. The environment comes pre-configured with all necessary C development tools. You need run `bash` in the terminal to use all the services.
2. Use `cc` to compile your C programs
3. Use `make` for project compilation if you have a Makefile
4. Use `norminette` command to check code style (42 school standard)
5. Use `francinette` or `paco` commands to run tests specific to 42 projects.
6. The PHP server starts automatically on port 8080 for simple file sharing

## 💡 Additional Information

- Focus on C development for 42 school projects
- All development tools are installed fresh from official repositories
- Python packages are installed globally for system-wide access
- PHP and Apache are included as utilities, not as primary development tools
- When compiling your C programs, always remember to use the following flags to ensure your code meets 42's standards and catches potential issues, this command will try to compile and execute:

```plaintext
cc main.c -Wall -Wextra -Werror && ./a.out
```

## 🤿 Test functions

We have provided two test folders to help you validate your code with Norminette and Francinette:

1. Francinette test folder:

   - Path: /project/workspace/test/libft_francinette
   - Contents:

   ```plaintext
     libft_francinette
     ├── libft.a
     ├── libft.c
     ├── libft.h
     ├── libft.o
     ├── main.c
     └── Makefile

     ricardopxlcl ➜ bash
     ricardopxlcl ➜ cd /project/workspace/test/libft_francinette
     ricardopxlcl ➜ francinette
   ```

2. Norminette test folder:

   - Path: /project/workspace/test/ft_putchar_norminette
   - Contents:

   ```plaintext
     ft_putchar_norminette
     └── ft_putchar.c

     ricardopxlcl ➜ bash
     ricardopxlcl ➜ cd /project/workspace/test/ft_putchar_norminette
     ricardopxlcl ➜ norminette
   ```

## 🏃‍♂️ Development and Sharing Server

The template includes a PHP development server for simple file sharing:

- Host: localhost
- Port: 8080
- Auto-start enabled

Note: This is not for C development, but to facilitate easy file sharing and downloading.

## 🤝 Contributing

Feel free to submit issues and enhancement requests!

## 📝 License

This template is provided as-is under the MIT license.

## 👥 Contributors

[![Username](https://github.com/ricardopxlcl.png?size=70)](https://github.com/ricardopxlcl)
