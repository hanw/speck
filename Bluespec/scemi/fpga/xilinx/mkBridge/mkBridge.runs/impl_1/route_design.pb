
H
Command: %s
53*	vivadotcl2 
route_design2default:defaultZ4-113
�
@Attempting to get a license for feature '%s' and/or device '%s'
308*common2"
Implementation2default:default2
	xc7vx485t2default:defaultZ17-347
�
0Got license for feature '%s' and/or device '%s'
310*common2"
Implementation2default:default2
	xc7vx485t2default:defaultZ17-349
g
,Running DRC as a precondition to command %s
22*	vivadotcl2 
route_design2default:defaultZ4-22
G
Running DRC with %s threads
24*drc2
82default:defaultZ23-27
M
DRC finished with %s
79*	vivadotcl2
0 Errors2default:defaultZ4-198
\
BPlease refer to the DRC report (report_drc) for more information.
80*	vivadotclZ4-199
M

Starting %s Task
103*constraints2
Routing2default:defaultZ18-103
p
BMultithreading enabled for route_design using a maximum of %s CPUs97*route2
82default:defaultZ35-254
K

Starting %s Task
103*constraints2
Route2default:defaultZ18-103
g

Phase %s%s
101*constraints2
1 2default:default2#
Build RT Design2default:defaultZ18-101
9
-Phase 1 Build RT Design | Checksum: 660a8d74
*common
�

%s
*constraints2q
]Time (s): cpu = 00:02:10 ; elapsed = 00:01:42 . Memory (MB): peak = 2417.613 ; gain = 243.0082default:default
m

Phase %s%s
101*constraints2
2 2default:default2)
Router Initialization2default:defaultZ18-101
f

Phase %s%s
101*constraints2
2.1 2default:default2 
Create Timer2default:defaultZ18-101
8
,Phase 2.1 Create Timer | Checksum: 660a8d74
*common
�

%s
*constraints2q
]Time (s): cpu = 00:02:11 ; elapsed = 00:01:42 . Memory (MB): peak = 2417.613 ; gain = 243.0082default:default
g

Phase %s%s
101*constraints2
2.2 2default:default2!

9
-Phase 2.2 Update Timing | Checksum: a6261aa1
*common
�

%s
*constraints2q
]Time (s): cpu = 00:02:44 ; elapsed = 00:01:58 . Memory (MB): peak = 2492.094 ; gain = 317.4882default:default
~
Estimated Timing Summary %s
57*route2J
6| WNS=0.582  | TNS=0      | WHS=-0.43  | THS=-852   |
2default:defaultZ35-57
?
3Phase 2 Router Initialization | Checksum: 72fb575a
*common
�

%s
*constraints2q
]Time (s): cpu = 00:03:00 ; elapsed = 00:02:05 . Memory (MB): peak = 2492.094 ; gain = 317.4882default:default
g

Phase %s%s
101*constraints2
3 2default:default2#
Initial Routing2default:defaultZ18-101
9
-Phase 3 Initial Routing | Checksum: d5fc2311
*common
�

%s
*constraints2q
]Time (s): cpu = 00:03:23 ; elapsed = 00:02:09 . Memory (MB): peak = 2492.094 ; gain = 317.4882default:default
j

Phase %s%s
101*constraints2
4 2default:default2&
Rip-up And Reroute2default:defaultZ18-101
l

Phase %s%s
101*constraints2
4.1 2default:default2&
Global Iteration 02default:defaultZ18-101
i

Phase %s%s
101*constraints2
4.1.1 2default:default2!

<
0Phase 4.1.1 Update Timing | Checksum: 197e5eaa1
*common
�

%s
*constraints2q
]Time (s): cpu = 00:04:07 ; elapsed = 00:02:24 . Memory (MB): peak = 2492.094 ; gain = 317.4882default:default
~
Estimated Timing Summary %s
57*route2J
6| WNS=0.436  | TNS=0      | WHS=N/A    | THS=N/A    |
2default:defaultZ35-57
>
2Phase 4.1 Global Iteration 0 | Checksum: 8012cf39
*common
�

