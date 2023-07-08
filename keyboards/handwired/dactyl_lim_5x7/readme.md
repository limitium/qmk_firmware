# QMK firmware for [Limitium' dactyl manuform](https://github.com/limitium/limitium-datcyl-manuform)
## Wiring

Serial wiring is used
![serial wiring](https://user-images.githubusercontent.com/2170248/92296488-28e9ad80-ef70-11ea-98be-c40cb48a0319.JPG)

## Build the Firmware:
To build firmware:
  `qmk compile -kb handwired/dactyl_lim_5x7 -km default`
  
### Flash 1st firmware

After firmware build, each board must be flashed individually with a handedness set via EEPROM. This allows to update the frimware with only one board connected to USB.

Run for right:
`qmk flash -kb handwired/dactyl_lim_5x7 -km default:avrdude-split-right`

Run for left:
`qmk flash -kb handwired/dactyl_lim_5x7 -km default:avrdude-split-left`

And run promicro in bootload mode
![bootload mode](https://cdn.sparkfun.com/assets/6/d/3/4/a/523c8e23757b7fbe5f8b4584.png)

### Update firmware

After firmware build run `qmk flash -kb handwired/dactyl_lim_5x7 -km default` press `qmk` and `~`
