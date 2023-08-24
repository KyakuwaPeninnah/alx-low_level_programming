 global    main
          extern    printf
main:
	  mov   edi, temp
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
temp: db 'Hello, Holberton\n',0
