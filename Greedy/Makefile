# compiles the required ex code (if it exists)
all exe$(ex) exe$(ex).exe:  ex$(ex).cpp
	g++ ex$(ex).cpp -o exe$(ex)


# defines run and clean if windows is being used
ifeq ($(OS), Windows_NT)

# simply runs the exe file created
run: exe$(ex).exe
	./exe$(ex)

# simply remove the exe file created 
clean: exe$(ex).exe
	powershell "rm exe$(ex).exe"


# defines run and clean for non-windows system (Tested on Ubuntu18.04LTS only) 
else 

# simply runs the exe file created
run: exe$(ex)
	./exe$(ex)

# simply remove the exe file created
clean: exe$(ex)
	rm exe$(ex)
endif

# if the seleted ex source file is missing you'll need to download it.
ex$(ex).cpp:
	$(error You either don't have the source files need or selected a nonexistent exercise, currently existent solutions are 2, 3, 4 and 6)