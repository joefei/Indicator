//
//  IndicatorAlertView.m
//  Indicator
//
//  Created by OrangeLife on 15/8/28.
//  Copyright (c) 2015年 Shenme Studio. All rights reserved.
//

#import "IndicatorAlertView.h"
#include "IndicatorConfigure.h"
#include "Indicator.h"

@interface IndicatorAlertView()<UITextFieldDelegate>
@property (assign, nonatomic) AlertViewCompletion completion;
@end

@implementation IndicatorAlertView
-(instancetype)initWithTitle:(NSString *)title message:(NSString *)message alertStyle:(IndicatorAlertStyle)alertStyle cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSArray *)otherButtonTitles completion:(AlertViewCompletion)completion
{
    CGRect frame = CGRectMake(0, 0, IndicatorAlertViewWidth, 20);
    if (self = [super initWithFrame:frame])
    {
        [self setCompletion:completion];
        [self.layer setCornerRadius:IndicatorCornerRadius];
        [self setBackgroundColor:[UIColor whiteColor]];
        [self.layer setShadowOffset:CGSizeMake(0, 2)];
        [self.layer setShadowOpacity:0.2];
        [self.layer setMasksToBounds:YES];
        
        [self setAlpha:0];
        
        CGFloat x = 0;
        CGFloat y = kInterval;
        
        UILabel *tipLabel = [[UILabel alloc] initWithFrame:CGRectMake(x, y, frame.size.width, 20)];
        [tipLabel setFont:[UIFont fontWithName:@"Helvetica-Bold" size:16]];
        [tipLabel setText:title];
        [tipLabel setTextColor:[UIColor grayColor]];
        [tipLabel setTextAlignment:NSTextAlignmentCenter];
        [self addSubview:tipLabel];
        
        x = kInterval*2;
        y = CGRectGetMaxY(tipLabel.frame)+kInterval/2;
        UIView *line = [[UIView alloc] initWithFrame:CGRectMake(x, y, frame.size.width-2*x, 1.5)];
        [line setBackgroundColor:[UIColor lightGrayColor]];
        [self addSubview:line];
        
        y = CGRectGetMaxY(line.frame)+ kInterval/2;
        UILabel *msgLabel = [[UILabel alloc] initWithFrame:CGRectMake(x, y, frame.size.width-2*x, kHeight)];
        [msgLabel setFont:[UIFont fontWithName:@"Helvetica-Bold" size:13]];
        [msgLabel setNumberOfLines:0];
        [msgLabel setLineBreakMode:NSLineBreakByCharWrapping];
        [msgLabel setText:message];
        [msgLabel setTextColor:[UIColor grayColor]];
        [msgLabel sizeToFit];
        [msgLabel setCenter:CGPointMake(IndicatorAlertViewWidth/2, y+msgLabel.frame.size.height/2)];
        [self addSubview:msgLabel];
        
        y = CGRectGetMaxY(msgLabel.frame) + kInterval;
        if (alertStyle == IndicatorAlertStyleInput)
        {
            UITextField *input = [[UITextField alloc] initWithFrame:CGRectMake(x, y, frame.size.width-2*x, 35)];
            [input.layer setCornerRadius:IndicatorCornerRadius];
            [input.layer setBorderColor:[UIColor lightGrayColor].CGColor];
            [input.layer setBorderWidth:0.5];
            [input setDelegate:self];
            [input setLeftView:[[UIView alloc] initWithFrame:CGRectMake(0, 0, kInterval, kInterval)]];
            [input setLeftViewMode:UITextFieldViewModeAlways];
            [input setFont:[UIFont systemFontOfSize:12]];
            [input setClearButtonMode:UITextFieldViewModeAlways];
            [self addSubview:input];
            self.input = input;
            
             y = CGRectGetMaxY(input.frame)+kInterval;
        }
        
        NSMutableArray *buttonTitles = [NSMutableArray arrayWithArray:otherButtonTitles];
        [buttonTitles insertObject:cancelButtonTitle atIndex:0];
        
        CGFloat width = IndicatorAlertViewWidth/buttonTitles.count;
        for (NSInteger index = 0; index < buttonTitles.count ; ++index)
        {
            UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
            [button setFrame:CGRectMake(width*index, y , width, 35)];
            
            [button setTitle:buttonTitles[index] forState:UIControlStateNormal];
            [button setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
            [button setBackgroundColor:[UIColor orangeColor]];
            [button.titleLabel setFont:[UIFont fontWithName:@"Helvetica-Bold" size:17]];
            [button setTag:index];
            [button addTarget:self action:@selector(alertViewDidClickedButtonAtIndex:) forControlEvents:UIControlEventTouchUpInside];
            [self addSubview:button];
        }
        
        y = y + 35;
        

        [self setFrame:CGRectMake(0, 0, IndicatorAlertViewWidth, y)];
        [self setCenter:CGPointMake(kWidth/2, kHeight/2)];
        
    }
    return self;
}

- (void)alertViewDidClickedButtonAtIndex:(UIButton *)senger
{
    if (self.completion)
    {
        self.completion(self, senger.tag);
    }
    [[Indicator shareInstancetype] dismiss];
}


@end
