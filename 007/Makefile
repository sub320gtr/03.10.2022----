### *!
# authors Титов Максим <sub320gtr@gmail.com>
# version 0.0.1a
# date 03.10.22
# copuright MIT
#/

#/ PACKAGE=001.osvoj.ru

default: clear 
		g++ -o 007.exe ./main.c++

clear:
		rm -rf ./*.exe ./*.o

doc:
	 	doxygen ./Doxyfile

007:
		g++ -c compl.c++

### *!
# com.locate:
#	msgfmt locale/ru/LC_MESSAGES/$(PACKAGE).po \
		-o locale/ru/LC_MESSAGES/$(PACKAGE).mo

# gen.locate:
#	xgettext --default-domain=$(PACKAGE) --output-dir=./locate --language=C  \
#		--from-code=UTF-8 --keyword=_ --directory=./ *.c *.h
#
#		mkdir -p ./locate/ru/LC_MESSAGES

#		msginit -i locale/$(PACKAGE).po -o locate/ru/LC_MESSAGES/$(PACKAGE).po \
			--locate=ru_RU.UTF8;
#/
