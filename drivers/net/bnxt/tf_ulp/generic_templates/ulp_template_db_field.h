/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(c) 2014-2021 Broadcom
 * All rights reserved.
 */

/* date: Wed Mar 17 11:31:19 2021 */

#ifndef ULP_HDR_FIELD_ENUMS_H_
#define ULP_HDR_FIELD_ENUMS_H_

enum bnxt_ulp_glb_hf {
	BNXT_ULP_GLB_HF_ID_WM,
	BNXT_ULP_GLB_HF_ID_SVIF_INDEX,
	BNXT_ULP_GLB_HF_ID_O_ETH_DMAC,
	BNXT_ULP_GLB_HF_ID_I_ETH_DMAC,
	BNXT_ULP_GLB_HF_ID_O_ETH_SMAC,
	BNXT_ULP_GLB_HF_ID_I_ETH_SMAC,
	BNXT_ULP_GLB_HF_ID_O_ETH_TYPE,
	BNXT_ULP_GLB_HF_ID_I_ETH_TYPE,
	BNXT_ULP_GLB_HF_ID_T_GRE_VER,
	BNXT_ULP_GLB_HF_ID_T_GRE_PROTO_TYPE,
	BNXT_ULP_GLB_HF_ID_O_ICMP_TYPE,
	BNXT_ULP_GLB_HF_ID_I_ICMP_TYPE,
	BNXT_ULP_GLB_HF_ID_O_ICMP_CODE,
	BNXT_ULP_GLB_HF_ID_I_ICMP_CODE,
	BNXT_ULP_GLB_HF_ID_O_ICMP_CSUM,
	BNXT_ULP_GLB_HF_ID_I_ICMP_CSUM,
	BNXT_ULP_GLB_HF_ID_O_ICMP_IDENT,
	BNXT_ULP_GLB_HF_ID_I_ICMP_IDENT,
	BNXT_ULP_GLB_HF_ID_O_ICMP_SEQ_NUM,
	BNXT_ULP_GLB_HF_ID_I_ICMP_SEQ_NUM,
	BNXT_ULP_GLB_HF_ID_O_IPV4_VER,
	BNXT_ULP_GLB_HF_ID_I_IPV4_VER,
	BNXT_ULP_GLB_HF_ID_O_IPV4_TOS,
	BNXT_ULP_GLB_HF_ID_I_IPV4_TOS,
	BNXT_ULP_GLB_HF_ID_O_IPV4_LEN,
	BNXT_ULP_GLB_HF_ID_I_IPV4_LEN,
	BNXT_ULP_GLB_HF_ID_O_IPV4_FRAG_ID,
	BNXT_ULP_GLB_HF_ID_I_IPV4_FRAG_ID,
	BNXT_ULP_GLB_HF_ID_O_IPV4_FRAG_OFF,
	BNXT_ULP_GLB_HF_ID_I_IPV4_FRAG_OFF,
	BNXT_ULP_GLB_HF_ID_O_IPV4_TTL,
	BNXT_ULP_GLB_HF_ID_I_IPV4_TTL,
	BNXT_ULP_GLB_HF_ID_O_IPV4_PROTO_ID,
	BNXT_ULP_GLB_HF_ID_I_IPV4_PROTO_ID,
	BNXT_ULP_GLB_HF_ID_O_IPV4_CSUM,
	BNXT_ULP_GLB_HF_ID_I_IPV4_CSUM,
	BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR,
	BNXT_ULP_GLB_HF_ID_I_IPV4_SRC_ADDR,
	BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR,
	BNXT_ULP_GLB_HF_ID_I_IPV4_DST_ADDR,
	BNXT_ULP_GLB_HF_ID_O_IPV6_VER,
	BNXT_ULP_GLB_HF_ID_I_IPV6_VER,
	BNXT_ULP_GLB_HF_ID_O_IPV6_TC,
	BNXT_ULP_GLB_HF_ID_I_IPV6_TC,
	BNXT_ULP_GLB_HF_ID_O_IPV6_FLOW_LABEL,
	BNXT_ULP_GLB_HF_ID_I_IPV6_FLOW_LABEL,
	BNXT_ULP_GLB_HF_ID_O_IPV6_PAYLOAD_LEN,
	BNXT_ULP_GLB_HF_ID_I_IPV6_PAYLOAD_LEN,
	BNXT_ULP_GLB_HF_ID_O_IPV6_PROTO_ID,
	BNXT_ULP_GLB_HF_ID_I_IPV6_PROTO_ID,
	BNXT_ULP_GLB_HF_ID_O_IPV6_TTL,
	BNXT_ULP_GLB_HF_ID_I_IPV6_TTL,
	BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR,
	BNXT_ULP_GLB_HF_ID_I_IPV6_SRC_ADDR,
	BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR,
	BNXT_ULP_GLB_HF_ID_I_IPV6_DST_ADDR,
	BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT,
	BNXT_ULP_GLB_HF_ID_I_TCP_SRC_PORT,
	BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT,
	BNXT_ULP_GLB_HF_ID_I_TCP_DST_PORT,
	BNXT_ULP_GLB_HF_ID_O_TCP_SENT_SEQ,
	BNXT_ULP_GLB_HF_ID_I_TCP_SENT_SEQ,
	BNXT_ULP_GLB_HF_ID_O_TCP_RECV_ACK,
	BNXT_ULP_GLB_HF_ID_I_TCP_RECV_ACK,
	BNXT_ULP_GLB_HF_ID_O_TCP_DATA_OFF,
	BNXT_ULP_GLB_HF_ID_I_TCP_DATA_OFF,
	BNXT_ULP_GLB_HF_ID_O_TCP_TCP_FLAGS,
	BNXT_ULP_GLB_HF_ID_I_TCP_TCP_FLAGS,
	BNXT_ULP_GLB_HF_ID_O_TCP_RX_WIN,
	BNXT_ULP_GLB_HF_ID_I_TCP_RX_WIN,
	BNXT_ULP_GLB_HF_ID_O_TCP_CSUM,
	BNXT_ULP_GLB_HF_ID_I_TCP_CSUM,
	BNXT_ULP_GLB_HF_ID_O_TCP_URP,
	BNXT_ULP_GLB_HF_ID_I_TCP_URP,
	BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT,
	BNXT_ULP_GLB_HF_ID_I_UDP_SRC_PORT,
	BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT,
	BNXT_ULP_GLB_HF_ID_I_UDP_DST_PORT,
	BNXT_ULP_GLB_HF_ID_O_UDP_LENGTH,
	BNXT_ULP_GLB_HF_ID_I_UDP_LENGTH,
	BNXT_ULP_GLB_HF_ID_O_UDP_CSUM,
	BNXT_ULP_GLB_HF_ID_I_UDP_CSUM,
	BNXT_ULP_GLB_HF_ID_OO_VLAN_CFI_PRI,
	BNXT_ULP_GLB_HF_ID_OI_VLAN_CFI_PRI,
	BNXT_ULP_GLB_HF_ID_IO_VLAN_CFI_PRI,
	BNXT_ULP_GLB_HF_ID_II_VLAN_CFI_PRI,
	BNXT_ULP_GLB_HF_ID_OO_VLAN_VID,
	BNXT_ULP_GLB_HF_ID_OI_VLAN_VID,
	BNXT_ULP_GLB_HF_ID_IO_VLAN_VID,
	BNXT_ULP_GLB_HF_ID_II_VLAN_VID,
	BNXT_ULP_GLB_HF_ID_OO_VLAN_TYPE,
	BNXT_ULP_GLB_HF_ID_OI_VLAN_TYPE,
	BNXT_ULP_GLB_HF_ID_IO_VLAN_TYPE,
	BNXT_ULP_GLB_HF_ID_II_VLAN_TYPE,
	BNXT_ULP_GLB_HF_ID_T_VXLAN_FLAGS,
	BNXT_ULP_GLB_HF_ID_T_VXLAN_RSVD0,
	BNXT_ULP_GLB_HF_ID_T_VXLAN_VNI,
	BNXT_ULP_GLB_HF_ID_T_VXLAN_RSVD1
};

