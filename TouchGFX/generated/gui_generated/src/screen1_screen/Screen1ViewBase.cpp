/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase()
{

    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_BACKGROUNDS_MAIN_BG_PORTRAIT_240X320PX_ID));
    scalableImage1.setPosition(0, 0, 240, 320);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    btn_2.setXY(63, 104);
    btn_2.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_2.setLabelText(touchgfx::TypedText(T___SINGLEUSE_UTRJ));
    btn_2.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_2.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btn_1.setXY(10, 104);
    btn_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_1.setLabelText(touchgfx::TypedText(T___SINGLEUSE_BCIC));
    btn_1.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_1.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btn_3.setXY(116, 104);
    btn_3.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_3.setLabelText(touchgfx::TypedText(T___SINGLEUSE_JOO7));
    btn_3.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_3.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btn_4.setXY(10, 157);
    btn_4.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_4.setLabelText(touchgfx::TypedText(T___SINGLEUSE_E0ZV));
    btn_4.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_4.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btn_5.setXY(63, 157);
    btn_5.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_5.setLabelText(touchgfx::TypedText(T___SINGLEUSE_8TQX));
    btn_5.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_5.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btn_6.setXY(116, 157);
    btn_6.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_6.setLabelText(touchgfx::TypedText(T___SINGLEUSE_TR77));
    btn_6.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_6.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btn_7.setXY(10, 210);
    btn_7.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_7.setLabelText(touchgfx::TypedText(T___SINGLEUSE_VG85));
    btn_7.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_7.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btn_8.setXY(63, 210);
    btn_8.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_8.setLabelText(touchgfx::TypedText(T___SINGLEUSE_S4Q9));
    btn_8.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_8.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btn_9.setXY(116, 210);
    btn_9.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_9.setLabelText(touchgfx::TypedText(T___SINGLEUSE_Q2GK));
    btn_9.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_9.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btn_0.setXY(63, 263);
    btn_0.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_0.setLabelText(touchgfx::TypedText(T___SINGLEUSE_AKH7));
    btn_0.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_0.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btn_equal.setXY(116, 263);
    btn_equal.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_equal.setLabelText(touchgfx::TypedText(T___SINGLEUSE_NUUT));
    btn_equal.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_equal.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btn_ce.setXY(10, 263);
    btn_ce.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_ce.setLabelText(touchgfx::TypedText(T___SINGLEUSE_9KEP));
    btn_ce.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_ce.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btn_plus.setXY(169, 104);
    btn_plus.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_plus.setLabelText(touchgfx::TypedText(T___SINGLEUSE_OV0Y));
    btn_plus.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_plus.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btn_sub.setXY(169, 157);
    btn_sub.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_sub.setLabelText(touchgfx::TypedText(T___SINGLEUSE_60DU));
    btn_sub.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_sub.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btn_mul.setXY(169, 210);
    btn_mul.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_mul.setLabelText(touchgfx::TypedText(T___SINGLEUSE_FKRN));
    btn_mul.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_mul.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btn_div.setXY(169, 263);
    btn_div.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_div.setLabelText(touchgfx::TypedText(T___SINGLEUSE_UV1O));
    btn_div.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_div.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btn_sin.setXY(10, 51);
    btn_sin.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_sin.setLabelText(touchgfx::TypedText(T___SINGLEUSE_8OQM));
    btn_sin.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_sin.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btn_cos.setXY(63, 51);
    btn_cos.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_cos.setLabelText(touchgfx::TypedText(T___SINGLEUSE_TPVX));
    btn_cos.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_cos.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btn_exp.setXY(116, 51);
    btn_exp.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_exp.setLabelText(touchgfx::TypedText(T___SINGLEUSE_LTK8));
    btn_exp.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_exp.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btn_fact.setXY(169, 51);
    btn_fact.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    btn_fact.setLabelText(touchgfx::TypedText(T___SINGLEUSE_7N7K));
    btn_fact.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_fact.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    textArea1.setPosition(16, 3, 213, 24);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CSR7));

    textArea2.setPosition(16, 27, 213, 24);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_D1DZ));

    add(__background);
    add(scalableImage1);
    add(btn_2);
    add(btn_1);
    add(btn_3);
    add(btn_4);
    add(btn_5);
    add(btn_6);
    add(btn_7);
    add(btn_8);
    add(btn_9);
    add(btn_0);
    add(btn_equal);
    add(btn_ce);
    add(btn_plus);
    add(btn_sub);
    add(btn_mul);
    add(btn_div);
    add(btn_sin);
    add(btn_cos);
    add(btn_exp);
    add(btn_fact);
    add(textArea1);
    add(textArea2);
}

void Screen1ViewBase::setupScreen()
{

}