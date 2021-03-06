/*******************************************************************************
 * BAREFOOT NETWORKS CONFIDENTIAL & PROPRIETARY
 *
 * Copyright (c) 2015-2016 Barefoot Networks, Inc.

 * All Rights Reserved.
 *
 * NOTICE: All information contained herein is, and remains the property of
 * Barefoot Networks, Inc. and its suppliers, if any. The intellectual and
 * technical concepts contained herein are proprietary to Barefoot Networks,
 * Inc.
 * and its suppliers and may be covered by U.S. and Foreign Patents, patents in
 * process, and are protected by trade secret or copyright law.
 * Dissemination of this information or reproduction of this material is
 * strictly forbidden unless prior written permission is obtained from
 * Barefoot Networks, Inc.
 *
 * No warranty, explicit or implicit is provided, unless granted under a
 * written agreement with Barefoot Networks, Inc.
 *
 * $Id: $
 *
 ******************************************************************************/
#ifdef __TARGET_TOFINO__

/* Tofino */
#ifndef USER_FEATURE_OVERRIDE
#ifndef DC_BASIC_PROFILE
#define DC_BASIC_PROFILE
#endif
#else
#include "p4userfeatures.h"
#endif

#else

/* Standard Model */
#define EGRESS_FILTER
#define FABRIC_ENABLE
#define EGRESS_ACL_ENABLE
#define SFLOW_ENABLE
#define WCMP_ENABLE
#define FLOWLET_ENABLE
#define ILA_ENABLE
#define RACL_STATS_ENABLE

#define invalidate(x) modify_field(x, 0)

#endif

// Profiles control, default is DC_BASIC_PROFILE
//#define DC_BASIC_PROFILE
//#define ENT_DC_GENERAL_PROFILE
//#define ENT_FIN_LEAF_PROFILE
//#define ENT_FIN_SPINE_PROFILE
//#define ENT_FIN_POSTCARD_PROFILE
//#define MSDC_PROFILE

// Individual features control
//#define ACL_DISABLE
//#define ACL_RANGE_DISABLE
//#define EGRESS_ACL_RANGE_DISABLE
//#define BFD_OFFLOAD_ENABLE
//#define EGRESS_FILTER
//#define FAST_FAILOVER_ENABLE
//#define FLOWLET_ENABLE
//#define ILA_ENABLE
//#define INT_ENABLE
//#define INT_EP_ENABLE
//#define INT_DIGEST_ENABLE
//#define INT_L45_ENABLE
//#define INT_L4_CHECKSUM_UPDATE
//#define INT_TRANSIT_ENABLE
//#define IPSG_DISABLE
//#define IPV4_DISABLE
//#define IPV6_DISABLE
//#define L2_DISABLE
//#define L2_MULTICAST_DISABLE
//#define TUNNEL_MULTICAST_DISABLE
//#define L3_DISABLE
//#define L3_MULTICAST_DISABLE
//#define TUNNEL_MULTICAST_DISABLE
//#define MIRROR_DISABLE
//#define MIRROR_ON_DROP_ENABLE
//#define MPLS_DISABLE
//#define MPLS_UDP_ENABLE
// #define MULTICAST_DISABLE
//#define NAT_DISABLE
//#define NVGRE_DISABLE
//#define GENEVE_DISABLE
//#define PKTGEN_ENABLE
//#define QOS_CLASSIFICATION_ENABLE
//#define SS_QOS_CLASSIFICATION_ENABLE
//#define ACL_QOS_ENABLE
//#define QOS_METERING_ENABLE
//#define DOUBLE_TAGGED_DISABLE
//#define RACL_DISABLE
//#define RACL_STATS_ENABLE
//#define EGRESS_ACL_STATS_ENABLE
//#define EGRESS_OUTER_BD_STATS_ENABLE
//#define MIRROR_ACL_STATS_ENABLE
//#define RESILIENT_HASH_ENABLE
//#define SFLOW_ENABLE
//#define SR_ENABLE
//#define STATS_DISABLE
//#define STORM_CONTROL_DISABLE
//#define STP_DISABLE
//#define TUNNEL_DISABLE
//#define IPV6_TUNNEL_DISABLE
//#define URPF_DISABLE
//#define WCMP_ENABLE
//#define MIRROR_ACL_ENABLE
//#define TELEMETRY_APX_STFUL_SUP_ENABLE
//#define TELEMETRY_STATELESS_SUP_ENABLE
//#define TELEMETRY_MIRROR_LB_ENABLE
//#define TELEMETRY_REPORT_ENABLE
//#define TELEMETRY_WATCH_INNER_ENABLE
//#define INGRESS_MAC_ACL_DISABLE
//#define EGRESS_MAC_ACL_DISABLE
//#define TUNNEL_NEXTHOP_ENABLE /* When multicast is disabled but PRE engine is still needed for tunneling */
//#define TUNNEL_OPT
//#define INGRESS_UC_SELF_FWD_CHECK_DISABLE
//#define TUNNEL_INDEX_BRIDGE_ENABLE
//#define TUNNEL_V4_VXLAN_ONLY
//#define TUNNEL_PARSING_DISABLE
//#define MIRROR_NEXTHOP_DISABLE
//#define INGRESS_PORT_IN_EGRESS_SYSTEM_ACL_ENABLE
//#define HASH_32BIT_ENABLE

