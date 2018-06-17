.PHONY: clean All

All:
	@echo "----------Building project:[ 9-WHILE - Release ]----------"
	@cd "9-WHILE" && "$(MAKE)" -f  "9-WHILE.mk"
clean:
	@echo "----------Cleaning project:[ 9-WHILE - Release ]----------"
	@cd "9-WHILE" && "$(MAKE)" -f  "9-WHILE.mk" clean
