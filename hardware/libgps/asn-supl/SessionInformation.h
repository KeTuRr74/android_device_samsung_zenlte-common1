/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-REPORT"
 * 	found in "../supl-report.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_SessionInformation_H_
#define	_SessionInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SessionID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SessionInformation */
typedef struct SessionInformation {
	SessionID_t	 sessionID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SessionInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SessionInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _SessionInformation_H_ */
#include <asn_internal.h>