enum bnxt_ulp_hf_0_1_0_bitmask {
	BNXT_ULP_HF_0_1_0_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_1_0_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_1_0_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_1_0_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_1_0_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_1_0_BITMASK_O_IPV6_VER          = 0x0400000000000000,
	BNXT_ULP_HF_0_1_0_BITMASK_O_IPV6_TC           = 0x0200000000000000,
	BNXT_ULP_HF_0_1_0_BITMASK_O_IPV6_FLOW_LABEL   = 0x0100000000000000,
	BNXT_ULP_HF_0_1_0_BITMASK_O_IPV6_PAYLOAD_LEN  = 0x0080000000000000,
	BNXT_ULP_HF_0_1_0_BITMASK_O_IPV6_PROTO_ID     = 0x0040000000000000,
	BNXT_ULP_HF_0_1_0_BITMASK_O_IPV6_TTL          = 0x0020000000000000,
	BNXT_ULP_HF_0_1_0_BITMASK_O_IPV6_SRC_ADDR     = 0x0010000000000000,
	BNXT_ULP_HF_0_1_0_BITMASK_O_IPV6_DST_ADDR     = 0x0008000000000000
};

enum bnxt_ulp_hf_0_1_1_bitmask {
	BNXT_ULP_HF_0_1_1_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_1_1_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_1_1_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_1_1_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_1_1_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_1_1_BITMASK_O_IPV4_VER          = 0x0400000000000000,
	BNXT_ULP_HF_0_1_1_BITMASK_O_IPV4_TOS          = 0x0200000000000000,
	BNXT_ULP_HF_0_1_1_BITMASK_O_IPV4_LEN          = 0x0100000000000000,
	BNXT_ULP_HF_0_1_1_BITMASK_O_IPV4_FRAG_ID      = 0x0080000000000000,
	BNXT_ULP_HF_0_1_1_BITMASK_O_IPV4_FRAG_OFF     = 0x0040000000000000,
	BNXT_ULP_HF_0_1_1_BITMASK_O_IPV4_TTL          = 0x0020000000000000,
	BNXT_ULP_HF_0_1_1_BITMASK_O_IPV4_PROTO_ID     = 0x0010000000000000,
	BNXT_ULP_HF_0_1_1_BITMASK_O_IPV4_CSUM         = 0x0008000000000000,
	BNXT_ULP_HF_0_1_1_BITMASK_O_IPV4_SRC_ADDR     = 0x0004000000000000,
	BNXT_ULP_HF_0_1_1_BITMASK_O_IPV4_DST_ADDR     = 0x0002000000000000
};

enum bnxt_ulp_hf_0_1_2_bitmask {
	BNXT_ULP_HF_0_1_2_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_1_2_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_1_2_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_1_2_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_1_2_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_1_2_BITMASK_OO_VLAN_CFI_PRI     = 0x0400000000000000,
	BNXT_ULP_HF_0_1_2_BITMASK_OO_VLAN_VID         = 0x0200000000000000,
	BNXT_ULP_HF_0_1_2_BITMASK_OO_VLAN_TYPE        = 0x0100000000000000,
	BNXT_ULP_HF_0_1_2_BITMASK_O_IPV6_VER          = 0x0080000000000000,
	BNXT_ULP_HF_0_1_2_BITMASK_O_IPV6_TC           = 0x0040000000000000,
	BNXT_ULP_HF_0_1_2_BITMASK_O_IPV6_FLOW_LABEL   = 0x0020000000000000,
	BNXT_ULP_HF_0_1_2_BITMASK_O_IPV6_PAYLOAD_LEN  = 0x0010000000000000,
	BNXT_ULP_HF_0_1_2_BITMASK_O_IPV6_PROTO_ID     = 0x0008000000000000,
	BNXT_ULP_HF_0_1_2_BITMASK_O_IPV6_TTL          = 0x0004000000000000,
	BNXT_ULP_HF_0_1_2_BITMASK_O_IPV6_SRC_ADDR     = 0x0002000000000000,
	BNXT_ULP_HF_0_1_2_BITMASK_O_IPV6_DST_ADDR     = 0x0001000000000000
};

