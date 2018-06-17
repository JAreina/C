.PHONY: clean All

All:
	@echo "----------Building project:[ 14-BREAK-CONTINUE-2 - Release ]----------"
	@cd "14-BREAK-CONTINUE-2" && "$(MAKE)" -f  "14-BREAK-CONTINUE-2.mk"
clean:
	@echo "----------Cleaning project:[ 14-BREAK-CONTINUE-2 - Release ]----------"
	@cd "14-BREAK-CONTINUE-2" && "$(MAKE)" -f  "14-BREAK-CONTINUE-2.mk" clean