#if defined(ENT_DC_GENERAL_PROFILE)

#define URPF_DISABLE
#define NAT_DISABLE
#define IPSG_DISABLE
#define FIB_ALPM
#define STP_TCAM_DISABLE

#define NVGRE_DISABLE
#define GENEVE_DISABLE
#define MPLS_DISABLE
#define OUTER_MULTICAST_BRIDGE_DISABLE
#define EGRESS_TUNNEL_CPU_DISABLE
#define RACL_REASON_CODE_DISABLE
#define DOUBLE_TAGGED_DISABLE
#define SCALING

#define INGRESS_PORT_MIRROR_ENABLE
#define QOS_CLASSIFICATION_ENABLE
#define SFLOW_ENABLE
#define EGRESS_ACL_ENABLE
#define EGRESS_ACL_RANGE_DISABLE
#define EGRESS_MAC_ACL_DISABLE
#define TUNNEL_NEXTHOP_ENABLE

#define REWRITE_SWAP
#define PTP_ENABLE
#define IPV6_TUNNEL_MULTICAST_DISABLE
#define ENT_DC_GENERAL_TABLE_SIZES

#elif defined(ENT_DC_AGGR_PROFILE)

#define URPF_DISABLE
#define NAT_DISABLE
#define IPSG_DISABLE
#define QOS_DISABLE
#define FIB_ALPM
#define STP_TCAM_DISABLE

#define NVGRE_DISABLE
#define GENEVE_DISABLE
#define MPLS_DISABLE
#define TUNNEL_DISABLE
#define EGRESS_TUNNEL_CPU_DISABLE
#define TUNNEL_PARSING_DISABLE
#define DOUBLE_TAGGED_DISABLE
#define COPP_METER_DISABLE
#define SCALING

#define INGRESS_PORT_MIRROR_ENABLE
#define QOS_CLASSIFICATION_ENABLE
#define QOS_MARKING_ENABLE
#define QOS_METERING_ENABLE
#define SFLOW_ENABLE
#define EGRESS_ACL_ENABLE
#define EGRESS_ACL_RANGE_DISABLE
#define EGRESS_MAC_ACL_DISABLE
#define RACL_STATS_ENABLE
#define EGRESS_ACL_STATS_ENABLE
#define MAC_QOS_ACL_ENABLE
#define IPV4_QOS_ACL_ENABLE
//#define IPV6_QOS_ACL_ENABLE
#define PTP_ENABLE
#define FCOE_ACL_ENABLE
#define MIRROR_NEXTHOP_DISABLE
#define ENT_DC_AGGR_TABLE_SIZES

#elif defined(TEST_ENT_DC_POSTCARD_PROFILE)

