.PHONY: clean All

All:
	@echo "----------Building project:[ 3-PRINTF - Debug ]----------"
	@cd "3-PRINTF" && "$(MAKE)" -f  "3-PRINTF.mk"
clean:
	@echo "----------Cleaning project:[ 3-PRINTF - Debug ]----------"
	@cd "3-PRINTF" && "$(MAKE)" -f  "3-PRINTF.mk" clean
