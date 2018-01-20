/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_GANSSTOD_GSMTimeAssociation_H_
#define	_GANSSTOD_GSMTimeAssociation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BCCHCarrier.h"
#include "BSIC.h"
#include "FrameNumber.h"
#include "TimeSlot.h"
#include "BitNumber.h"
#include "FrameDrift.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GANSSTOD-GSMTimeAssociation */
typedef struct GANSSTOD_GSMTimeAssociation {
	BCCHCarrier_t	 bcchCarrier;
	BSIC_t	 bsic;
	FrameNumber_t	 frameNumber;
	TimeSlot_t	 timeSlot;
	BitNumber_t	 bitNumber;
	FrameDrift_t	*frameDrift	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSSTOD_GSMTimeAssociation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSTOD_GSMTimeAssociation;

#ifdef __cplusplus
}
#endif

#endif	/* _GANSSTOD_GSMTimeAssociation_H_ */
#include <asn_internal.h>
