/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-TRIGGERED-START"
 * 	found in "../supl-triggered-start.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_AreaIdSet_H_
#define	_AreaIdSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AreaId;

/* AreaIdSet */
typedef struct AreaIdSet {
	A_SEQUENCE_OF(struct AreaId) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AreaIdSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AreaIdSet;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AreaId.h"

#endif	/* _AreaIdSet_H_ */
#include <asn_internal.h>
