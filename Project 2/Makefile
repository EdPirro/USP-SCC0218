# simply compile main.cpp files with g++
all exe exe.exe: main.cpp
	g++ main.cpp -o exe

# defines run and clean if windows is being used
ifeq ($(OS), Windows_NT)

# run checks whether the case variable was set to a valid one, if it was
# runs with the entered test case, if it isn't it runs withou any test case
# and waits for the inputs to be given manually
run: exe.exe
	powershell \
	"if ( Test-Path Cases/$(case).in ) \
		{ echo "Output:";	 Get-Content Cases/$(case).in | ./exe } \
	else \
		{ echo "Running..."; ./exe }"

# simply remove the exe file created
clean: exe.exe
	powershell "rm exe.exe"

# defines run and clean for non-windows system (Tested on Ubuntu18.04LTS only) 
else 

# run checks whether the case variable was set to a valid one, if it was
# runs with the entered test case, if it isn't it runs withou any test case
# and waits for the inputs to be given manually
run: exe
	if [ -f Cases/$(case).in ]; then \
		echo "Output:"; \
		./exe < Cases/$(case).in;\
	else \
		echo "Running..."; \
		./exe; \
	fi

# simply remove the exe file created
clean: exe
	rm exe
endif

# if main.cpp is missing you'll need to download it.
main.cpp:
	$(error You don't have the source code needed to compile, try getting it at 'https://github.com/EdPirro/USP-SSC0218/tree/master/Project%202' and then try again)
