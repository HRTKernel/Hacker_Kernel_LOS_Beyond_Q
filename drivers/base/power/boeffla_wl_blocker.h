/*
 * Author: andip71, 01.09.2017
 * Author: thehacker911, 26.02.2020
 *
 * Version 1.2.0
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#define BOEFFLA_WL_BLOCKER_VERSION	"1.2.0"

#define LIST_WL_DEFAULT				LIST_WL_SMG97XF /* set to your list, default list = LIST_WL_DEFAULT_VAR	*/

#define LENGTH_LIST_WL				255
#define LENGTH_LIST_WL_DEFAULT		100
#define LENGTH_LIST_WL_SEARCH		LENGTH_LIST_WL + LENGTH_LIST_WL_DEFAULT + 5

/*****************************************/
// Database
/*****************************************/

// Default
#define LIST_WL_DEFAULT_VAR			"wlan_rx_wake;qcom_rx_wakelock;wlan;wlan_wow_wl;wlan_extscan_wl;netmgr_wl;NETLINK"

// Galaxy S10
#define LIST_WL_SMG97XF				"wlan_rx_wake;NETLINK"
#define LIST_TESTING				"19030000.decon_f;ssp_comm_wake_lock;GPSD;ssp_wake_lock;tsp_wakelock;umts_ipc0;umts_ipc1;mmc0_detect"