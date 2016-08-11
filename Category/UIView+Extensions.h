//
//  UIView+Extensions.h
//  League
//
//  Created by 魏航 on 16/5/31.
//  Copyright © 2016年 com.winwho. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Extensions)
@property float x;
@property float y;
@property float width;
@property float height;
@property float yh;
@property float xw;

/*
 * 设置圆角
 */
@property (nonatomic, assign) CGFloat cornerRadius;

/**
 * 设置 填充方式
 */
@property (nonatomic, assign) NSInteger content;

/*
 *  设置边框  宽度
 */
- (void)setBorderColor:(UIColor *)color withWidth:(CGFloat)width;
/*
 *  设置边框  宽度  圆角
 */
- (void)setBorderColor:(UIColor *)color withWidth:(CGFloat)width withCornerRadius:(CGFloat)corner;
//虚线
- (void)drawDashLine:(UIView *)lineView lineLength:(int)lineLength lineSpacing:(int)lineSpacing lineColor:(UIColor *)lineColor spaceX:(float)spaceX highty:(float)highty;
@end

@interface UITableView (Extensions)
- (void)registNib:(NSString *)nibName;
- (void)addTableViewFooterRefresh:(id)target withLoadMore:(SEL)sel;
- (void)addTableViewHeaderRefreshWithTarget:(id)target withAction:(SEL)sel;
@end

@interface UICollectionView (Extensions)
- (void)addCollectionViewFooterRefresh:(id)target withLoadMore:(SEL)sel;
- (void)addCollectionViewHeaderRefreshWithTarget:(id)target withAction:(SEL)sel;
@end

@interface UIImage (fixOrientation)

- (UIImage *)fixOrientation;

@end