enum bnxt_ulp_hf_0_1_3_bitmask {
	BNXT_ULP_HF_0_1_3_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_1_3_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_1_3_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_1_3_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_1_3_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_1_3_BITMASK_OO_VLAN_CFI_PRI     = 0x0400000000000000,
	BNXT_ULP_HF_0_1_3_BITMASK_OO_VLAN_VID         = 0x0200000000000000,
	BNXT_ULP_HF_0_1_3_BITMASK_OO_VLAN_TYPE        = 0x0100000000000000,
	BNXT_ULP_HF_0_1_3_BITMASK_O_IPV4_VER          = 0x0080000000000000,
	BNXT_ULP_HF_0_1_3_BITMASK_O_IPV4_TOS          = 0x0040000000000000,
	BNXT_ULP_HF_0_1_3_BITMASK_O_IPV4_LEN          = 0x0020000000000000,
	BNXT_ULP_HF_0_1_3_BITMASK_O_IPV4_FRAG_ID      = 0x0010000000000000,
	BNXT_ULP_HF_0_1_3_BITMASK_O_IPV4_FRAG_OFF     = 0x0008000000000000,
	BNXT_ULP_HF_0_1_3_BITMASK_O_IPV4_TTL          = 0x0004000000000000,
	BNXT_ULP_HF_0_1_3_BITMASK_O_IPV4_PROTO_ID     = 0x0002000000000000,
	BNXT_ULP_HF_0_1_3_BITMASK_O_IPV4_CSUM         = 0x0001000000000000,
	BNXT_ULP_HF_0_1_3_BITMASK_O_IPV4_SRC_ADDR     = 0x0000800000000000,
	BNXT_ULP_HF_0_1_3_BITMASK_O_IPV4_DST_ADDR     = 0x0000400000000000
};

enum bnxt_ulp_hf_0_1_4_bitmask {
	BNXT_ULP_HF_0_1_4_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_IPV6_VER          = 0x0400000000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_IPV6_TC           = 0x0200000000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_IPV6_FLOW_LABEL   = 0x0100000000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_IPV6_PAYLOAD_LEN  = 0x0080000000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_IPV6_PROTO_ID     = 0x0040000000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_IPV6_TTL          = 0x0020000000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_IPV6_SRC_ADDR     = 0x0010000000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_IPV6_DST_ADDR     = 0x0008000000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_TCP_SRC_PORT      = 0x0004000000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_TCP_DST_PORT      = 0x0002000000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_TCP_SENT_SEQ      = 0x0001000000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_TCP_RECV_ACK      = 0x0000800000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_TCP_DATA_OFF      = 0x0000400000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_TCP_TCP_FLAGS     = 0x0000200000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_TCP_RX_WIN        = 0x0000100000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_TCP_CSUM          = 0x0000080000000000,
	BNXT_ULP_HF_0_1_4_BITMASK_O_TCP_URP           = 0x0000040000000000
};

enum bnxt_ulp_hf_0_1_5_bitmask {
	BNXT_ULP_HF_0_1_5_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_IPV4_VER          = 0x0400000000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_IPV4_TOS          = 0x0200000000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_IPV4_LEN          = 0x0100000000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_IPV4_FRAG_ID      = 0x0080000000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_IPV4_FRAG_OFF     = 0x0040000000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_IPV4_TTL          = 0x0020000000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_IPV4_PROTO_ID     = 0x0010000000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_IPV4_CSUM         = 0x0008000000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_IPV4_SRC_ADDR     = 0x0004000000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_IPV4_DST_ADDR     = 0x0002000000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_TCP_SRC_PORT      = 0x0001000000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_TCP_DST_PORT      = 0x0000800000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_TCP_SENT_SEQ      = 0x0000400000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_TCP_RECV_ACK      = 0x0000200000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_TCP_DATA_OFF      = 0x0000100000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_TCP_TCP_FLAGS     = 0x0000080000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_TCP_RX_WIN        = 0x0000040000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_TCP_CSUM          = 0x0000020000000000,
	BNXT_ULP_HF_0_1_5_BITMASK_O_TCP_URP           = 0x0000010000000000
};

enum bnxt_ulp_hf_0_1_6_bitmask {
	BNXT_ULP_HF_0_1_6_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_1_6_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_1_6_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_1_6_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_1_6_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_1_6_BITMASK_O_IPV6_VER          = 0x0400000000000000,
	BNXT_ULP_HF_0_1_6_BITMASK_O_IPV6_TC           = 0x0200000000000000,
	BNXT_ULP_HF_0_1_6_BITMASK_O_IPV6_FLOW_LABEL   = 0x0100000000000000,
	BNXT_ULP_HF_0_1_6_BITMASK_O_IPV6_PAYLOAD_LEN  = 0x0080000000000000,
	BNXT_ULP_HF_0_1_6_BITMASK_O_IPV6_PROTO_ID     = 0x0040000000000000,
	BNXT_ULP_HF_0_1_6_BITMASK_O_IPV6_TTL          = 0x0020000000000000,
	BNXT_ULP_HF_0_1_6_BITMASK_O_IPV6_SRC_ADDR     = 0x0010000000000000,
	BNXT_ULP_HF_0_1_6_BITMASK_O_IPV6_DST_ADDR     = 0x0008000000000000,
	BNXT_ULP_HF_0_1_6_BITMASK_O_UDP_SRC_PORT      = 0x0004000000000000,
	BNXT_ULP_HF_0_1_6_BITMASK_O_UDP_DST_PORT      = 0x0002000000000000,
	BNXT_ULP_HF_0_1_6_BITMASK_O_UDP_LENGTH        = 0x0001000000000000,
	BNXT_ULP_HF_0_1_6_BITMASK_O_UDP_CSUM          = 0x0000800000000000
};

