/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#include "GANSSAddUTCModel.h"

static asn_per_constraints_t asn_PER_type_GANSSAddUTCModel_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_GANSSAddUTCModel_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSAddUTCModel, choice.utcModel2),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTCmodelSet2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utcModel2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSAddUTCModel, choice.utcModel3),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTCmodelSet3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utcModel3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSAddUTCModel, choice.utcModel4),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTCmodelSet4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utcModel4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSAddUTCModel, choice.utcModel5_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTCmodelSet5_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utcModel5-r12"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_GANSSAddUTCModel_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* utcModel2 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* utcModel3 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* utcModel4 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* utcModel5-r12 */
};
static asn_CHOICE_specifics_t asn_SPC_GANSSAddUTCModel_specs_1 = {
	sizeof(struct GANSSAddUTCModel),
	offsetof(struct GANSSAddUTCModel, _asn_ctx),
	offsetof(struct GANSSAddUTCModel, present),
	sizeof(((struct GANSSAddUTCModel *)0)->present),
	asn_MAP_GANSSAddUTCModel_tag2el_1,
	4,	/* Count of tags in the map */
	0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_GANSSAddUTCModel = {
	"GANSSAddUTCModel",
	"GANSSAddUTCModel",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_GANSSAddUTCModel_constr_1,
	asn_MBR_GANSSAddUTCModel_1,
	4,	/* Elements count */
	&asn_SPC_GANSSAddUTCModel_specs_1	/* Additional specs */
};

