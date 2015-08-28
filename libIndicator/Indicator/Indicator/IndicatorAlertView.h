//
//  IndicatorAlertView.h
//  Indicator
//
//  Created by OrangeLife on 15/8/28.
//  Copyright (c) 2015年 Shenme Studio. All rights reserved.
//

#import <UIKit/UIKit.h>

@class IndicatorAlertView;

typedef void (^AlertViewCompletion)(IndicatorAlertView *alertView, NSInteger buttonIndex);

typedef NS_ENUM(NSInteger, IndicatorAlertStyle)
{
    IndicatorAlertStyleTip = 0,
    IndicatorAlertStyleInput,
};

@interface IndicatorAlertView : UIView
@property (strong, nonatomic) UITextField *input;
-(instancetype)initWithTitle:(NSString *)title message:(NSString *)message alertStyle:(IndicatorAlertStyle)alertStyle cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSArray *)otherButtonTitles completion:(AlertViewCompletion)completion;
@end
