/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-NOTIFY-RESPONSE"
 * 	found in "../supl-notify-response.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_NotificationResponse_H_
#define	_NotificationResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NotificationResponse {
	NotificationResponse_allowed	= 0,
	NotificationResponse_notAllowed	= 1
	/*
	 * Enumeration is extensible
	 */
} e_NotificationResponse;

/* NotificationResponse */
typedef long	 NotificationResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NotificationResponse;
asn_struct_free_f NotificationResponse_free;
asn_struct_print_f NotificationResponse_print;
asn_constr_check_f NotificationResponse_constraint;
ber_type_decoder_f NotificationResponse_decode_ber;
der_type_encoder_f NotificationResponse_encode_der;
xer_type_decoder_f NotificationResponse_decode_xer;
xer_type_encoder_f NotificationResponse_encode_xer;
per_type_decoder_f NotificationResponse_decode_uper;
per_type_encoder_f NotificationResponse_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _NotificationResponse_H_ */
#include <asn_internal.h>
