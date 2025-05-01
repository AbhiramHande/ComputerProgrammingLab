# Format Specifiers in C:

1. **`%c`**: Character  
   Prints a single character.
   ```c
   char ch = 'A';
   printf("%c", ch);  // Output: A
   ```

2. **`%s`**: String  
   Prints a null-terminated string.
   ```c
   char str[] = "Hello";
   printf("%s", str);  // Output: Hello
   ```

3. **`%f`**: Float (decimal)  
   Prints a floating-point number.
   ```c
   float num = 3.14;
   printf("%f", num);  // Output: 3.140000
   ```

4. **`%lf`**: Double  
   Prints a double-precision floating-point number.
   ```c
   double num = 3.14159;
   printf("%lf", num);  // Output: 3.141590
   ```

5. **`%d`**: Signed decimal integer  
   Prints an integer (signed).
   ```c
   int num = 10;
   printf("%d", num);  // Output: 10
   ```

6. **`%o`**: Octal  
   Prints an integer in octal format.
   ```c
   int num = 10;
   printf("%o", num);  // Output: 12 (octal representation of 10)
   ```

7. **`%x`**: Hexadecimal (lowercase)  
   Prints an integer in lowercase hexadecimal format.
   ```c
   int num = 255;
   printf("%x", num);  // Output: ff
   ```

8. **`%X`**: Hexadecimal (uppercase)  
   Prints an integer in uppercase hexadecimal format.
   ```c
   int num = 255;
   printf("%X", num);  // Output: FF
   ```

## Other Common Format Specifiers:

9. **`%u`**: Unsigned decimal integer  
   Prints an unsigned integer.
   ```c
   unsigned int num = 10;
   printf("%u", num);  // Output: 10
   ```

10. **`%p`**: Pointer  
    Prints the memory address (pointer value).
    ```c
    int num = 5;
    printf("%p", &num);  // Output: Some memory address
    ```

11. **`%e`**: Scientific notation (lowercase)  
    Prints a floating-point number in scientific notation.
    ```c
    float num = 12345.678;
    printf("%e", num);  // Output: 1.234568e+04
    ```

12. **`%E`**: Scientific notation (uppercase)  
    Prints a floating-point number in scientific notation, but with uppercase "E".
    ```c
    float num = 12345.678;
    printf("%E", num);  // Output: 1.234568E+04
    ```

13. **`%g`**: Use the shortest representation between `%e` and `%f`  
    Chooses the most compact form: either scientific notation or fixed-point format, based on the number's size.
    ```c
    float num = 12345.678;
    printf("%g", num);  // Output: 12345.7
    ```

14. **`%G`**: Like `%g`, but with uppercase "E" for scientific notation.
    ```c
    float num = 12345.678;
    printf("%G", num);  // Output: 12345.7
    ```

15. **`%ld`**: Long integer (signed decimal)  
    Prints a long integer.
    ```c
    long num = 123456789L;
    printf("%ld", num);  // Output: 123456789
    ```

16. **`%lld`**: Long long integer (signed decimal)  
    Prints a long long integer.
    ```c
    long long num = 1234567890123LL;
    printf("%lld", num);  // Output: 1234567890123
    ```

17. **`%lu`**: Long unsigned integer  
    Prints a long unsigned integer.
    ```c
    unsigned long num = 1234567890UL;
    printf("%lu", num);  // Output: 1234567890
    ```

18. **`%llu`**: Long long unsigned integer  
    Prints a long long unsigned integer.
    ```c
    unsigned long long num = 1234567890123ULL;
    printf("%llu", num);  // Output: 1234567890123
    ```

19. **`%hd`**: Short integer (signed decimal)  
    Prints a short integer.
    ```c
    short num = 32767;
    printf("%hd", num);  // Output: 32767
    ```

20. **`%hhd`**: Short signed integer (char size)  
    Prints a signed short integer, often used for `char`.
    ```c
    signed char num = 127;
    printf("%hhd", num);  // Output: 127
    ```

21. **`%n`**: Number of characters printed so far  
    This format specifier doesn't print anything but stores the number of characters printed so far into the corresponding argument. It’s useful for formatting purposes.
    ```c
    int count;
    printf("Hello %d World%n", 123, &count);
    printf("\nNumber of characters printed: %d", count);  // Output: 18
    ```

### Summary:
- **`%c`**: Character
- **`%s`**: String
- **`%f`**: Float
- **`%lf`**: Double
- **`%d`**: Signed decimal integer
- **`%o`**: Octal
- **`%x`**: Hexadecimal (lowercase)
- **`%X`**: Hexadecimal (uppercase)
- **`%u`**: Unsigned decimal integer
- **`%p`**: Pointer
- **`%e`**: Scientific notation (lowercase)
- **`%E`**: Scientific notation (uppercase)
- **`%g`**: Shortest of `%e` or `%f`
- **`%G`**: Shortest of `%E` or `%f`
- **`%ld`**: Long signed integer
- **`%lld`**: Long long signed integer
- **`%lu`**: Long unsigned integer
- **`%llu`**: Long long unsigned integer
- **`%hd`**: Short signed integer
- **`%hhd`**: Short signed integer (for char)
- **`%n`**: Number of characters printed