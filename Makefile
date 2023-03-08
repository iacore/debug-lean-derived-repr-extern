Main: Main.c vector2.c
	leanc -o Main Main.c vector2.c

Main.c: Main.lean
	lean -c Main.c Main.lean
