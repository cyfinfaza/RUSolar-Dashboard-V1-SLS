// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: Dashboard_UI

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_RightArrow = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_RightArrow, &ui_img_1346116439);
    lv_obj_set_width(ui_RightArrow, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RightArrow, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_RightArrow, 0);
    lv_obj_set_y(ui_RightArrow, 10);
    lv_obj_set_align(ui_RightArrow, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_RightArrow, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_RightArrow, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_angle(ui_RightArrow, 1800);
    lv_img_set_zoom(ui_RightArrow, 100);

    ui_LeftArrow = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_LeftArrow, &ui_img_1346116439);
    lv_obj_set_width(ui_LeftArrow, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LeftArrow, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LeftArrow, 0);
    lv_obj_set_y(ui_LeftArrow, 10);
    lv_obj_set_align(ui_LeftArrow, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_LeftArrow, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_LeftArrow, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_LeftArrow, 100);

    ui_SpeedLabel = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_SpeedLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SpeedLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SpeedLabel, 20);
    lv_obj_set_y(ui_SpeedLabel, 10);
    lv_label_set_text(ui_SpeedLabel, "999");
    lv_obj_set_style_text_font(ui_SpeedLabel, &ui_font_BarlowBold120, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Container1 = lv_obj_create(ui_Screen1);
    lv_obj_remove_style_all(ui_Container1);
    lv_obj_set_width(ui_Container1, 441);
    lv_obj_set_height(ui_Container1, 78);
    lv_obj_set_x(ui_Container1, 25);
    lv_obj_set_y(ui_Container1, 90);
    lv_obj_set_align(ui_Container1, LV_ALIGN_LEFT_MID);
    lv_obj_set_flex_flow(ui_Container1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_Container1, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_Container1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_row(ui_Container1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_Container1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ExampleWhite = lv_label_create(ui_Container1);
    lv_obj_set_width(ui_ExampleWhite, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ExampleWhite, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ExampleWhite, 39);
    lv_obj_set_y(ui_ExampleWhite, 46);
    lv_obj_set_align(ui_ExampleWhite, LV_ALIGN_LEFT_MID);
    lv_obj_set_flex_flow(ui_ExampleWhite, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_ExampleWhite, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_label_set_text(ui_ExampleWhite, "This is an example issue! It is in White! (x3000)");
    lv_obj_set_style_text_font(ui_ExampleWhite, &ui_font_BarlowMedium20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ExampleYellow = lv_label_create(ui_Container1);
    lv_obj_set_width(ui_ExampleYellow, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ExampleYellow, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ExampleYellow, 20);
    lv_obj_set_y(ui_ExampleYellow, 75);
    lv_obj_set_align(ui_ExampleYellow, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_ExampleYellow, "This is an example issue! It is in Yellow! (x3000)");
    lv_obj_set_style_text_color(ui_ExampleYellow, lv_color_hex(0xDAC20D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ExampleYellow, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ExampleYellow, &ui_font_BarlowMedium20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ExampleRed = lv_label_create(ui_Container1);
    lv_obj_set_width(ui_ExampleRed, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ExampleRed, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ExampleRed, 20);
    lv_obj_set_y(ui_ExampleRed, 95);
    lv_obj_set_align(ui_ExampleRed, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_ExampleRed, "This is an example issue! It is in Red! (x3000)");
    lv_obj_set_style_text_color(ui_ExampleRed, lv_color_hex(0xD61A1A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ExampleRed, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ExampleRed, &ui_font_BarlowMedium20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PowerLevel = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_PowerLevel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PowerLevel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PowerLevel, -55);
    lv_obj_set_y(ui_PowerLevel, 17);
    lv_obj_set_align(ui_PowerLevel, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_PowerLevel, "100%");
    lv_obj_set_style_text_font(ui_PowerLevel, &ui_font_BarlowBold32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BatLevel = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_BatLevel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BatLevel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_BatLevel, -55);
    lv_obj_set_y(ui_BatLevel, 67);
    lv_obj_set_align(ui_BatLevel, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_BatLevel, "100%");
    lv_obj_set_style_text_font(ui_BatLevel, &ui_font_BarlowBold32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image3 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Image3, &ui_img_bolt_20dp_fill1_wght400_grad0_opsz20_png);
    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image3, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image3, 175);

    ui_Image5 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Image5, &ui_img_battery_full_20dp_fill1_wght400_grad0_opsz20_png);
    lv_obj_set_width(ui_Image5, LV_SIZE_CONTENT);   /// 64
    lv_obj_set_height(ui_Image5, LV_SIZE_CONTENT);    /// 64
    lv_obj_set_x(ui_Image5, 0);
    lv_obj_set_y(ui_Image5, 50);
    lv_obj_set_align(ui_Image5, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_Image5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image5, 175);

}
