//
//  ViewController.m
//  ShowAlert
//
//  Created by zzg on 2018/9/4.
//  Copyright © 2018年 zzg. All rights reserved.
//

#import "ViewController.h"
#import "GZIMAlertView.h"

@interface ViewController ()<GZIMAlertViewDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSLog(@"-----");
    
}

-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    GZIMAlertView * alert = [[GZIMAlertView alloc] initWithBackgroundImage:[UIImage imageNamed:@"123"] delegate:self];
    [alert show];
    [alert setCancelBlock:^{
        NSLog(@"cancleBlock");
    }];
    [alert setMarkBlock:^{
        NSLog(@"setMarkBlock");
    }];
}

- (void)alertView:(GZIMAlertView *)alertView didSelectedButtonIndex:(NSInteger)buttonIndex {
    NSLog(@"---->>>>>>>>>>>>>>>%ld",buttonIndex);
}


@end