enum bnxt_ulp_hf_0_1_7_bitmask {
	BNXT_ULP_HF_0_1_7_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_1_7_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_1_7_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_1_7_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_1_7_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_1_7_BITMASK_O_IPV4_VER          = 0x0400000000000000,
	BNXT_ULP_HF_0_1_7_BITMASK_O_IPV4_TOS          = 0x0200000000000000,
	BNXT_ULP_HF_0_1_7_BITMASK_O_IPV4_LEN          = 0x0100000000000000,
	BNXT_ULP_HF_0_1_7_BITMASK_O_IPV4_FRAG_ID      = 0x0080000000000000,
	BNXT_ULP_HF_0_1_7_BITMASK_O_IPV4_FRAG_OFF     = 0x0040000000000000,
	BNXT_ULP_HF_0_1_7_BITMASK_O_IPV4_TTL          = 0x0020000000000000,
	BNXT_ULP_HF_0_1_7_BITMASK_O_IPV4_PROTO_ID     = 0x0010000000000000,
	BNXT_ULP_HF_0_1_7_BITMASK_O_IPV4_CSUM         = 0x0008000000000000,
	BNXT_ULP_HF_0_1_7_BITMASK_O_IPV4_SRC_ADDR     = 0x0004000000000000,
	BNXT_ULP_HF_0_1_7_BITMASK_O_IPV4_DST_ADDR     = 0x0002000000000000,
	BNXT_ULP_HF_0_1_7_BITMASK_O_UDP_SRC_PORT      = 0x0001000000000000,
	BNXT_ULP_HF_0_1_7_BITMASK_O_UDP_DST_PORT      = 0x0000800000000000,
	BNXT_ULP_HF_0_1_7_BITMASK_O_UDP_LENGTH        = 0x0000400000000000,
	BNXT_ULP_HF_0_1_7_BITMASK_O_UDP_CSUM          = 0x0000200000000000
};

enum bnxt_ulp_hf_0_1_8_bitmask {
	BNXT_ULP_HF_0_1_8_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_OO_VLAN_CFI_PRI     = 0x0400000000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_OO_VLAN_VID         = 0x0200000000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_OO_VLAN_TYPE        = 0x0100000000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_IPV6_VER          = 0x0080000000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_IPV6_TC           = 0x0040000000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_IPV6_FLOW_LABEL   = 0x0020000000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_IPV6_PAYLOAD_LEN  = 0x0010000000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_IPV6_PROTO_ID     = 0x0008000000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_IPV6_TTL          = 0x0004000000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_IPV6_SRC_ADDR     = 0x0002000000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_IPV6_DST_ADDR     = 0x0001000000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_TCP_SRC_PORT      = 0x0000800000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_TCP_DST_PORT      = 0x0000400000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_TCP_SENT_SEQ      = 0x0000200000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_TCP_RECV_ACK      = 0x0000100000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_TCP_DATA_OFF      = 0x0000080000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_TCP_TCP_FLAGS     = 0x0000040000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_TCP_RX_WIN        = 0x0000020000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_TCP_CSUM          = 0x0000010000000000,
	BNXT_ULP_HF_0_1_8_BITMASK_O_TCP_URP           = 0x0000008000000000
};

enum bnxt_ulp_hf_0_1_9_bitmask {
	BNXT_ULP_HF_0_1_9_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_OO_VLAN_CFI_PRI     = 0x0400000000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_OO_VLAN_VID         = 0x0200000000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_OO_VLAN_TYPE        = 0x0100000000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_IPV4_VER          = 0x0080000000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_IPV4_TOS          = 0x0040000000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_IPV4_LEN          = 0x0020000000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_IPV4_FRAG_ID      = 0x0010000000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_IPV4_FRAG_OFF     = 0x0008000000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_IPV4_TTL          = 0x0004000000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_IPV4_PROTO_ID     = 0x0002000000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_IPV4_CSUM         = 0x0001000000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_IPV4_SRC_ADDR     = 0x0000800000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_IPV4_DST_ADDR     = 0x0000400000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_TCP_SRC_PORT      = 0x0000200000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_TCP_DST_PORT      = 0x0000100000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_TCP_SENT_SEQ      = 0x0000080000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_TCP_RECV_ACK      = 0x0000040000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_TCP_DATA_OFF      = 0x0000020000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_TCP_TCP_FLAGS     = 0x0000010000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_TCP_RX_WIN        = 0x0000008000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_TCP_CSUM          = 0x0000004000000000,
	BNXT_ULP_HF_0_1_9_BITMASK_O_TCP_URP           = 0x0000002000000000
};

