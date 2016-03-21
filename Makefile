.PHONY: deploy
deploy:
	cd solver; make; cp quad-solver ../quad-solver

.PHONY: clean
clean:
	-rm quad-solver
	cd solver; make clean

# all tests
.PHONY: test
test: deploy integration-test unit-test

# unit tests
.PHONY: unit-test
unit-test:
	cd solver; make test

# integratino tests
.PHONY: integration-test
integration-test:
	cd solver; make test
