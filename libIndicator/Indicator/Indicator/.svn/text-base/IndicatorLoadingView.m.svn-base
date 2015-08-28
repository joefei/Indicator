//
//  IndicatorLoadingView.m
//  Indicator
//
//  Created by OrangeLife on 15/8/27.
//  Copyright (c) 2015年 Shenme Studio. All rights reserved.
//

#import "IndicatorLoadingView.h"
#include "IndicatorConfigure.h"

@interface IndicatorLoadingView()
@property (weak, nonatomic) UILabel *tip;
@end

@implementation IndicatorLoadingView
 - (instancetype)initWithFrame:(CGRect)frame
{
    if (self = [super initWithFrame:frame])
    {
        [self.layer setCornerRadius:IndicatorCornerRadius];
        [self setBackgroundColor:[UIColor whiteColor]];
        [self.layer setShadowOffset:CGSizeMake(0, 2)];
        [self.layer setShadowOpacity:0.2];
        
        UIImageView *loading = [[UIImageView alloc] initWithFrame:CGRectMake(0, 0, IndicatorLoadingIconWH, IndicatorLoadingIconWH)];
        [loading setImage:[UIImage imageNamed:@"indicator.bundle/loading"]];
        [loading setCenter:CGPointMake(self.frame.size.width/2, self.frame.size.height*0.3)];
        CABasicAnimation* rotationAnimation;
        rotationAnimation = [CABasicAnimation animationWithKeyPath:@"transform.rotation.z"];
        [rotationAnimation setToValue:[NSNumber numberWithFloat: M_PI*2]];
        [CAMediaTimingFunction functionWithName:kCAMediaTimingFunctionEaseInEaseOut];
        [rotationAnimation setDuration:1.5];
        [rotationAnimation setRepeatCount:1000];
        [rotationAnimation setCumulative:NO];
        [rotationAnimation setRemovedOnCompletion:NO];
        [rotationAnimation setFillMode:kCAFillModeForwards];
        [loading.layer addAnimation:rotationAnimation forKey:@"Rotation"];
        [self addSubview:loading];
        
        UILabel *tip = [[UILabel alloc] initWithFrame:CGRectMake(0, frame.size.height*0.6, frame.size.width, frame.size.height*0.3)];
        [tip setText:IndicatorLoadingITipText];
        [tip setTextColor:[UIColor grayColor]];
        [tip setFont:[UIFont fontWithName:@"Helvetica-Bold" size:14]];
        [tip setTextAlignment:NSTextAlignmentCenter];
        [self addSubview:tip];
        self.tip = tip;

    }
    return self;
}

-(void)setTipText:(NSString *)text
{
    if (text)
    {
         [self.tip setText:text];
    }
}

- (void)setAlpha:(CGFloat)alpha
{
    [super setAlpha:alpha];
    if (alpha == 0)
    {
        [self.tip setText:IndicatorLoadingITipText];
//        [self removeFromSuperview];
    }
} 

@end
