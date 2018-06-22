.PHONY: clean All

All:
	@echo "----------Building project:[ 18-3-funcion-parametros-por-REFERENCIA - Release ]----------"
	@cd "18-3-funcion-parametros-por-REFERENCIA" && "$(MAKE)" -f  "18-3-funcion-parametros-por-REFERENCIA.mk"
clean:
	@echo "----------Cleaning project:[ 18-3-funcion-parametros-por-REFERENCIA - Release ]----------"
	@cd "18-3-funcion-parametros-por-REFERENCIA" && "$(MAKE)" -f  "18-3-funcion-parametros-por-REFERENCIA.mk" clean
