//
//  MentaVlionCommonEnum.h
//  MentaVlionBaseSDK
//
//  Created by iMacMe on 2023/12/20.
//




/* * * * * * * * * * * * * * * * * * * * * 开屏广告 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
// 开屏广告关闭方式
typedef NS_ENUM(NSUInteger, MentaSplashAdCloseMode) {
    MentaSplashAdCloseMode_ByClickAd,        // 点击广告关闭
    MentaSplashAdCloseMode_ByClickSkip,      // 点击跳过
    MentaSplashAdCloseMode_TimeOver,         // 倒计时结束时关闭
};

// 开屏广告点进模式
typedef NS_ENUM(NSUInteger, MentaSplashAdInterviewMode) {
    MentaSplashAdInterviewMode_BottomHotSpotClick = 1 << 0,      // 底部热区点击 // 默认
    MentaSplashAdInterviewMode_FullScreenClick    = 1 << 1,      // 全屏可点 (目前不支持)
    MentaSplashAdInterviewMode_Shake              = 1 << 2,      // 摇一摇
    MentaSplashAdInterviewMode_Swipe              = 1 << 3,      // 滑动

};

// 开屏广告物料填充模式
typedef NS_ENUM(NSUInteger, MentaSplashAdMaterialFillMode) {
    MentaSplashAdMaterialFillMode_ScaleAspectFill, // 默认
    MentaSplashAdMaterialFillMode_ScaleToFill,
    MentaSplashAdMaterialFillMode_ScaleAspectFit,
};


// 滑动方向
typedef NS_OPTIONS(NSUInteger, MVlionSwipeDirection) {
    MVlionSwipeDirection_None   = 0,
    MVlionSwipeDirection_Up     = 1 << 0,
    MVlionSwipeDirection_Down   = 1 << 1,
    MVlionSwipeDirection_Left   = 1 << 2,
    MVlionSwipeDirection_Right  = 1 << 3
};


/* * * * * * * * * * * * * * * * * * * * * 开屏广告 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
