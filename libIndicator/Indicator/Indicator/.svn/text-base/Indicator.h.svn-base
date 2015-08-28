//
//  Indicator.h
//  Indicator
//
//  Created by OrangeLife on 15/8/27.
//  Copyright (c) 2015年 Shenme Studio. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <UIKit/UIKit.h>
#import "IndicatorAlertView.h"

@interface Indicator : NSObject

+(instancetype)shareInstancetype;
-(void)initConfigure;

-(void)showLoading;
-(void)showLoadingWithTip:(NSString *)tip;

-(void)showAlertWithTitle:(NSString *)title message:(NSString *)message alertStyle:(IndicatorAlertStyle)alertStyle cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSArray *)otherButtonTitles completion:(void (^)(IndicatorAlertView *alertView, NSInteger buttonIndex))completion;

-(void)dismiss;
@end
