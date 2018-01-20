/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "../ver2-ulp-components.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "WlanAPInformation.h"

static int
apDeviceType_6_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
apDeviceType_6_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
apDeviceType_6_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	apDeviceType_6_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
apDeviceType_6_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	apDeviceType_6_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
apDeviceType_6_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	apDeviceType_6_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
apDeviceType_6_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	apDeviceType_6_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
apDeviceType_6_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	apDeviceType_6_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
apDeviceType_6_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	apDeviceType_6_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
apDeviceType_6_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	apDeviceType_6_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
apDeviceType_6_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	apDeviceType_6_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_apMACAddress_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 48)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_apTransmitPower_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -127 && value <= 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_apAntennaGain_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -127 && value <= 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_apSignaltoNoise_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -127 && value <= 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_apSignalStrength_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -127 && value <= 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_apChannelFrequency_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 256)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_setTransmitPower_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -127 && value <= 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_setAntennaGain_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -127 && value <= 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_setSignaltoNoise_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -127 && value <= 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_setSignalStrength_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -127 && value <= 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_apDeviceType_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_apMACAddress_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  48,  48 }	/* (SIZE(48..48)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_apTransmitPower_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -127,  128 }	/* (-127..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_apAntennaGain_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -127,  128 }	/* (-127..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_apSignaltoNoise_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -127,  128 }	/* (-127..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_apSignalStrength_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -127,  128 }	/* (-127..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_apChannelFrequency_constr_12 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  256 }	/* (0..256) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_setTransmitPower_constr_14 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -127,  128 }	/* (-127..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_setAntennaGain_constr_15 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -127,  128 }	/* (-127..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_setSignaltoNoise_constr_16 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -127,  128 }	/* (-127..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_setSignalStrength_constr_17 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -127,  128 }	/* (-127..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_apDeviceType_value2enum_6[] = {
	{ 0,	11,	"wlan802-11a" },
	{ 1,	11,	"wlan802-11b" },
	{ 2,	11,	"wlan802-11g" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_apDeviceType_enum2value_6[] = {
	0,	/* wlan802-11a(0) */
	1,	/* wlan802-11b(1) */
	2	/* wlan802-11g(2) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_apDeviceType_specs_6 = {
	asn_MAP_apDeviceType_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_apDeviceType_enum2value_6,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_apDeviceType_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_apDeviceType_6 = {
	"apDeviceType",
	"apDeviceType",
	apDeviceType_6_free,
	apDeviceType_6_print,
	apDeviceType_6_constraint,
	apDeviceType_6_decode_ber,
	apDeviceType_6_encode_der,
	apDeviceType_6_decode_xer,
	apDeviceType_6_encode_xer,
	apDeviceType_6_decode_uper,
	apDeviceType_6_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_apDeviceType_tags_6,
	sizeof(asn_DEF_apDeviceType_tags_6)
		/sizeof(asn_DEF_apDeviceType_tags_6[0]) - 1, /* 1 */
	asn_DEF_apDeviceType_tags_6,	/* Same as above */
	sizeof(asn_DEF_apDeviceType_tags_6)
		/sizeof(asn_DEF_apDeviceType_tags_6[0]), /* 2 */
	&asn_PER_type_apDeviceType_constr_6,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_apDeviceType_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_WlanAPInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct WlanAPInformation, apMACAddress),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_apMACAddress_constraint_1,
		&asn_PER_memb_apMACAddress_constr_2,
		0,
		"apMACAddress"
		},
	{ ATF_POINTER, 12, offsetof(struct WlanAPInformation, apTransmitPower),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_apTransmitPower_constraint_1,
		&asn_PER_memb_apTransmitPower_constr_3,
		0,
		"apTransmitPower"
		},
	{ ATF_POINTER, 11, offsetof(struct WlanAPInformation, apAntennaGain),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_apAntennaGain_constraint_1,
		&asn_PER_memb_apAntennaGain_constr_4,
		0,
		"apAntennaGain"
		},
	{ ATF_POINTER, 10, offsetof(struct WlanAPInformation, apSignaltoNoise),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_apSignaltoNoise_constraint_1,
		&asn_PER_memb_apSignaltoNoise_constr_5,
		0,
		"apSignaltoNoise"
		},
	{ ATF_POINTER, 9, offsetof(struct WlanAPInformation, apDeviceType),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_apDeviceType_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"apDeviceType"
		},
	{ ATF_POINTER, 8, offsetof(struct WlanAPInformation, apSignalStrength),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_apSignalStrength_constraint_1,
		&asn_PER_memb_apSignalStrength_constr_11,
		0,
		"apSignalStrength"
		},
	{ ATF_POINTER, 7, offsetof(struct WlanAPInformation, apChannelFrequency),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_apChannelFrequency_constraint_1,
		&asn_PER_memb_apChannelFrequency_constr_12,
		0,
		"apChannelFrequency"
		},
	{ ATF_POINTER, 6, offsetof(struct WlanAPInformation, apRoundTripDelay),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RTD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"apRoundTripDelay"
		},
	{ ATF_POINTER, 5, offsetof(struct WlanAPInformation, setTransmitPower),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_setTransmitPower_constraint_1,
		&asn_PER_memb_setTransmitPower_constr_14,
		0,
		"setTransmitPower"
		},
	{ ATF_POINTER, 4, offsetof(struct WlanAPInformation, setAntennaGain),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_setAntennaGain_constraint_1,
		&asn_PER_memb_setAntennaGain_constr_15,
		0,
		"setAntennaGain"
		},
	{ ATF_POINTER, 3, offsetof(struct WlanAPInformation, setSignaltoNoise),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_setSignaltoNoise_constraint_1,
		&asn_PER_memb_setSignaltoNoise_constr_16,
		0,
		"setSignaltoNoise"
		},
	{ ATF_POINTER, 2, offsetof(struct WlanAPInformation, setSignalStrength),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_setSignalStrength_constraint_1,
		&asn_PER_memb_setSignalStrength_constr_17,
		0,
		"setSignalStrength"
		},
	{ ATF_POINTER, 1, offsetof(struct WlanAPInformation, apReportedLocation),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportedLocation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"apReportedLocation"
		},
};
static const int asn_MAP_WlanAPInformation_oms_1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
static const ber_tlv_tag_t asn_DEF_WlanAPInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_WlanAPInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* apMACAddress */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* apTransmitPower */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* apAntennaGain */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* apSignaltoNoise */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* apDeviceType */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* apSignalStrength */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* apChannelFrequency */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* apRoundTripDelay */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* setTransmitPower */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* setAntennaGain */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* setSignaltoNoise */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* setSignalStrength */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* apReportedLocation */
};
static asn_SEQUENCE_specifics_t asn_SPC_WlanAPInformation_specs_1 = {
	sizeof(struct WlanAPInformation),
	offsetof(struct WlanAPInformation, _asn_ctx),
	asn_MAP_WlanAPInformation_tag2el_1,
	13,	/* Count of tags in the map */
	asn_MAP_WlanAPInformation_oms_1,	/* Optional members */
	12, 0,	/* Root/Additions */
	12,	/* Start extensions */
	14	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_WlanAPInformation = {
	"WlanAPInformation",
	"WlanAPInformation",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_WlanAPInformation_tags_1,
	sizeof(asn_DEF_WlanAPInformation_tags_1)
		/sizeof(asn_DEF_WlanAPInformation_tags_1[0]), /* 1 */
	asn_DEF_WlanAPInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_WlanAPInformation_tags_1)
		/sizeof(asn_DEF_WlanAPInformation_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_WlanAPInformation_1,
	13,	/* Elements count */
	&asn_SPC_WlanAPInformation_specs_1	/* Additional specs */
};

