# simply tasks.cpp files with g++
all exe exe.exe: tasks.cpp
	g++ tasks.cpp -o exe

# defines run and clean if windows is being used
ifeq ($(OS), Windows_NT)

# simply runs the exe file
run: exe.exe
	./exe

# simply remove the exe file created
clean: exe.exe
	powershell "rm exe.exe"

# defines run and clean for non-windows system (Tested on Ubuntu18.04LTS only) 
else 

# simply runs the exe file
run: exe
	./exe

# simply remove the exe file created
clean: exe
	rm exe
endif

# if tasks.cpp is missing you'll need to download it.
tasks.cpp:
	$(error You don't have the source code needed to compile, try getting it at 'https://github.com/EdPirro/USP-SSCsije/tree/master/Project1' and then try again)