enum bnxt_ulp_hf_0_1_10_bitmask {
	BNXT_ULP_HF_0_1_10_BITMASK_WM                 = 0x8000000000000000,
	BNXT_ULP_HF_0_1_10_BITMASK_SVIF_INDEX         = 0x4000000000000000,
	BNXT_ULP_HF_0_1_10_BITMASK_O_ETH_DMAC         = 0x2000000000000000,
	BNXT_ULP_HF_0_1_10_BITMASK_O_ETH_SMAC         = 0x1000000000000000,
	BNXT_ULP_HF_0_1_10_BITMASK_O_ETH_TYPE         = 0x0800000000000000,
	BNXT_ULP_HF_0_1_10_BITMASK_OO_VLAN_CFI_PRI    = 0x0400000000000000,
	BNXT_ULP_HF_0_1_10_BITMASK_OO_VLAN_VID        = 0x0200000000000000,
	BNXT_ULP_HF_0_1_10_BITMASK_OO_VLAN_TYPE       = 0x0100000000000000,
	BNXT_ULP_HF_0_1_10_BITMASK_O_IPV6_VER         = 0x0080000000000000,
	BNXT_ULP_HF_0_1_10_BITMASK_O_IPV6_TC          = 0x0040000000000000,
	BNXT_ULP_HF_0_1_10_BITMASK_O_IPV6_FLOW_LABEL  = 0x0020000000000000,
	BNXT_ULP_HF_0_1_10_BITMASK_O_IPV6_PAYLOAD_LEN = 0x0010000000000000,
	BNXT_ULP_HF_0_1_10_BITMASK_O_IPV6_PROTO_ID    = 0x0008000000000000,
	BNXT_ULP_HF_0_1_10_BITMASK_O_IPV6_TTL         = 0x0004000000000000,
	BNXT_ULP_HF_0_1_10_BITMASK_O_IPV6_SRC_ADDR    = 0x0002000000000000,
	BNXT_ULP_HF_0_1_10_BITMASK_O_IPV6_DST_ADDR    = 0x0001000000000000,
	BNXT_ULP_HF_0_1_10_BITMASK_O_UDP_SRC_PORT     = 0x0000800000000000,
	BNXT_ULP_HF_0_1_10_BITMASK_O_UDP_DST_PORT     = 0x0000400000000000,
	BNXT_ULP_HF_0_1_10_BITMASK_O_UDP_LENGTH       = 0x0000200000000000,
	BNXT_ULP_HF_0_1_10_BITMASK_O_UDP_CSUM         = 0x0000100000000000
};

enum bnxt_ulp_hf_0_1_11_bitmask {
	BNXT_ULP_HF_0_1_11_BITMASK_WM                 = 0x8000000000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_SVIF_INDEX         = 0x4000000000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_O_ETH_DMAC         = 0x2000000000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_O_ETH_SMAC         = 0x1000000000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_O_ETH_TYPE         = 0x0800000000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_OO_VLAN_CFI_PRI    = 0x0400000000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_OO_VLAN_VID        = 0x0200000000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_OO_VLAN_TYPE       = 0x0100000000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_O_IPV4_VER         = 0x0080000000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_O_IPV4_TOS         = 0x0040000000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_O_IPV4_LEN         = 0x0020000000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_O_IPV4_FRAG_ID     = 0x0010000000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_O_IPV4_FRAG_OFF    = 0x0008000000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_O_IPV4_TTL         = 0x0004000000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_O_IPV4_PROTO_ID    = 0x0002000000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_O_IPV4_CSUM        = 0x0001000000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_O_IPV4_SRC_ADDR    = 0x0000800000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_O_IPV4_DST_ADDR    = 0x0000400000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_O_UDP_SRC_PORT     = 0x0000200000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_O_UDP_DST_PORT     = 0x0000100000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_O_UDP_LENGTH       = 0x0000080000000000,
	BNXT_ULP_HF_0_1_11_BITMASK_O_UDP_CSUM         = 0x0000040000000000
};

enum bnxt_ulp_hf_0_1_12_bitmask {
	BNXT_ULP_HF_0_1_12_BITMASK_WM                 = 0x8000000000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_SVIF_INDEX         = 0x4000000000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_O_ETH_DMAC         = 0x2000000000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_O_ETH_SMAC         = 0x1000000000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_O_ETH_TYPE         = 0x0800000000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_O_IPV4_VER         = 0x0400000000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_O_IPV4_TOS         = 0x0200000000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_O_IPV4_LEN         = 0x0100000000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_O_IPV4_FRAG_ID     = 0x0080000000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_O_IPV4_FRAG_OFF    = 0x0040000000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_O_IPV4_TTL         = 0x0020000000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_O_IPV4_PROTO_ID    = 0x0010000000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_O_IPV4_CSUM        = 0x0008000000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_O_IPV4_SRC_ADDR    = 0x0004000000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_O_IPV4_DST_ADDR    = 0x0002000000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_O_UDP_SRC_PORT     = 0x0001000000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_O_UDP_DST_PORT     = 0x0000800000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_O_UDP_LENGTH       = 0x0000400000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_O_UDP_CSUM         = 0x0000200000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_T_VXLAN_FLAGS      = 0x0000100000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_T_VXLAN_RSVD0      = 0x0000080000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_T_VXLAN_VNI        = 0x0000040000000000,
	BNXT_ULP_HF_0_1_12_BITMASK_T_VXLAN_RSVD1      = 0x0000020000000000
};

enum bnxt_ulp_hf_0_2_0_bitmask {
	BNXT_ULP_HF_0_2_0_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_2_0_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_2_0_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_2_0_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_2_0_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_2_0_BITMASK_O_IPV6_VER          = 0x0400000000000000,
	BNXT_ULP_HF_0_2_0_BITMASK_O_IPV6_TC           = 0x0200000000000000,
	BNXT_ULP_HF_0_2_0_BITMASK_O_IPV6_FLOW_LABEL   = 0x0100000000000000,
	BNXT_ULP_HF_0_2_0_BITMASK_O_IPV6_PAYLOAD_LEN  = 0x0080000000000000,
	BNXT_ULP_HF_0_2_0_BITMASK_O_IPV6_PROTO_ID     = 0x0040000000000000,
	BNXT_ULP_HF_0_2_0_BITMASK_O_IPV6_TTL          = 0x0020000000000000,
	BNXT_ULP_HF_0_2_0_BITMASK_O_IPV6_SRC_ADDR     = 0x0010000000000000,
	BNXT_ULP_HF_0_2_0_BITMASK_O_IPV6_DST_ADDR     = 0x0008000000000000
};

