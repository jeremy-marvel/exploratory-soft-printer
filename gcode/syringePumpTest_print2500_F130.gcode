M107 					; disable fans
M420 S0                 ; disable leveling matrix
G90 					; absolute positioning
M82 					; set extruder to absolute mode
G92 E0 					; set extruder position to 0
G1 X89 Y260 Z60 E0 F3000                    ; move to printing position
M117 Printing 2500 at 130				; progress indicator message on LCD
G1 E2500 F130
M400					; wait for moves to finish
M117 Print Complete.                      ; print complete message