#define POSTCARD_ENABLE
#define TELEMETRY_MIRROR_LB_ENABLE
#define MIRROR_ON_DROP_ENABLE
#define TELEMETRY_STATELESS_SUP_ENABLE
#define TELEMETRY_APX_STFUL_SUP_ENABLE
#define TUNNEL_NEXTHOP_ENABLE
#define REWRITE_SWAP
#define RACL_DISABLE
#define L2_MULTICAST_DISABLE
#define L3_MULTICAST_DISABLE
#define OUTER_MULTICAST_BRIDGE_DISABLE
#define MPLS_DISABLE
#define TUNNEL_DISABLE
#define EGRESS_TUNNEL_CPU_DISABLE
#define DOUBLE_TAGGED_DISABLE

#define IPV6_DISABLE
#define STORM_CONTROL_DISABLE
#define IPSG_DISABLE
#define URPF_DISABLE
#define NAT_DISABLE
#define SCALING

#define ACL_RANGE_DISABLE
#define EGRESS_MAC_ACL_DISABLE

#define INGRESS_PORT_MIRROR_ENABLE

#define FIB_ALPM
#define ACL_SWAP // table ordering optimization
#define MSDC_TABLE_SIZES

#elif defined(ENT_FIN_LEAF_PROFILE) || defined(ENT_FIN_SPINE_PROFILE) \
  || defined(ENT_FIN_POSTCARD_PROFILE)

#define TELEMETRY_MIRROR_LB_ENABLE
#define TELEMETRY_STATELESS_SUP_ENABLE
#define MIRROR_ON_DROP_ENABLE
#define TUNNEL_NEXTHOP_ENABLE
#define IPV6_DISABLE
#define MPLS_DISABLE
#define TUNNEL_DISABLE
#define IPSG_DISABLE
#define NVGRE_DISABLE
#define URPF_DISABLE
#define NAT_DISABLE
#define QOS_CLASSIFICATION_ENABLE
#define FIB_ALPM
#define TELEMETRY_FIN_TABLE_SIZES
#define ENT_DC_GENERAL_TABLE_SIZES
#define STP_TCAM_DISABLE
#define INGRESS_PORT_MIRROR_ENABLE
#define REWRITE_SWAP

#ifdef ENT_FIN_LEAF_PROFILE
#define INT_ENABLE
#define INT_EP_ENABLE
#define INT_DIGEST_ENABLE
#define INT_L45_ENABLE
#define INT_L4_CHECKSUM_UPDATE
#define TELEMETRY_APX_STFUL_SUP_ENABLE

#define L3_MULTICAST_DISABLE
#define RACL_DISABLE
#define ACL_SWAP

#elif defined(ENT_FIN_SPINE_PROFILE)
#define INT_ENABLE
#define INT_TRANSIT_ENABLE
#define INT_DIGEST_ENABLE
#define INT_L45_ENABLE
#define INT_L4_CHECKSUM_UPDATE

#elif defined(ENT_FIN_POSTCARD_PROFILE)
#define POSTCARD_ENABLE
#define TELEMETRY_APX_STFUL_SUP_ENABLE
#endif

// start of all MSDC profiles
#elif defined(MSDC_PROFILE) || defined(MSDC_IPV4_PROFILE) || defined(MSDC_L3_PROFILE) \
    || defined(MSDC_LEAF_TELEMETRY_INT_PROFILE) || defined(MSDC_SPINE_TELEMETRY_INT_PROFILE) \
    || defined(MSDC_TELEMETRY_POSTCARD_PROFILE)

// common features for all MSDC profiles
#define URPF_DISABLE
#define IPSG_DISABLE
#define MPLS_DISABLE
#define NVGRE_DISABLE
#define TUNNEL_NEXTHOP_ENABLE
#define NAT_DISABLE
#define L2_MULTICAST_DISABLE
#define L3_MULTICAST_DISABLE
#define TUNNEL_MULTICAST_DISABLE
#define STP_TCAM_DISABLE
#define EGRESS_TUNNEL_CPU_DISABLE
#define FIB_ALPM
#define WRED_ENABLE
#define QOS_CLASSIFICATION_ENABLE
#define MIRROR_ACL_ENABLE
#define MIRROR_ACL_STATS_ENABLE
#define RACL_DISABLE
#define INGRESS_PORT_MIRROR_ENABLE

