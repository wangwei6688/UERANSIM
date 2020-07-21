/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn/NGAP-IEs.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ngap -pdu=all`
 */

#include "NGAP_CPTransportLayerInformation.h"

#include "NGAP_ProtocolIE-SingleContainer.h"
asn_per_constraints_t asn_PER_type_NGAP_CPTransportLayerInformation_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NGAP_CPTransportLayerInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_CPTransportLayerInformation, choice.endpointIPAddress),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_TransportLayerAddress,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"endpointIPAddress"
		},
	{ ATF_POINTER, 0, offsetof(struct NGAP_CPTransportLayerInformation, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolIE_SingleContainer_128P5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_CPTransportLayerInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* endpointIPAddress */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_NGAP_CPTransportLayerInformation_specs_1 = {
	sizeof(struct NGAP_CPTransportLayerInformation),
	offsetof(struct NGAP_CPTransportLayerInformation, _asn_ctx),
	offsetof(struct NGAP_CPTransportLayerInformation, present),
	sizeof(((struct NGAP_CPTransportLayerInformation *)0)->present),
	asn_MAP_NGAP_CPTransportLayerInformation_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_CPTransportLayerInformation = {
	"CPTransportLayerInformation",
	"CPTransportLayerInformation",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NGAP_CPTransportLayerInformation_constr_1, CHOICE_constraint },
	asn_MBR_NGAP_CPTransportLayerInformation_1,
	2,	/* Elements count */
	&asn_SPC_NGAP_CPTransportLayerInformation_specs_1	/* Additional specs */
};
