# SPDX-FileCopyrightText: 2020 Efabless Corporation
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# SPDX-License-Identifier: Apache-2.0

set script_dir [file dirname [file normalize [info script]]]

set ::env(DESIGN_NAME) Rocket

set ::env(VERILOG_FILES) "\
	$::env(CARAVEL_ROOT)/verilog/rtl/defines.v \
	$script_dir/../../verilog/rtl/cores/rocket-chip/freechips.rocketchip.system.DefaultRV32Config.v \
	$script_dir/../../verilog/rtl/cores/rocket-chip/freechips.rocketchip.system.DefaultRV32Config/plusarg_reader.v"
<<<<<<< HEAD
=======

>>>>>>> c033762c81bcc0f5a61b0a1e04c07ef98a45e562
set ::env(SDC_FILE) "/../../verilog/rtl/cores/rocket-chip/freechips.rocketchip.system.DefaultRV32Config.sdc"

set ::env(DESIGN_IS_CORE) 0

set ::env(CLOCK_PORT) "clock"
set ::env(CLOCK_NET) $::env(CLOCK_PORT)
set ::env(CLOCK_PERIOD) "1"
<<<<<<< HEAD
#set ::env(FP_PDN_CORE_RING) 1
set ::env(FP_SIZING) relative
set ::env(FP_CORE_UTIL) "10"
#set ::env(DIE_AREA) "0 0 1455 1466"
#set ::env(DIODE_INSERTION_STRATEGY) 0
#set ::env(PL_OPENPHYSYN_OPTIMIZATIONS) 0
set ::env(FP_PIN_ORDER_CFG) $script_dir/pin_order.cfg

#set ::env(PL_BASIC_PLACEMENT) 0
set ::env(PL_TARGET_DENSITY) 0.15

=======

set ::env(FP_SIZING) relative
set ::env(FP_CORE_UTIL) "10"
#set ::env(DIE_AREA) "0 0 2000 1500"

set ::env(FP_PIN_ORDER_CFG) $script_dir/pin_order.cfg

#set ::env(PL_BASIC_PLACEMENT) 1
set ::env(PL_TARGET_DENSITY) 0.15
>>>>>>> c033762c81bcc0f5a61b0a1e04c07ef98a45e562


# Maximum layer used for routing is metal 4.
# This is because this macro will be inserted in a top level (user_project_wrapper) 
# where the PDN is planned on metal 5. So, to avoid having shorts between routes
# in this macro and the top level metal 5 stripes, we have to restrict routes to metal4.  
set ::env(GLB_RT_MAXLAYER) 5

# You can draw more power domains if you need to 
#set ::env(VDD_NETS) [list {vccd1}]
#set ::env(GND_NETS) [list {vssd1}]

set ::env(DIODE_INSERTION_STRATEGY) 4 
# If you're going to use multiple power domains, then disable cvc run.
set ::env(RUN_CVC) 1
