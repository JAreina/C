.PHONY: clean All

All:
	@echo "----------Building project:[ 3-HOLA-MUNDO - Debug ]----------"
	@cd "3-HOLA-MUNDO" && "$(MAKE)" -f  "3-HOLA-MUNDO.mk"
clean:
	@echo "----------Cleaning project:[ 3-HOLA-MUNDO - Debug ]----------"
	@cd "3-HOLA-MUNDO" && "$(MAKE)" -f  "3-HOLA-MUNDO.mk" clean
