.PHONY: clean All

All:
	@echo "----------Building project:[ 16-2-STRING-H - Release ]----------"
	@cd "16-2-STRING-H" && "$(MAKE)" -f  "16-2-STRING-H.mk"
clean:
	@echo "----------Cleaning project:[ 16-2-STRING-H - Release ]----------"
	@cd "16-2-STRING-H" && "$(MAKE)" -f  "16-2-STRING-H.mk" clean
