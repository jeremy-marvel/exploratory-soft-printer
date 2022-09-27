M107 					; disable fans
M420 S0                 ; disable leveling matrix
G90 					; absolute positioning
M82 					; set extruder to absolute mode
G92 E0 					; set extruder position to 0
M117 Printing 500 at 300				; progress indicator message on LCD
G1 E500 F300
M400					; wait for moves to finish
M117 Print Complete.                      ; print complete message