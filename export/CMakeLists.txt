SET(SOURCES screens/ui_Screen1.c
    screens/ui_Screen2.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    images/ui_img_1346116439.c
    images/ui_img_bolt_20dp_fill1_wght400_grad0_opsz20_png.c
    images/ui_img_battery_full_20dp_fill1_wght400_grad0_opsz20_png.c
    images/ui_img_official_logo_square_1_png.c
    fonts/ui_font_BarlowBold120.c
    fonts/ui_font_BarlowBold32.c
    fonts/ui_font_BarlowMedium20.c)

add_library(ui ${SOURCES})
