.PHONY: clean All

All:
	@echo "----------Building project:[ 8-FOR - Release ]----------"
	@cd "8-FOR" && "$(MAKE)" -f  "8-FOR.mk"
clean:
	@echo "----------Cleaning project:[ 8-FOR - Release ]----------"
	@cd "8-FOR" && "$(MAKE)" -f  "8-FOR.mk" clean