enum bnxt_ulp_hf_0_2_1_bitmask {
	BNXT_ULP_HF_0_2_1_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_2_1_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_2_1_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_2_1_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_2_1_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_2_1_BITMASK_O_IPV4_VER          = 0x0400000000000000,
	BNXT_ULP_HF_0_2_1_BITMASK_O_IPV4_TOS          = 0x0200000000000000,
	BNXT_ULP_HF_0_2_1_BITMASK_O_IPV4_LEN          = 0x0100000000000000,
	BNXT_ULP_HF_0_2_1_BITMASK_O_IPV4_FRAG_ID      = 0x0080000000000000,
	BNXT_ULP_HF_0_2_1_BITMASK_O_IPV4_FRAG_OFF     = 0x0040000000000000,
	BNXT_ULP_HF_0_2_1_BITMASK_O_IPV4_TTL          = 0x0020000000000000,
	BNXT_ULP_HF_0_2_1_BITMASK_O_IPV4_PROTO_ID     = 0x0010000000000000,
	BNXT_ULP_HF_0_2_1_BITMASK_O_IPV4_CSUM         = 0x0008000000000000,
	BNXT_ULP_HF_0_2_1_BITMASK_O_IPV4_SRC_ADDR     = 0x0004000000000000,
	BNXT_ULP_HF_0_2_1_BITMASK_O_IPV4_DST_ADDR     = 0x0002000000000000
};

enum bnxt_ulp_hf_0_2_2_bitmask {
	BNXT_ULP_HF_0_2_2_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_2_2_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_2_2_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_2_2_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_2_2_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_2_2_BITMASK_OO_VLAN_CFI_PRI     = 0x0400000000000000,
	BNXT_ULP_HF_0_2_2_BITMASK_OO_VLAN_VID         = 0x0200000000000000,
	BNXT_ULP_HF_0_2_2_BITMASK_OO_VLAN_TYPE        = 0x0100000000000000,
	BNXT_ULP_HF_0_2_2_BITMASK_O_IPV6_VER          = 0x0080000000000000,
	BNXT_ULP_HF_0_2_2_BITMASK_O_IPV6_TC           = 0x0040000000000000,
	BNXT_ULP_HF_0_2_2_BITMASK_O_IPV6_FLOW_LABEL   = 0x0020000000000000,
	BNXT_ULP_HF_0_2_2_BITMASK_O_IPV6_PAYLOAD_LEN  = 0x0010000000000000,
	BNXT_ULP_HF_0_2_2_BITMASK_O_IPV6_PROTO_ID     = 0x0008000000000000,
	BNXT_ULP_HF_0_2_2_BITMASK_O_IPV6_TTL          = 0x0004000000000000,
	BNXT_ULP_HF_0_2_2_BITMASK_O_IPV6_SRC_ADDR     = 0x0002000000000000,
	BNXT_ULP_HF_0_2_2_BITMASK_O_IPV6_DST_ADDR     = 0x0001000000000000
};

enum bnxt_ulp_hf_0_2_3_bitmask {
	BNXT_ULP_HF_0_2_3_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_2_3_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_2_3_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_2_3_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_2_3_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_2_3_BITMASK_OO_VLAN_CFI_PRI     = 0x0400000000000000,
	BNXT_ULP_HF_0_2_3_BITMASK_OO_VLAN_VID         = 0x0200000000000000,
	BNXT_ULP_HF_0_2_3_BITMASK_OO_VLAN_TYPE        = 0x0100000000000000,
	BNXT_ULP_HF_0_2_3_BITMASK_O_IPV4_VER          = 0x0080000000000000,
	BNXT_ULP_HF_0_2_3_BITMASK_O_IPV4_TOS          = 0x0040000000000000,
	BNXT_ULP_HF_0_2_3_BITMASK_O_IPV4_LEN          = 0x0020000000000000,
	BNXT_ULP_HF_0_2_3_BITMASK_O_IPV4_FRAG_ID      = 0x0010000000000000,
	BNXT_ULP_HF_0_2_3_BITMASK_O_IPV4_FRAG_OFF     = 0x0008000000000000,
	BNXT_ULP_HF_0_2_3_BITMASK_O_IPV4_TTL          = 0x0004000000000000,
	BNXT_ULP_HF_0_2_3_BITMASK_O_IPV4_PROTO_ID     = 0x0002000000000000,
	BNXT_ULP_HF_0_2_3_BITMASK_O_IPV4_CSUM         = 0x0001000000000000,
	BNXT_ULP_HF_0_2_3_BITMASK_O_IPV4_SRC_ADDR     = 0x0000800000000000,
	BNXT_ULP_HF_0_2_3_BITMASK_O_IPV4_DST_ADDR     = 0x0000400000000000
};

enum bnxt_ulp_hf_0_2_4_bitmask {
	BNXT_ULP_HF_0_2_4_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_IPV6_VER          = 0x0400000000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_IPV6_TC           = 0x0200000000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_IPV6_FLOW_LABEL   = 0x0100000000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_IPV6_PAYLOAD_LEN  = 0x0080000000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_IPV6_PROTO_ID     = 0x0040000000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_IPV6_TTL          = 0x0020000000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_IPV6_SRC_ADDR     = 0x0010000000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_IPV6_DST_ADDR     = 0x0008000000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_TCP_SRC_PORT      = 0x0004000000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_TCP_DST_PORT      = 0x0002000000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_TCP_SENT_SEQ      = 0x0001000000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_TCP_RECV_ACK      = 0x0000800000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_TCP_DATA_OFF      = 0x0000400000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_TCP_TCP_FLAGS     = 0x0000200000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_TCP_RX_WIN        = 0x0000100000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_TCP_CSUM          = 0x0000080000000000,
	BNXT_ULP_HF_0_2_4_BITMASK_O_TCP_URP           = 0x0000040000000000
};

