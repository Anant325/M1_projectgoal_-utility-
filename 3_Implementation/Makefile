#TargetName : Dependencies
#<TAB>commands
#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
PROJ_NAME=Calculator
 SRC=src/project_main.c

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

Build : 
	gcc  project_main.c -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm 

Run : Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))



Clean:
	$(RM) $(call FixPath,*.out,*.exe)