/*******************************************************************************
* @file  rsi_wlan_config.h
* @brief 
*******************************************************************************
* # License
* <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
*******************************************************************************
*
* The licensor of this software is Silicon Laboratories Inc. Your use of this
* software is governed by the terms of Silicon Labs Master Software License
* Agreement (MSLA) available at
* www.silabs.com/about-us/legal/master-software-license-agreement. This
* software is distributed to you in Source Code format and is governed by the
* sections of the MSLA applicable to Source Code.
*
******************************************************************************/

#ifndef RSI_CONFIG_H
#define RSI_CONFIG_H

/*=======================================================================*/
//  ! INCLUDES
/*=======================================================================*/
#include "rsi_wlan_defines.h"

//! Enable feature
#define RSI_ENABLE 1
//! Disable feature
#define RSI_DISABLE 0

//! To enable concurrent mode
#define CONCURRENT_MODE RSI_DISABLE

/*=======================================================================*/
//! Opermode command parameters
/*=======================================================================*/

//! To set wlan feature select bit map
#define RSI_FEATURE_BIT_MAP \
  (FEAT_ULP_GPIO_BASED_HANDSHAKE | FEAT_DEV_TO_HOST_ULP_GPIO_1) //! To set wlan feature select bit map
//! TCP IP BYPASS feature check
#define RSI_TCP_IP_BYPASS RSI_DISABLE
//! TCP/IP feature select bitmap for selecting TCP/IP features
#define RSI_TCP_IP_FEATURE_BIT_MAP (TCP_IP_FEAT_DHCPV4_CLIENT)

#define RSI_EXT_TCPIP_FEATURE_BITMAP 0

#define RSI_BT_FEATURE_BITMAP (BT_RF_TYPE | ENABLE_BLE_PROTOCOL)

//! To set custom feature select bit map
#define RSI_CUSTOM_FEATURE_BIT_MAP FEAT_CUSTOM_FEAT_EXTENTION_VALID

//! To set Extended custom feature select bit map
#define RSI_EXT_CUSTOM_FEATURE_BIT_MAP (EXT_FEAT_LOW_POWER_MODE | EXT_FEAT_XTAL_CLK_ENABLE | EXT_FEAT_384K_MODE)

/*=======================================================================*/
//! Power save command parameters
/*=======================================================================*/
#define RSI_HAND_SHAKE_TYPE GPIO_BASED //! set handshake type of power mode
#define RSI_SELECT_LP_OR_ULP_MODE \
  RSI_ULP_WITH_RAM_RET //! 0 - LP, 1- ULP mode with RAM retention and 2 - ULP with Non RAM retention

//! set DTIM alignment required
//! 0 - module wakes up at beacon which is just before or equal to listen_interval
//! 1 - module wakes up at DTIM beacon which is just before or equal to listen_interval
#define RSI_DTIM_ALIGNED_TYPE 0

//! Monitor interval for the FAST PSP mode
//! default is 50 ms, and this parameter is valid for FAST PSP only
#define RSI_MONITOR_INTERVAL 50

/***********************************************************************************************************************************************/

//! including the common defines
#include "rsi_wlan_common_config.h"
#endif