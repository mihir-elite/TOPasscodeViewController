//
//  TOPINViewControllerConstants.h
//  TOPINViewControllerExample
//
//  Created by Tim Oliver on 5/15/17.
//  Copyright © 2017 Timothy Oliver. All rights reserved.
//

/* The visual style of the PIN view controller */
typedef NS_ENUM(NSInteger, TOPINViewStyle) {
    TOPINViewStyleTranslucentDark,
    TOPINViewStyleTranslucentLight,
    TOPINViewStyleTranslucentExtraLight,
    TOPINViewStyleOpaqueDark,
    TOPINViewStyleOpaqueLight
};

/* Depending on the amount of horizontal space, the sizing of the elements */
typedef NS_ENUM(NSInteger, TOPINViewContentSize) {
    TOPINViewWContentSizeDefault = 414, // Default, 414 points and above (6 Plus, all remaining iPad sizes)
    TOPINViewContentSizeMedium = 375, // Greater or equal to 375 points: iPhone 6 / iPad Pro 1/4 split mode
    TOPINViewContentSizeSmall  = 320  // Greater or equal to 320 points: iPhone SE / iPad 1/4 split mode
};

static inline BOOL TOPINViewStyleIsTranslucent(TOPINViewStyle style) {
    return style <= TOPINViewStyleTranslucentExtraLight;
}

static inline BOOL TOPINViewStyleIsDark(TOPINViewStyle style) {
    return style == TOPINViewStyleTranslucentDark || style == TOPINViewStyleOpaqueDark;
}