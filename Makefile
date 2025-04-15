runmain:
	gcc main.c errors/availability_error.c errors/validation_error.c utils/render_table.c -o app && ./app