%s
*constraints2q
]Time (s): cpu = 00:04:08 ; elapsed = 00:02:24 . Memory (MB): peak = 2492.094 ; gain = 317.4882default:default
<
0Phase 4 Rip-up And Reroute | Checksum: 8012cf39
*common
�

%s
*constraints2q
]Time (s): cpu = 00:04:08 ; elapsed = 00:02:24 . Memory (MB): peak = 2492.094 ; gain = 317.4882default:default
e

Phase %s%s
101*constraints2
5 2default:default2!

g

Phase %s%s
101*constraints2
5.1 2default:default2!

9
-Phase 5.1 Update Timing | Checksum: 8012cf39
*common
�

%s
*constraints2q
]Time (s): cpu = 00:04:14 ; elapsed = 00:02:25 . Memory (MB): peak = 2492.094 ; gain = 317.4882default:default
~
Estimated Timing Summary %s
57*route2J
6| WNS=0.451  | TNS=0      | WHS=N/A    | THS=N/A    |
2default:defaultZ35-57
7
+Phase 5 Delay CleanUp | Checksum: 8012cf39
*common
�

%s
*constraints2q
]Time (s): cpu = 00:04:14 ; elapsed = 00:02:26 . Memory (MB): peak = 2492.094 ; gain = 317.4882default:default
o

Phase %s%s
101*constraints2
6 2default:default2+
Clock Skew Optimization2default:defaultZ18-101
A
5Phase 6 Clock Skew Optimization | Checksum: 8012cf39
*common
�

%s
*constraints2q
]Time (s): cpu = 00:04:14 ; elapsed = 00:02:26 . Memory (MB): peak = 2492.094 ; gain = 317.4882default:default
e

Phase %s%s
101*constraints2
7 2default:default2!

g

Phase %s%s
101*constraints2
7.1 2default:default2!

9
-Phase 7.1 Update Timing | Checksum: 8012cf39
*common
�

%s
*constraints2q
]Time (s): cpu = 00:04:23 ; elapsed = 00:02:28 . Memory (MB): peak = 2492.094 ; gain = 317.4882default:default
~
Estimated Timing Summary %s
57*route2J
6| WNS=0.451  | TNS=0      | WHS=-0.101 | THS=-0.337 |
2default:defaultZ35-57
7
+Phase 7 Post Hold Fix | Checksum: 88272c4a
*common
�

%s
*constraints2q
]Time (s): cpu = 00:04:24 ; elapsed = 00:02:28 . Memory (MB): peak = 2492.094 ; gain = 317.4882default:default
f

Phase %s%s
101*constraints2
8 2default:default2"
Route finalize2default:defaultZ18-101
8
,Phase 8 Route finalize | Checksum: 88272c4a
*common
�

%s
*constraints2q
]Time (s): cpu = 00:04:25 ; elapsed = 00:02:29 . Memory (MB): peak = 2492.094 ; gain = 317.4882default:default
m

Phase %s%s
101*constraints2
9 2default:default2)
Verifying routed nets2default:defaultZ18-101
?
3Phase 9 Verifying routed nets | Checksum: 88272c4a
*common
�

%s
*constraints2q
]Time (s): cpu = 00:04:25 ; elapsed = 00:02:29 . Memory (MB): peak = 2492.094 ; gain = 317.4882default:default
j

Phase %s%s
101*constraints2
10 2default:default2%
Depositing Routes2default:defaultZ18-101
<
0Phase 10 Depositing Routes | Checksum: a801123c
*common
�

%s
*constraints2q
]Time (s): cpu = 00:04:28 ; elapsed = 00:02:32 . Memory (MB): peak = 2492.094 ; gain = 317.4882default:default
k

Phase %s%s
101*constraints2
11 2default:default2&
Post Router Timing2default:defaultZ18-101
h

Phase %s%s
101*constraints2
11.1 2default:default2!

:
.Phase 11.1 Update Timing | Checksum: a801123c
*common
�

%s
*constraints2q
]Time (s): cpu = 00:04:35 ; elapsed = 00:02:33 . Memory (MB): peak = 2492.094 ; gain = 317.4882default:default
~
Estimated Timing Summary %s
57*route2J
6| WNS=0.451  | TNS=0      | WHS=0.026  | THS=0      |
2default:defaultZ35-57
�
�The final timing numbers are based on the router estimated timing analysis. For a complete and accurate timing signoff, please run report_timing_summary.
127*routeZ35-327
=
1Phase 11 Post Router Timing | Checksum: a801123c
*common
�

%s
*constraints2q
]Time (s): cpu = 00:04:35 ; elapsed = 00:02:33 . Memory (MB): peak = 2492.094 ; gain = 317.4882default:default
4
Router Completed Successfully
16*routeZ35-16
3
'Ending Route Task | Checksum: a801123c
*common
�

%s
*constraints2q
]Time (s): cpu = 00:04:36 ; elapsed = 00:02:33 . Memory (MB): peak = 2492.094 ; gain = 317.4882default:default
�

%s
*constraints2q
]Time (s): cpu = 00:04:36 ; elapsed = 00:02:33 . Memory (MB): peak = 2492.094 ; gain = 317.4882default:default
Q
Releasing license: %s
83*common2"
Implementation2default:defaultZ17-83
�
G%s Infos, %s Warnings, %s Critical Warnings and %s Errors encountered.
28*	vivadotcl2
492default:default2
192default:default2
112default:default2
02default:defaultZ4-41
U
%s completed successfully
29*	vivadotcl2 
route_design2default:defaultZ4-42
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2"
route_design: 2default:default2
00:04:432default:default2
00:02:382default:default2
2492.0942default:default2
362.7152default:defaultZ17-268
4
Writing XDEF routing.
211*designutilsZ20-211
A
#Writing XDEF routing logical nets.
209*designutilsZ20-209
A
#Writing XDEF routing special nets.
210*designutilsZ20-210
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2)
Write XDEF Complete: 2default:default2
00:00:052default:default2
00:00:052default:default2
2492.0942default:default2
0.0002default:defaultZ17-268
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2&
write_checkpoint: 2default:default2
00:00:072default:default2
00:00:092default:default2
2492.0942default:default2
0.0002default:defaultZ17-268
G
Running DRC with %s threads
24*drc2
82default:defaultZ23-27
�
#The results of DRC are in file %s.
168*coretcl2�
p/mnt/nfs/var/nfs/ldemeyer/speck/Bluespec/scemi/fpga/xilinx/mkBridge/mkBridge.runs/impl_1/mkBridge_drc_routed.rptp/mnt/nfs/var/nfs/ldemeyer/speck/Bluespec/scemi/fpga/xilinx/mkBridge/mkBridge.runs/impl_1/mkBridge_drc_routed.rpt2default:default8Z2-168
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2 
report_drc: 2default:default2
00:00:132default:default2
00:00:052default:default2
2492.0942default:default2
0.0002default:defaultZ17-268
�
UpdateTimingParams:%s.
91*timing2P
< Speed grade: -2, Delay Type: min_max, Constraints type: SDC2default:defaultZ38-91
s
CMultithreading enabled for timing update using a maximum of %s CPUs155*timing2
82default:defaultZ38-191
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2+
report_timing_summary: 2default:default2
00:00:342default:default2
00:00:112default:default2
2492.0942default:default2
0.0002default:defaultZ17-268
B
,Running Vector-less Activity Propagation...
51*powerZ33-51
G
3
Finished Running Vector-less Activity Propagation
1*powerZ33-1
�
�MMCM/PLL RST static_probability should be either 0 or 1, power analysis is using 0 by default.
Use 'set_switching_activity -static_probability 1 -signal_rate 0 [get_nets %s]'  to set the static_probabiblity to '1'  if desired.207*power24
 scemi_pcie_ep/pcie_7x_v1_10_i/O12default:defaultZ33-218
�
�MMCM/PLL RST static_probability should be either 0 or 1, power analysis is using 0 by default.
Use 'set_switching_activity -static_probability 1 -signal_rate 0 [get_nets %s]'  to set the static_probabiblity to '1'  if desired.207*power2-
scemi_scemi_clkgen_rReset2default:defaultZ33-218
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2"
report_power: 2default:default2
00:00:132default:default2
00:00:142default:default2
2492.0942default:default2
0.0002default:defaultZ17-268


End Record