#if defined(MSDC_PROFILE) \
    || defined(MSDC_LEAF_TELEMETRY_INT_PROFILE) || defined(MSDC_SPINE_TELEMETRY_INT_PROFILE) \
    || defined(MSDC_TELEMETRY_POSTCARD_PROFILE)
// common features for MSDC and MSDC telemetry profiles
#define INGRESS_PORT_IN_EGRESS_SYSTEM_ACL_ENABLE
#define ETYPE_IN_IP_ACL_KEY_ENABLE
#endif

// unique features for each MSDC profile or profile group
#if defined(MSDC_PROFILE)
#define MSDC_TABLE_SIZES

#elif defined(MSDC_IPV4_PROFILE)

#define MSDC_IPV4_TABLE_SIZES
#define IPV6_DISABLE
#define ACL_SWAP
#define REWRITE_SWAP
#define TUNNEL_OPT
#define INGRESS_UC_SELF_FWD_CHECK_DISABLE
#define TUNNEL_INDEX_BRIDGE_ENABLE
#define NEXTHOP_SCALING
#define ETYPE_IN_IP_ACL_KEY_ENABLE

#elif defined(MSDC_TELEMETRY_POSTCARD_PROFILE) || defined(MSDC_LEAF_TELEMETRY_INT_PROFILE) \
    || defined(MSDC_SPINE_TELEMETRY_INT_PROFILE)
// start of MSDC telemetry profiles
#define TELEMETRY_MIRROR_LB_ENABLE
#define MIRROR_ON_DROP_ENABLE
#define TELEMETRY_STATELESS_SUP_ENABLE

#define OUTER_MULTICAST_BRIDGE_DISABLE
#define TUNNEL_DISABLE
#define DOUBLE_TAGGED_DISABLE
#define STP_DISABLE
#define SCALING
#define EGRESS_MAC_ACL_DISABLE
#define MSDC_TABLE_SIZES
#define ACL_SWAP // table ordering optimization
#define REWRITE_SWAP
#define STORM_CONTROL_DISABLE
#undef MIRROR_ACL_ENABLE
#undef MIRROR_ACL_STATS_ENABLE

#if defined(MSDC_TELEMETRY_POSTCARD_PROFILE)
#define POSTCARD_ENABLE
#define TELEMETRY_APX_STFUL_SUP_ENABLE

#elif defined(MSDC_LEAF_TELEMETRY_INT_PROFILE)
#define INT_ENABLE
#define INT_EP_ENABLE
#define INT_DIGEST_ENABLE
#define INT_L45_ENABLE
#define TELEMETRY_APX_STFUL_SUP_ENABLE
#define IPV6_DISABLE

#elif defined(MSDC_SPINE_TELEMETRY_INT_PROFILE)
#define INT_ENABLE
#define INT_TRANSIT_ENABLE
#define INT_L45_ENABLE
#define INT_DIGEST_ENABLE
#endif

// end of MSDC telemetry profiles

#else
#define RACL_SWAP
#define FIB_ACL_LABEL_ENABLE
#define MSDC_L3_TABLE_SIZES
#endif

// end of all MSDC profiles

#elif defined(DC_BASIC_PROFILE)

#define MIN_TABLE_SIZES
#define IPSG_DISABLE
#undef QOS_CLASSIFICATION_ENABLE
#define NAT_DISABLE
#define RACL_STATS_ENABLE
#define PTP_ENABLE
#endif

#define OUTER_PIM_BIDIR_OPTIMIZATION
#define PIM_BIDIR_OPTIMIZATION

#ifdef MIRROR_DISABLE
#define MIRROR_NEXTHOP_DISABLE
#endif

#ifdef TUNNEL_PARSING_DISABLE
#define TUNNEL_DISABLE
#define MPLS_DISABLE
#define MIRROR_NEXTHOP_DISABLE
#define EGRESS_TUNNEL_CPU_DISABLE
#endif

#ifdef MULTICAST_DISABLE
#define L2_MULTICAST_DISABLE
#define L3_MULTICAST_DISABLE
#define TUNNEL_MULTICAST_DISABLE
#endif

