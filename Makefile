.PHONY: clean All

All:
	@echo "----------Building project:[ 2-PUTS - Debug ]----------"
	@cd "2-PUTS" && "$(MAKE)" -f  "2-PUTS.mk"
clean:
	@echo "----------Cleaning project:[ 2-PUTS - Debug ]----------"
	@cd "2-PUTS" && "$(MAKE)" -f  "2-PUTS.mk" clean