enum bnxt_ulp_hf_0_2_5_bitmask {
	BNXT_ULP_HF_0_2_5_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_IPV4_VER          = 0x0400000000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_IPV4_TOS          = 0x0200000000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_IPV4_LEN          = 0x0100000000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_IPV4_FRAG_ID      = 0x0080000000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_IPV4_FRAG_OFF     = 0x0040000000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_IPV4_TTL          = 0x0020000000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_IPV4_PROTO_ID     = 0x0010000000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_IPV4_CSUM         = 0x0008000000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_IPV4_SRC_ADDR     = 0x0004000000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_IPV4_DST_ADDR     = 0x0002000000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_TCP_SRC_PORT      = 0x0001000000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_TCP_DST_PORT      = 0x0000800000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_TCP_SENT_SEQ      = 0x0000400000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_TCP_RECV_ACK      = 0x0000200000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_TCP_DATA_OFF      = 0x0000100000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_TCP_TCP_FLAGS     = 0x0000080000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_TCP_RX_WIN        = 0x0000040000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_TCP_CSUM          = 0x0000020000000000,
	BNXT_ULP_HF_0_2_5_BITMASK_O_TCP_URP           = 0x0000010000000000
};

enum bnxt_ulp_hf_0_2_6_bitmask {
	BNXT_ULP_HF_0_2_6_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_2_6_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_2_6_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_2_6_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_2_6_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_2_6_BITMASK_O_IPV6_VER          = 0x0400000000000000,
	BNXT_ULP_HF_0_2_6_BITMASK_O_IPV6_TC           = 0x0200000000000000,
	BNXT_ULP_HF_0_2_6_BITMASK_O_IPV6_FLOW_LABEL   = 0x0100000000000000,
	BNXT_ULP_HF_0_2_6_BITMASK_O_IPV6_PAYLOAD_LEN  = 0x0080000000000000,
	BNXT_ULP_HF_0_2_6_BITMASK_O_IPV6_PROTO_ID     = 0x0040000000000000,
	BNXT_ULP_HF_0_2_6_BITMASK_O_IPV6_TTL          = 0x0020000000000000,
	BNXT_ULP_HF_0_2_6_BITMASK_O_IPV6_SRC_ADDR     = 0x0010000000000000,
	BNXT_ULP_HF_0_2_6_BITMASK_O_IPV6_DST_ADDR     = 0x0008000000000000,
	BNXT_ULP_HF_0_2_6_BITMASK_O_UDP_SRC_PORT      = 0x0004000000000000,
	BNXT_ULP_HF_0_2_6_BITMASK_O_UDP_DST_PORT      = 0x0002000000000000,
	BNXT_ULP_HF_0_2_6_BITMASK_O_UDP_LENGTH        = 0x0001000000000000,
	BNXT_ULP_HF_0_2_6_BITMASK_O_UDP_CSUM          = 0x0000800000000000
};

enum bnxt_ulp_hf_0_2_7_bitmask {
	BNXT_ULP_HF_0_2_7_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_2_7_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_2_7_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_2_7_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_2_7_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_2_7_BITMASK_O_IPV4_VER          = 0x0400000000000000,
	BNXT_ULP_HF_0_2_7_BITMASK_O_IPV4_TOS          = 0x0200000000000000,
	BNXT_ULP_HF_0_2_7_BITMASK_O_IPV4_LEN          = 0x0100000000000000,
	BNXT_ULP_HF_0_2_7_BITMASK_O_IPV4_FRAG_ID      = 0x0080000000000000,
	BNXT_ULP_HF_0_2_7_BITMASK_O_IPV4_FRAG_OFF     = 0x0040000000000000,
	BNXT_ULP_HF_0_2_7_BITMASK_O_IPV4_TTL          = 0x0020000000000000,
	BNXT_ULP_HF_0_2_7_BITMASK_O_IPV4_PROTO_ID     = 0x0010000000000000,
	BNXT_ULP_HF_0_2_7_BITMASK_O_IPV4_CSUM         = 0x0008000000000000,
	BNXT_ULP_HF_0_2_7_BITMASK_O_IPV4_SRC_ADDR     = 0x0004000000000000,
	BNXT_ULP_HF_0_2_7_BITMASK_O_IPV4_DST_ADDR     = 0x0002000000000000,
	BNXT_ULP_HF_0_2_7_BITMASK_O_UDP_SRC_PORT      = 0x0001000000000000,
	BNXT_ULP_HF_0_2_7_BITMASK_O_UDP_DST_PORT      = 0x0000800000000000,
	BNXT_ULP_HF_0_2_7_BITMASK_O_UDP_LENGTH        = 0x0000400000000000,
	BNXT_ULP_HF_0_2_7_BITMASK_O_UDP_CSUM          = 0x0000200000000000
};

enum bnxt_ulp_hf_0_2_8_bitmask {
	BNXT_ULP_HF_0_2_8_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_OO_VLAN_CFI_PRI     = 0x0400000000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_OO_VLAN_VID         = 0x0200000000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_OO_VLAN_TYPE        = 0x0100000000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_IPV6_VER          = 0x0080000000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_IPV6_TC           = 0x0040000000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_IPV6_FLOW_LABEL   = 0x0020000000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_IPV6_PAYLOAD_LEN  = 0x0010000000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_IPV6_PROTO_ID     = 0x0008000000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_IPV6_TTL          = 0x0004000000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_IPV6_SRC_ADDR     = 0x0002000000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_IPV6_DST_ADDR     = 0x0001000000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_TCP_SRC_PORT      = 0x0000800000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_TCP_DST_PORT      = 0x0000400000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_TCP_SENT_SEQ      = 0x0000200000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_TCP_RECV_ACK      = 0x0000100000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_TCP_DATA_OFF      = 0x0000080000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_TCP_TCP_FLAGS     = 0x0000040000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_TCP_RX_WIN        = 0x0000020000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_TCP_CSUM          = 0x0000010000000000,
	BNXT_ULP_HF_0_2_8_BITMASK_O_TCP_URP           = 0x0000008000000000
};