#ifdef TUNNEL_DISABLE
#define TUNNEL_MULTICAST_DISABLE
#define IPV4_TUNNEL_DISABLE
#define IPV6_TUNNEL_DISABLE
#else
#define TUNNEL_NEXTHOP_ENABLE
#endif

#ifdef IPV4_DISABLE
#define IPV4_TUNNEL_DISABLE
#define IPV4_L2_MULTICAST_DISABLE
#define IPV4_L3_MULTICAST_DISABLE
#endif

#ifdef IPV6_DISABLE
#define IPV6_TUNNEL_DISABLE
#define IPV6_L2_MULTICAST_DISABLE
#define IPV6_L3_MULTICAST_DISABLE
#endif

#ifdef IPV4_TUNNEL_DISABLE
#define IPV4_TUNNEL_MULTICAST_DISABLE
#endif

#ifdef IPV6_TUNNEL_DISABLE
#define IPV6_TUNNEL_MULTICAST_DISABLE
#endif

#ifdef L2_MULTICAST_DISABLE
#define IPV4_L2_MULTICAST_DISABLE
#define IPV6_L2_MULTICAST_DISABLE
#endif

#ifdef L3_MULTICAST_DISABLE
#define IPV4_L3_MULTICAST_DISABLE
#define IPV6_L3_MULTICAST_DISABLE
#define TUNNEL_MULTICAST_DISABLE
#endif

#ifdef TUNNEL_MULTICAST_DISABLE
#define IPV4_TUNNEL_MULTICAST_DISABLE
#define IPV6_TUNNEL_MULTICAST_DISABLE
#endif

#ifdef L3_DISABLE
#define URPF_DISABLE
#define IPSG_DISABLE
#endif

#ifdef ACL_RANGE_DISABLE
#define EGRESS_ACL_RANGE_DISABLE
#endif

#if !defined(COPP_METER_DISABLE)
#define COPP_COLOR_DROP_ENABLE
#endif


// Defines for switchapi library
#ifdef SRV6_ENABLE
#define P4_SRV6_ENABLE
#endif

#ifdef SFLOW_ENABLE
#define P4_SFLOW_ENABLE
#endif

#ifdef PKTGEN_ENABLE
#define P4_PKTGEN_ENABLE
#endif

#ifdef WCMP_ENABLE
#define P4_WCMP_ENABLE
#endif

#ifdef FLOWLET_ENABLE
#define P4_FLOWLET_ENABLE
#endif

#ifdef RESILIENT_HASH_ENABLE
#define P4_RESILIENT_HASH_ENABLE
#endif

#ifdef FAST_FAILOVER_ENABLE
#define P4_FAST_FAILOVER_ENABLE
#endif

#ifdef WRED_ENABLE
#define P4_WRED_ENABLE
#endif

#ifdef WRED_DROP_ENABLE
#define P4_WRED_DROP_ENABLE
#endif

#ifdef MIRROR_ACL_ENABLE
#define P4_MIRROR_ACL_ENABLE
#endif

#ifdef URPF_DISABLE
#define P4_URPF_DISABLE
#endif

#ifdef ILA_ENABLE
#define P4_ILA_ENABLE
#endif

#ifdef IPV6_DISABLE
#define P4_IPV6_DISABLE
#endif

#ifdef MPLS_DISABLE
#define P4_MPLS_DISABLE
#endif

#ifdef MPLS_UDP_ENABLE
#define P4_MPLS_UDP_ENABLE
#endif

#ifdef NAT_DISABLE
#define P4_NAT_DISABLE
#endif

#ifdef MULTICAST_DISABLE
#define P4_MULTICAST_DISABLE
#endif

#ifdef L2_MULTICAST_DISABLE
#define P4_L2_MULTICAST_DISABLE
#endif

#ifdef L3_MULTICAST_DISABLE
#define P4_L3_MULTICAST_DISABLE
#endif

#ifdef TUNNEL_MULTICAST_DISABLE
#define P4_TUNNEL_MULTICAST_DISABLE
#endif

#ifdef TUNNEL_DISABLE
#define P4_TUNNEL_DISABLE
#endif

