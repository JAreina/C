.PHONY: clean All

All:
	@echo "----------Building project:[ 13-BREAK-CONTINUE - Release ]----------"
	@cd "13-BREAK-CONTINUE" && "$(MAKE)" -f  "13-BREAK-CONTINUE.mk"
clean:
	@echo "----------Cleaning project:[ 13-BREAK-CONTINUE - Release ]----------"
	@cd "13-BREAK-CONTINUE" && "$(MAKE)" -f  "13-BREAK-CONTINUE.mk" clean
