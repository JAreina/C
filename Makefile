.PHONY: clean All

All:
	@echo "----------Building project:[ 18-funciones-void-procedimientos - Release ]----------"
	@cd "18-funciones-void-procedimientos" && "$(MAKE)" -f  "18-funciones-void-procedimientos.mk"
clean:
	@echo "----------Cleaning project:[ 18-funciones-void-procedimientos - Release ]----------"
	@cd "18-funciones-void-procedimientos" && "$(MAKE)" -f  "18-funciones-void-procedimientos.mk" clean