#ifdef IPV6_TUNNEL_DISABLE
#define P4_IPV6_TUNNEL_DISABLE
#endif

#ifdef IPV6_TUNNEL_MULTICAST_DISABLE
#define P4_IPV6_TUNNEL_MULTICAST_DISABLE
#endif

#ifdef NVGRE_DISABLE
#define P4_NVGRE_DISABLE
#endif

#ifdef GENEVE_DISABLE
#define P4_GENEVE_DISABLE
#endif

#ifdef STORM_CONTROL_DISABLE
#define P4_STORM_CONTROL_DISABLE
#endif

#ifdef IPSG_DISABLE
#define P4_IPSG_DISABLE
#endif

#ifdef ACL_DISABLE
#define P4_ACL_DISABLE
#endif

#ifdef RACL_DISABLE
#define P4_RACL_DISABLE
#endif

#ifdef QOS_CLASSIFICATION_ENABLE
#define P4_QOS_CLASSIFICATION_ENABLE
#endif

#ifdef STP_DISABLE
#define P4_STP_DISABLE
#endif

#ifdef L2_DISABLE
#define P4_L2_DISABLE
#endif

#ifdef L3_DISABLE
#define P4_L3_DISABLE
#endif

#ifdef IPV4_DISABLE
#define P4_IPV4_DISABLE
#endif

#ifdef OUTER_MULTICAST_BRIDGE_DISABLE
#define P4_OUTER_MULTICAST_BRIDGE_DISABLE
#endif

#ifdef EGRESS_TUNNEL_CPU_DISABLE
#define P4_EGRESS_TUNNEL_CPU_DISABLE
#endif

#ifdef RACL_REASON_CODE_DISABLE
#define P4_RACL_REASON_CODE_DISABLE
#endif

#ifdef DOUBLE_TAGGED_DISABLE
#define P4_DOUBLE_TAGGED_DISABLE
#endif

#ifdef ACL_QOS_ENABLE
#define P4_ACL_QOS_ENABLE
#endif

#ifdef QOS_METERING_ENABLE
#define P4_QOS_METERING_ENABLE
#endif

#ifdef QOS_MARKING_ENABLE
#define P4_QOS_MARKING_ENABLE
#endif

#ifdef SS_QOS_CLASSIFICATION_ENABLE
#define P4_SS_QOS_CLASSIFICATION_ENABLE
#endif

#ifdef STATS_DISABLE
#define P4_STATS_DISABLE
#endif

#ifdef RACL_STATS_ENABLE
#define P4_RACL_STATS_ENABLE
#endif

#ifdef EGRESS_ACL_STATS_ENABLE
#define P4_EGRESS_ACL_STATS_ENABLE
#endif

#ifdef EGRESS_FILTER
#define P4_EGRESS_FILTER
#endif

#ifdef COPP_METER_DISABLE
#define P4_COPP_METER_DISABLE
#endif

#ifdef MIRROR_DISABLE
#define P4_MIRROR_DISABLE
#endif

#ifdef EGRESS_ACL_ENABLE
#define P4_EGRESS_ACL_ENABLE
#endif

#ifdef INGRESS_MAC_ACL_DISABLE
#define P4_INGRESS_MAC_ACL_DISABLE
#endif

#ifdef EGRESS_MAC_ACL_DISABLE
#define P4_EGRESS_MAC_ACL_DISABLE
#endif

#ifdef ACL_RANGE_DISABLE
#define P4_ACL_RANGE_DISABLE
#endif

#ifdef EGRESS_ACL_RANGE_DISABLE
#define P4_EGRESS_ACL_RANGE_DISABLE
#endif

#ifdef INT_DEBUG
#define P4_INT_DEBUG
#endif

#ifdef BFD_OFFLOAD_ENABLE
#define P4_BFD_OFFLOAD_ENABLE
#endif

#ifdef INT_ENABLE
#define P4_INT_ENABLE
#endif

#ifdef INT_EP_ENABLE
#define P4_INT_EP_ENABLE
#define TELEMETRY_REPORT_ENABLE
#endif

#ifdef INT_TRANSIT_ENABLE
#define P4_INT_TRANSIT_ENABLE
#define TELEMETRY_REPORT_ENABLE
#endif

