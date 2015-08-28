//
//  ViewController.m
//  Indicator
//
//  Created by OrangeLife on 15/8/27.
//  Copyright (c) 2015年 Shenme Studio. All rights reserved.
//

#import "ViewController.h"
#import "Indicator.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)loading:(id)sender {
    [[Indicator shareInstancetype] showLoading];
}

- (IBAction)alertview:(id)sender {
    [[Indicator shareInstancetype] showAlertWithTitle:@"警告" message:@"我是message我是message我是message我是message我是message我是message我是message" alertStyle:IndicatorAlertStyleTip cancelButtonTitle:@"取消" otherButtonTitles:nil completion:^(IndicatorAlertView *alertView, NSInteger buttonIndex) {
        NSLog(@"点击alert");
    }];
}
@end
