//
//  GZIMAlertView.h
//  ShowAlert
//
//  Created by zzg on 2018/9/4.
//  Copyright © 2018年 zzg. All rights reserved.
//

#import <UIKit/UIKit.h>


@class GZIMAlertView;

@protocol GZIMAlertViewDelegate <NSObject>

@optional
- (void)alertView:(GZIMAlertView *)alertView didSelectedButtonIndex:(NSInteger)buttonIndex;
@end
#if NS_BLOCKS_AVAILABLE
typedef void(^GZIMBasicActionBlock)(void);
#endif


@interface GZIMAlertView : UIView
/* 内容 */
@property (nonatomic, strong) UIView * contentView;
/* 取消按钮 */
@property (nonatomic, strong) UIButton * cancelButton;
/* info */
@property (nonatomic, strong) UIButton * markButton;


#if NS_BLOCKS_AVAILABLE
@property (nonatomic, copy) GZIMBasicActionBlock  cancelBlock;
@property (nonatomic, copy) GZIMBasicActionBlock  markBlock;
#endif

-(void)setCancelBlock:(GZIMBasicActionBlock)block;
- (void)setMarkBlock:(GZIMBasicActionBlock)block;

/* 在点击确认后,是否需要dismiss, 默认YES */
@property (nonatomic, assign) BOOL shouldDismissAfterConfirm;

@property (nonatomic, weak) id<GZIMAlertViewDelegate> delegate;
- (id)initWithBackgroundImage:(UIImage * )backImage delegate:(id <GZIMAlertViewDelegate>)delegate;

/* 弹出alert */
- (void)show;

@end
