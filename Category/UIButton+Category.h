//
//  UIButton+Category.h
//  League
//
//  Created by 魏航 on 16/6/3.
//  Copyright © 2016年 com.winwho. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (Category)

/**
 * 设置标题 Normal 状态
 */
- (void)setNormalTitle:(NSString *)title;
/**
 * 设置标题颜色 Normal 状态
 */
- (void)setTitleNormalColor:(UIColor *)color;

/**
 * 设置标题颜色 High 状态
 */
- (void)setTitleHighColor:(UIColor *)color;

- (void)setEnabled:(BOOL)enabled withBackgroudColor:(UIColor *)color withTitleColor: (UIColor *)titleColor;
/**
 * 设置图片 Normal 状态
 */
- (void)setNormalImage:(UIImage *)image;

/**
 * 设置图片 Highlighted 状态
 */
- (void)setHighImage:(UIImage *)image;
/**
 * 设置背景图片 Normal 状态
 */
-(void)setNormalBgColor:(UIColor *)color;

/**
 * 设置图片 Highlighted 状态
 */
- (void)setHighColor:(UIColor *)color;
/**
 * 设置背景图片 Normal 状态
 */
- (void)setNormalBackgroundImage:(UIImage *)image;

/**
 * 设置背景图片 Highlighted 状态
 */
- (void)setHighBackgroundImage:(UIImage *)image;

/**
 * 添加事件 TouchUpInside 状态
 */
- (void)addTarget:(id)target Action:(SEL)action;

/**
 * @param 间隔
 * 设置 竖直图片
 */
- (void)verticalImageAndTitle:(CGFloat)spacing;

@end
