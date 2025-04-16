runmain:
	gcc main.c errors/availability_error.c errors/validation_error.c utils/render_table.c utils/render_response.c -o app && ./app
