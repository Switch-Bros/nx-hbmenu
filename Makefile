export APP_VERSION	:=	3.6.0

ifeq ($(RELEASE),)
	export APP_VERSION	:=	$(APP_VERSION)-SB
endif

.PHONY: clean all nx dist-bin

all: nx

romfs:
	@mkdir -p romfs

romfs/assets.zip	:	romfs assets
	@rm -f romfs/assets.zip
	@zip -rj romfs/assets.zip assets

dist-bin:	romfs/assets.zip
	$(MAKE) -f Makefile.nx dist-bin

nx:	romfs/assets.zip
	$(MAKE) -f Makefile.nx

clean:
	@rm -Rf romfs
	$(MAKE) -f Makefile.nx clean
