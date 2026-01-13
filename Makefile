GIT = git
ADD = $(GIT) add .
COMMIT = $(GIT) commit -m "update"
PUSH = $(GIT) push

all:
	$(ADD) && $(COMMIT) && $(PUSH)