#ifdef INT_L45_ENABLE
#define P4_INT_L45_ENABLE
#endif

#ifdef POSTCARD_ENABLE
#define P4_POSTCARD_ENABLE
#define TELEMETRY_REPORT_ENABLE
#endif

#ifdef MIRROR_ON_DROP_ENABLE
#define P4_MIRROR_ON_DROP_ENABLE
#define TELEMETRY_MIRROR_LB_ENABLE
#define TELEMETRY_REPORT_ENABLE
#endif

#ifdef TELEMETRY_REPORT_ENABLE
#define P4_TELEMETRY_REPORT_ENABLE
#endif

#ifdef TELEMETRY_APX_STFUL_SUP_ENABLE
#define P4_TELEMETRY_APX_STFUL_SUP_ENABLE
#ifdef INT_EP_ENABLE
#define INT_DIGEST_ENABLE
#endif
#endif

#ifdef INT_DIGEST_ENABLE
#define P4_INT_DIGEST_ENABLE
#endif

#ifdef TELEMETRY_STATELESS_SUP_ENABLE
#define P4_TELEMETRY_STATELESS_SUP_ENABLE
#endif

#ifdef TELEMETRY_MIRROR_LB_ENABLE
#define P4_TELEMETRY_MIRROR_LB_ENABLE
#endif

#ifdef TELEMETRY_WATCH_INNER_ENABLE
#define P4_TELEMETRY_WATCH_INNER_ENABLE
#endif

#ifdef INGRESS_PORT_MIRROR_ENABLE
#define P4_INGRESS_PORT_MIRROR_ENABLE
#endif

#ifdef FABRIC_ENABLE
#define P4_FABRIC_ENABLE
#endif

#ifdef COPP_COLOR_DROP_ENABLE
#define P4_COPP_COLOR_DROP_ENABLE
#endif

#ifdef EGRESS_OUTER_BD_STATS_ENABLE
#define P4_EGRESS_OUTER_BD_STATS_ENABLE
#endif

#ifdef TUNNEL_OPT
#define P4_TUNNEL_OPT
#endif

#ifdef INGRESS_UC_SELF_FWD_CHECK_DISABLE
#define P4_INGRESS_UC_SELF_FWD_CHECK_DISABLE
#endif

#ifdef TUNNEL_INDEX_BRIDGE_ENABLE
#define P4_TUNNEL_INDEX_BRIDGE_ENABLE
#endif

#ifdef TUNNEL_V4_VXLAN_ONLY
#define P4_TUNNEL_V4_VXLAN_ONLY
#endif

#ifdef MIRROR_ACL_STATS_ENABLE
#define P4_MIRROR_ACL_STATS_ENABLE
#endif

#ifdef TUNNEL_NEXTHOP_ENABLE
#define P4_TUNNEL_NEXTHOP_ENABLE
#endif

#ifdef MAC_QOS_ACL_ENABLE
#define P4_MAC_QOS_ACL_ENABLE
#endif

#ifdef IPV4_QOS_ACL_ENABLE
#define P4_IPV4_QOS_ACL_ENABLE
#endif

#ifdef IPV6_QOS_ACL_ENABLE
#define P4_IPV6_QOS_ACL_ENABLE
#endif

#ifdef PTP_ENABLE
#define P4_PTP_ENABLE
#endif

#ifdef TUNNEL_PARSING_DISABLE
#define P4_TUNNEL_PARSING_DISABLE
#endif

#ifdef MIRROR_NEXTHOP_DISABLE
#define P4_MIRROR_NEXTHOP_DISABLE
#endif

#ifdef INGRESS_PORT_IN_EGRESS_SYSTEM_ACL_ENABLE
#define P4_INGRESS_PORT_IN_EGRESS_SYSTEM_ACL_ENABLE
#endif

#ifdef HASH_32BIT_ENABLE
#define P4_HASH_32BIT_ENABLE
#endif

#ifdef ETYPE_IN_IP_ACL_KEY_ENABLE
#define P4_ETYPE_IN_IP_ACL_KEY_ENABLE
#endif
