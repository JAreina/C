.PHONY: clean All

All:
	@echo "----------Building project:[ 7-SCANF - Release ]----------"
	@cd "7-SCANF" && "$(MAKE)" -f  "7-SCANF.mk"
clean:
	@echo "----------Cleaning project:[ 7-SCANF - Release ]----------"
	@cd "7-SCANF" && "$(MAKE)" -f  "7-SCANF.mk" clean
