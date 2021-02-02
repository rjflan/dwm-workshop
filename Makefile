
PREFIX = $(HOME)/.local/
CC = gcc

PARTS = dwm dmenu st slstatus

.PHONY: all clean install uninstall $(PARTS)

all: $(PARTS)

$(PARTS):
	@echo 'MAKE $@'
	@make -C $@ -j CC="$(CC)"

clean:
	@for part in $(PARTS); do \
		make -C $$part clean; \
	done

install:
	@mkdir -p "$(PREFIX)"
	@for part in $(PARTS); do \
		make -C $$part install PREFIX="$(PREFIX)"; \
	done
	@mkdir -p $(PREFIX)/share/backgrounds/
	@cp -fv workshop.jpg $(PREFIX)/share/backgrounds/workshop.jpg
	
uninstall:
	@for part in $(PARTS); do \
		make -C $$part uninstall PREFIX="$(PREFIX)"; \
	done
	@rm -v $(PREFIX)/share/backgrounds/workshop.jpg

