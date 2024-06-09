TARGET := iphone:clang:latest:11.0
INSTALL_TARGET_PROCESSES = YouTube
ARCHS = arm64
TWEAK_NAME = YouTubeX

YouTubeX_INJECT_DYLIBS =.theos/obj/YouPiP.dylib  .theos/obj/YouMute.dylib

include $(THEOS)/makefiles/common.mk


$(TWEAK_NAME)_FILES = Tweak.x
$(TWEAK_NAME)_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk

SUBPROJECTS += Tweaks/YouPiP Tweaks/YouMute
include $(THEOS_MAKE_PATH)/aggregate.mk

before-package::
	@echo -e "==> \033[1mMoving tweak's bundle to Resources/...\033[0m"
	@cp -R Tweaks/YouPiP/layout/Library/Application\ Support/YouPiP.bundle Resources/
	@cp -R Tweaks/YouMute/layout/Library/Application\ Support/YouMute.bundle Resources/
	@echo -e "==> \033[1mChanging the installation path of dylibs...\033[0m"
