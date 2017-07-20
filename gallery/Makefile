# New ports collection makefile for:	gallery
#

include /usr/src/makefile.inc

PORTNAME=	gallery
PORTVERSION=	2.0
PORTRELEASE=5
CATEGORIES=	www
MASTER_SITE_SUBDIR=dist	
PREFIX=${BUILDROOT}/${PROD_ROOT}/${PORTNAME}-${PORTVERSION}-${PORTRELEASE}
WRKSRC=${RPM_WORK}/${PORTNAME}-${PORTVERSION}
FILESDIR=${FILES_DISTR}/${PORTNAME}-${PORTVERSION}
SCRIPTS_FILES=postinstall reconfigure



configure:
	@echo "No configure is required"

build:
	@echo "No building is required"

do-install:
	@mkdir -p ${PREFIX}
	@mkdir -p ${PREFIX}/forms
	@mkdir -p ${PREFIX}/apps
	@mkdir -p ${PREFIX}/scripts
	@mkdir -p ${PREFIX}/docs
	@mkdir -p ${PREFIX}/info
	@mkdir -p ${PREFIX}/screenshots
	@mkdir -p ${PREFIX}/uninstall

	@cd ${WRKSRC} && \
	tar -cf ${PREFIX}/apps/httpdocs-files.tar *
	@for i in ${SCRIPTS_FILES}; do \
	cp ${FILESDIR}/$$i ${PREFIX}/scripts && \
	chmod 755 ${PREFIX}/scripts/$$i; \
	done
	@cp ${FILESDIR}/index.*.html ${PREFIX}/docs && \
	chmod 644 ${PREFIX}/docs/index.*.html;
	@cp ${FILESDIR}/info.xml ${PREFIX}/info && \
	chmod 644 ${PREFIX}/info/info.xml;
	@cp ${FILESDIR}/button.gif ${PREFIX}/info && \
	chmod 644 ${PREFIX}/info/button.gif;

#	@cp ${FILESDIR}/uninstall ${PREFIX}/uninstall && \
#	chmod 755 ${PREFIX}/uninstall/uninstall;

	@for i in ${FILESDIR}/*.php; do \
	cp $$i ${PREFIX}/forms; \
	done
	@install -m 644 ${FILESDIR}/app_screenshot*.png ${PREFIX}/screenshots

