.PHONY: clean All

All:
	@echo "----------Building project:[ 23-FILE - Release ]----------"
	@cd "23-FILE" && "$(MAKE)" -f  "23-FILE.mk"
clean:
	@echo "----------Cleaning project:[ 23-FILE - Release ]----------"
	@cd "23-FILE" && "$(MAKE)" -f  "23-FILE.mk" clean