enum bnxt_ulp_hf_0_2_9_bitmask {
	BNXT_ULP_HF_0_2_9_BITMASK_WM                  = 0x8000000000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_SVIF_INDEX          = 0x4000000000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_ETH_DMAC          = 0x2000000000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_ETH_SMAC          = 0x1000000000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_ETH_TYPE          = 0x0800000000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_OO_VLAN_CFI_PRI     = 0x0400000000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_OO_VLAN_VID         = 0x0200000000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_OO_VLAN_TYPE        = 0x0100000000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_IPV4_VER          = 0x0080000000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_IPV4_TOS          = 0x0040000000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_IPV4_LEN          = 0x0020000000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_IPV4_FRAG_ID      = 0x0010000000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_IPV4_FRAG_OFF     = 0x0008000000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_IPV4_TTL          = 0x0004000000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_IPV4_PROTO_ID     = 0x0002000000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_IPV4_CSUM         = 0x0001000000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_IPV4_SRC_ADDR     = 0x0000800000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_IPV4_DST_ADDR     = 0x0000400000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_TCP_SRC_PORT      = 0x0000200000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_TCP_DST_PORT      = 0x0000100000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_TCP_SENT_SEQ      = 0x0000080000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_TCP_RECV_ACK      = 0x0000040000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_TCP_DATA_OFF      = 0x0000020000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_TCP_TCP_FLAGS     = 0x0000010000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_TCP_RX_WIN        = 0x0000008000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_TCP_CSUM          = 0x0000004000000000,
	BNXT_ULP_HF_0_2_9_BITMASK_O_TCP_URP           = 0x0000002000000000
};

enum bnxt_ulp_hf_0_2_10_bitmask {
	BNXT_ULP_HF_0_2_10_BITMASK_WM                 = 0x8000000000000000,
	BNXT_ULP_HF_0_2_10_BITMASK_SVIF_INDEX         = 0x4000000000000000,
	BNXT_ULP_HF_0_2_10_BITMASK_O_ETH_DMAC         = 0x2000000000000000,
	BNXT_ULP_HF_0_2_10_BITMASK_O_ETH_SMAC         = 0x1000000000000000,
	BNXT_ULP_HF_0_2_10_BITMASK_O_ETH_TYPE         = 0x0800000000000000,
	BNXT_ULP_HF_0_2_10_BITMASK_OO_VLAN_CFI_PRI    = 0x0400000000000000,
	BNXT_ULP_HF_0_2_10_BITMASK_OO_VLAN_VID        = 0x0200000000000000,
	BNXT_ULP_HF_0_2_10_BITMASK_OO_VLAN_TYPE       = 0x0100000000000000,
	BNXT_ULP_HF_0_2_10_BITMASK_O_IPV6_VER         = 0x0080000000000000,
	BNXT_ULP_HF_0_2_10_BITMASK_O_IPV6_TC          = 0x0040000000000000,
	BNXT_ULP_HF_0_2_10_BITMASK_O_IPV6_FLOW_LABEL  = 0x0020000000000000,
	BNXT_ULP_HF_0_2_10_BITMASK_O_IPV6_PAYLOAD_LEN = 0x0010000000000000,
	BNXT_ULP_HF_0_2_10_BITMASK_O_IPV6_PROTO_ID    = 0x0008000000000000,
	BNXT_ULP_HF_0_2_10_BITMASK_O_IPV6_TTL         = 0x0004000000000000,
	BNXT_ULP_HF_0_2_10_BITMASK_O_IPV6_SRC_ADDR    = 0x0002000000000000,
	BNXT_ULP_HF_0_2_10_BITMASK_O_IPV6_DST_ADDR    = 0x0001000000000000,
	BNXT_ULP_HF_0_2_10_BITMASK_O_UDP_SRC_PORT     = 0x0000800000000000,
	BNXT_ULP_HF_0_2_10_BITMASK_O_UDP_DST_PORT     = 0x0000400000000000,
	BNXT_ULP_HF_0_2_10_BITMASK_O_UDP_LENGTH       = 0x0000200000000000,
	BNXT_ULP_HF_0_2_10_BITMASK_O_UDP_CSUM         = 0x0000100000000000
};

enum bnxt_ulp_hf_0_2_11_bitmask {
	BNXT_ULP_HF_0_2_11_BITMASK_WM                 = 0x8000000000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_SVIF_INDEX         = 0x4000000000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_O_ETH_DMAC         = 0x2000000000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_O_ETH_SMAC         = 0x1000000000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_O_ETH_TYPE         = 0x0800000000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_OO_VLAN_CFI_PRI    = 0x0400000000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_OO_VLAN_VID        = 0x0200000000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_OO_VLAN_TYPE       = 0x0100000000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_O_IPV4_VER         = 0x0080000000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_O_IPV4_TOS         = 0x0040000000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_O_IPV4_LEN         = 0x0020000000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_O_IPV4_FRAG_ID     = 0x0010000000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_O_IPV4_FRAG_OFF    = 0x0008000000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_O_IPV4_TTL         = 0x0004000000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_O_IPV4_PROTO_ID    = 0x0002000000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_O_IPV4_CSUM        = 0x0001000000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_O_IPV4_SRC_ADDR    = 0x0000800000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_O_IPV4_DST_ADDR    = 0x0000400000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_O_UDP_SRC_PORT     = 0x0000200000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_O_UDP_DST_PORT     = 0x0000100000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_O_UDP_LENGTH       = 0x0000080000000000,
	BNXT_ULP_HF_0_2_11_BITMASK_O_UDP_CSUM         = 0x0000040000000000
};

#endif