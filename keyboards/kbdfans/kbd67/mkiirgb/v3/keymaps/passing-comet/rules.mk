VIA_ENABLE = yes
VIAL_ENABLE = yes
LTO_ENABLE = yes
VIAL_INSECURE = yes # ~+344 bytes

# Current configuration is approaching the maximum for the firmware - 25032/26624 (99%, 250 bytes free)
# Additional space can be achived by disabling LED animations in config.h - 20936/266244 (78%, 5688 bytes free)

TAP_DANCE_ENABLE = yes # ~2196 bytes
KEY_OVERRIDE_ENABLE = yes # ~1,614 bytes
QMK_SETTINGS = no # ~2560 bytes
COMBO_ENABLE = no # ~2408 bytes

# SPACE_CADET_ENABLE = no # ~324 bytes
# MAGIC_ENABLE = no # ~584 bytes
# AUTO_SHIFT_ENABLE = yes # ~2,560 bytes

# 26524/26624 (99%, 100 bytes free)
