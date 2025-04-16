runmain:
	gcc main.c errors/availability_error.c errors/validation_error.c utils/render_table.c utils/render_response.c utils/render_loading.c -o app && ./app
